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

// Function: func_00384BC8
// Address: 0x384bc8 - 0x384c60
void func_00384BC8_0x384bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384BC8_0x384bc8");
#endif

    switch (ctx->pc) {
        case 0x384c14u: goto label_384c14;
        case 0x384c54u: goto label_384c54;
        default: break;
    }

    ctx->pc = 0x384bc8u;

    // 0x384bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x384bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x384bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384bd0: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x384bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x384bd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x384BD4u;
    {
        const bool branch_taken_0x384bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BD4u;
        // 0x384bd8: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384bd4) {
            ctx->pc = 0x384C1Cu;
            goto label_384c1c;
        }
    }
    ctx->pc = 0x384BDCu;
    // 0x384bdc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x384bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384be0: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x384be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x384be4: 0x25292870  addiu       $t1, $t1, 0x2870
    ctx->pc = 0x384be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10352));
    // 0x384be8: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x384be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x384bec: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384becu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384bf0: 0x24e7cd50  addiu       $a3, $a3, -0x32B0
    ctx->pc = 0x384bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954320));
    // 0x384bf4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x384bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x384bf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x384bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x384bfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384c00: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x384c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x384c04: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x384c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x384c08: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x384c08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x384c0c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384C0Cu;
    SET_GPR_U32(ctx, 31, 0x384C14u);
    ctx->pc = 0x384C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C0Cu;
    // 0x384c10: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384C0Cu, 0x384C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C14u;
label_384c14:
    // 0x384c14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x384C14u;
    {
        const bool branch_taken_0x384c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C14u;
        // 0x384c18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c14) {
            ctx->pc = 0x384C58u;
            goto label_384c58;
        }
    }
    ctx->pc = 0x384C1Cu;
label_384c1c:
    // 0x384c1c: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x384c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x384c20: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x384c20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x384c24: 0x25082870  addiu       $t0, $t0, 0x2870
    ctx->pc = 0x384c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10352));
    // 0x384c28: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384c28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384c2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x384c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x384c30: 0x24e7cd60  addiu       $a3, $a3, -0x32A0
    ctx->pc = 0x384c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954336));
    // 0x384c34: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x384c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x384c38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384c3c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x384c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x384c40: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x384c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x384c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x384c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x384c48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x384c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x384c4c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384C4Cu;
    SET_GPR_U32(ctx, 31, 0x384C54u);
    ctx->pc = 0x384C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C4Cu;
    // 0x384c50: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384C4Cu, 0x384C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C54u;
label_384c54:
    // 0x384c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384c58:
    // 0x384c58: 0x3e00008  jr          $ra
    ctx->pc = 0x384C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C58u;
        // 0x384c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384C60u;
}
