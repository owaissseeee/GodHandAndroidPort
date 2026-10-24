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

// Function: cOmBase_switchOff
// Address: 0x1aac90 - 0x1aad88
void cOmBase_switchOff_0x1aac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_switchOff_0x1aac90");
#endif

    switch (ctx->pc) {
        case 0x1aacb4u: goto label_1aacb4;
        case 0x1aacc8u: goto label_1aacc8;
        case 0x1aad24u: goto label_1aad24;
        case 0x1aad44u: goto label_1aad44;
        case 0x1aad54u: goto label_1aad54;
        case 0x1aad64u: goto label_1aad64;
        default: break;
    }

    ctx->pc = 0x1aac90u;

    // 0x1aac90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aac94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aac98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aac9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aac9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaca0: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1aaca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1aaca4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AACA4u;
    {
        const bool branch_taken_0x1aaca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaca4) {
            ctx->pc = 0x1AACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AACA4u;
            // 0x1aaca8: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACB8u;
            goto label_1aacb8;
        }
    }
    ctx->pc = 0x1AACACu;
    // 0x1aacac: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AACACu;
    SET_GPR_U32(ctx, 31, 0x1AACB4u);
    ctx->pc = 0x1AACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACACu;
    // 0x1aacb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AACACu, 0x1AACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACB4u;
label_1aacb4:
    // 0x1aacb4: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1aacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1aacb8:
    // 0x1aacb8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AACB8u;
    {
        const bool branch_taken_0x1aacb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aacb8) {
            ctx->pc = 0x1AACBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AACB8u;
            // 0x1aacbc: 0x8e04060c  lw          $a0, 0x60C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACCCu;
            goto label_1aaccc;
        }
    }
    ctx->pc = 0x1AACC0u;
    // 0x1aacc0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AACC0u;
    SET_GPR_U32(ctx, 31, 0x1AACC8u);
    ctx->pc = 0x1AACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACC0u;
    // 0x1aacc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AACC0u, 0x1AACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACC8u;
label_1aacc8:
    // 0x1aacc8: 0x8e04060c  lw          $a0, 0x60C($s0)
    ctx->pc = 0x1aacc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
label_1aaccc:
    // 0x1aaccc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AACCCu;
    {
        const bool branch_taken_0x1aaccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACCCu;
        // 0x1aacd0: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaccc) {
            ctx->pc = 0x1AACE0u;
            goto label_1aace0;
        }
    }
    ctx->pc = 0x1AACD4u;
    // 0x1aacd4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1aacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aacd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aacd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aacdc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1aacdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1aace0:
    // 0x1aace0: 0x8e040610  lw          $a0, 0x610($s0)
    ctx->pc = 0x1aace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x1aace4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AACE4u;
    {
        const bool branch_taken_0x1aace4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE4u;
        // 0x1aace8: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aace4) {
            ctx->pc = 0x1AACF8u;
            goto label_1aacf8;
        }
    }
    ctx->pc = 0x1AACECu;
    // 0x1aacec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1aacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aacf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aacf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aacf4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1aacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1aacf8:
    // 0x1aacf8: 0x8e040614  lw          $a0, 0x614($s0)
    ctx->pc = 0x1aacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x1aacfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AACFCu;
    {
        const bool branch_taken_0x1aacfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACFCu;
        // 0x1aad00: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacfc) {
            ctx->pc = 0x1AAD10u;
            goto label_1aad10;
        }
    }
    ctx->pc = 0x1AAD04u;
    // 0x1aad04: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1aad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aad08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aad0c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1aad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1aad10:
    // 0x1aad10: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1aad10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1aad14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aad14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad18: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1aad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1aad1c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1AAD1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD24u);
    ctx->pc = 0x1AAD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD1Cu;
    // 0x1aad20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1AAD1Cu, 0x1AAD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD24u;
label_1aad24:
    // 0x1aad24: 0x8e0209d0  lw          $v0, 0x9D0($s0)
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1aad28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1aad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1aad2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aad34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aad38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aad38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aad3c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1AAD3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD44u);
    ctx->pc = 0x1AAD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD3Cu;
    // 0x1aad40: 0xae0209d0  sw          $v0, 0x9D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1AAD3Cu, 0x1AAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD44u;
label_1aad44:
    // 0x1aad44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aad44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1aad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1aad4c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1AAD4Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD54u);
    ctx->pc = 0x1AAD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD4Cu;
    // 0x1aad50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1AAD4Cu, 0x1AAD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD54u;
label_1aad54:
    // 0x1aad54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aad58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aad5c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AAD5Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD64u);
    ctx->pc = 0x1AAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD5Cu;
    // 0x1aad60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AAD5Cu, 0x1AAD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD64u;
label_1aad64:
    // 0x1aad64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aad68: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1aad68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aad6c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1aad6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aad70: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1aad70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aad74: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1aad74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aad78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aad78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aad7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aad7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aad80: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD80u;
        // 0x1aad84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAD88u;
}
