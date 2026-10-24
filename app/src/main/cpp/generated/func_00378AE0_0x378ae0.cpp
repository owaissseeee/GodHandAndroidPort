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

// Function: func_00378AE0
// Address: 0x378ae0 - 0x378b58
void func_00378AE0_0x378ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378AE0_0x378ae0");
#endif

    switch (ctx->pc) {
        case 0x378af4u: goto label_378af4;
        case 0x378b04u: goto label_378b04;
        case 0x378b14u: goto label_378b14;
        case 0x378b1cu: goto label_378b1c;
        case 0x378b2cu: goto label_378b2c;
        case 0x378b3cu: goto label_378b3c;
        case 0x378b44u: goto label_378b44;
        default: break;
    }

    ctx->pc = 0x378ae0u;

    // 0x378ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378ae4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x378ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378aec: 0xc0de2d6  jal         func_378B58
    ctx->pc = 0x378AECu;
    SET_GPR_U32(ctx, 31, 0x378AF4u);
    ctx->pc = 0x378AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AECu;
    // 0x378af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378B58u, 0x378AECu, 0x378AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AF4u;
label_378af4:
    // 0x378af4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x378AF4u;
    {
        const bool branch_taken_0x378af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378af4) {
            ctx->pc = 0x378AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378AF4u;
            // 0x378af8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378B48u;
            goto label_378b48;
        }
    }
    ctx->pc = 0x378AFCu;
    // 0x378afc: 0xc0de7b0  jal         func_379EC0
    ctx->pc = 0x378AFCu;
    SET_GPR_U32(ctx, 31, 0x378B04u);
    ctx->pc = 0x378B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AFCu;
    // 0x378b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379EC0u, 0x378AFCu, 0x378B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B04u;
label_378b04:
    // 0x378b04: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x378B04u;
    {
        const bool branch_taken_0x378b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378b04) {
            ctx->pc = 0x378B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378B04u;
            // 0x378b08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378B48u;
            goto label_378b48;
        }
    }
    ctx->pc = 0x378B0Cu;
    // 0x378b0c: 0xc0de87c  jal         func_37A1F0
    ctx->pc = 0x378B0Cu;
    SET_GPR_U32(ctx, 31, 0x378B14u);
    ctx->pc = 0x378B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B0Cu;
    // 0x378b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A1F0u, 0x378B0Cu, 0x378B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B14u;
label_378b14:
    // 0x378b14: 0xc0de932  jal         func_37A4C8
    ctx->pc = 0x378B14u;
    SET_GPR_U32(ctx, 31, 0x378B1Cu);
    ctx->pc = 0x378B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B14u;
    // 0x378b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A4C8u, 0x378B14u, 0x378B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B1Cu;
label_378b1c:
    // 0x378b1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x378B1Cu;
    {
        const bool branch_taken_0x378b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378b1c) {
            ctx->pc = 0x378B3Cu;
            goto label_378b3c;
        }
    }
    ctx->pc = 0x378B24u;
    // 0x378b24: 0xc0de9aa  jal         func_37A6A8
    ctx->pc = 0x378B24u;
    SET_GPR_U32(ctx, 31, 0x378B2Cu);
    ctx->pc = 0x378B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B24u;
    // 0x378b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A6A8u, 0x378B24u, 0x378B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B2Cu;
label_378b2c:
    // 0x378b2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378B2Cu;
    {
        const bool branch_taken_0x378b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378b2c) {
            ctx->pc = 0x378B3Cu;
            goto label_378b3c;
        }
    }
    ctx->pc = 0x378B34u;
    // 0x378b34: 0xc0de9d0  jal         func_37A740
    ctx->pc = 0x378B34u;
    SET_GPR_U32(ctx, 31, 0x378B3Cu);
    ctx->pc = 0x378B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B34u;
    // 0x378b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A740u, 0x378B34u, 0x378B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B3Cu;
label_378b3c:
    // 0x378b3c: 0xc0de8a6  jal         func_37A298
    ctx->pc = 0x378B3Cu;
    SET_GPR_U32(ctx, 31, 0x378B44u);
    ctx->pc = 0x378B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B3Cu;
    // 0x378b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A298u, 0x378B3Cu, 0x378B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B44u;
label_378b44:
    // 0x378b44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378b48:
    // 0x378b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x378B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B4Cu;
        // 0x378b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378B54u;
    // 0x378b54: 0x0  nop
    ctx->pc = 0x378b54u;
    // NOP
    ctx->pc = 0x378b58u;
}
