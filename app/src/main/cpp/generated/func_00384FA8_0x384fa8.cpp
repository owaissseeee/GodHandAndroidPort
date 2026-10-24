#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00384FA8
// Address: 0x384fa8 - 0x385030
void func_00384FA8_0x384fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384FA8_0x384fa8");
#endif

    switch (ctx->pc) {
        case 0x384fe4u: goto label_384fe4;
        case 0x384ff4u: goto label_384ff4;
        case 0x385010u: goto label_385010;
        case 0x385020u: goto label_385020;
        default: break;
    }

    ctx->pc = 0x384fa8u;

    // 0x384fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x384fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x384fac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x384facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384fb4: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x384fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x384fb8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x384fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x384fbc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x384FBCu;
    {
        const bool branch_taken_0x384fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FBCu;
        // 0x384fc0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384fbc) {
            ctx->pc = 0x385020u;
            goto label_385020;
        }
    }
    ctx->pc = 0x384FC4u;
    // 0x384fc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x384fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x384fc8: 0x2442cdd0  addiu       $v0, $v0, -0x3230
    ctx->pc = 0x384fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954448));
    // 0x384fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x384fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x384fd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x384fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x384fd4: 0x800008  jr          $a0
    ctx->pc = 0x384FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x384FDCu: goto label_384fdc;
            case 0x384FECu: goto label_384fec;
            case 0x384FFCu: goto label_384ffc;
            case 0x385018u: goto label_385018;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384FDCu;
label_384fdc:
    // 0x384fdc: 0xc0e140c  jal         func_385030
    ctx->pc = 0x384FDCu;
    SET_GPR_U32(ctx, 31, 0x384FE4u);
    ctx->pc = 0x384FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384FDCu;
    // 0x384fe0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385030u, 0x384FDCu, 0x384FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384FE4u;
label_384fe4:
    // 0x384fe4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x384FE4u;
    {
        const bool branch_taken_0x384fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FE4u;
        // 0x384fe8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384fe4) {
            ctx->pc = 0x385024u;
            goto label_385024;
        }
    }
    ctx->pc = 0x384FECu;
label_384fec:
    // 0x384fec: 0xc0e1470  jal         func_3851C0
    ctx->pc = 0x384FECu;
    SET_GPR_U32(ctx, 31, 0x384FF4u);
    ctx->pc = 0x384FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384FECu;
    // 0x384ff0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3851C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3851C0u, 0x384FECu, 0x384FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384FF4u;
label_384ff4:
    // 0x384ff4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x384FF4u;
    {
        const bool branch_taken_0x384ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FF4u;
        // 0x384ff8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ff4) {
            ctx->pc = 0x385024u;
            goto label_385024;
        }
    }
    ctx->pc = 0x384FFCu;
label_384ffc:
    // 0x384ffc: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x384ffcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x385000: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x385000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385004: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x385004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x385008: 0xc0e14c2  jal         func_385308
    ctx->pc = 0x385008u;
    SET_GPR_U32(ctx, 31, 0x385010u);
    ctx->pc = 0x38500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385008u;
    // 0x38500c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x385308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385308u, 0x385008u, 0x385010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385010u;
label_385010:
    // 0x385010: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x385010u;
    {
        const bool branch_taken_0x385010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385010u;
        // 0x385014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385010) {
            ctx->pc = 0x385024u;
            goto label_385024;
        }
    }
    ctx->pc = 0x385018u;
label_385018:
    // 0x385018: 0xc0e1504  jal         func_385410
    ctx->pc = 0x385018u;
    SET_GPR_U32(ctx, 31, 0x385020u);
    ctx->pc = 0x38501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385018u;
    // 0x38501c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385410u, 0x385018u, 0x385020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385020u;
label_385020:
    // 0x385020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_385024:
    // 0x385024: 0x3e00008  jr          $ra
    ctx->pc = 0x385024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385024u;
        // 0x385028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38502Cu;
    // 0x38502c: 0x0  nop
    ctx->pc = 0x38502cu;
    // NOP
    ctx->pc = 0x385030u;
}
