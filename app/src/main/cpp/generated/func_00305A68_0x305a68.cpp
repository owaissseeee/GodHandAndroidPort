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

// Function: func_00305A68
// Address: 0x305a68 - 0x305b90
void func_00305A68_0x305a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305A68_0x305a68");
#endif

    switch (ctx->pc) {
        case 0x305a84u: goto label_305a84;
        case 0x305a8cu: goto label_305a8c;
        case 0x305a94u: goto label_305a94;
        case 0x305a9cu: goto label_305a9c;
        case 0x305aa8u: goto label_305aa8;
        case 0x305ac8u: goto label_305ac8;
        case 0x305ae0u: goto label_305ae0;
        case 0x305af8u: goto label_305af8;
        case 0x305b0cu: goto label_305b0c;
        case 0x305b20u: goto label_305b20;
        case 0x305b34u: goto label_305b34;
        case 0x305b44u: goto label_305b44;
        case 0x305b58u: goto label_305b58;
        case 0x305b6cu: goto label_305b6c;
        case 0x305b78u: goto label_305b78;
        default: break;
    }

    ctx->pc = 0x305a68u;

    // 0x305a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x305a6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x305a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x305a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305a7c: 0xc0c020c  jal         func_300830
    ctx->pc = 0x305A7Cu;
    SET_GPR_U32(ctx, 31, 0x305A84u);
    ctx->pc = 0x305A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A7Cu;
    // 0x305a80: 0xa200041c  sb          $zero, 0x41C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1052), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300830u, 0x305A7Cu, 0x305A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A84u;
label_305a84:
    // 0x305a84: 0xc0bee66  jal         func_2FB998
    ctx->pc = 0x305A84u;
    SET_GPR_U32(ctx, 31, 0x305A8Cu);
    ctx->pc = 0x2FB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB998u, 0x305A84u, 0x305A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A8Cu;
label_305a8c:
    // 0x305a8c: 0xc0c15e8  jal         func_3057A0
    ctx->pc = 0x305A8Cu;
    SET_GPR_U32(ctx, 31, 0x305A94u);
    ctx->pc = 0x305A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A8Cu;
    // 0x305a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3057A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3057A0u, 0x305A8Cu, 0x305A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A94u;
label_305a94:
    // 0x305a94: 0xc0c16f0  jal         func_305BC0
    ctx->pc = 0x305A94u;
    SET_GPR_U32(ctx, 31, 0x305A9Cu);
    ctx->pc = 0x305A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A94u;
    // 0x305a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305BC0u, 0x305A94u, 0x305A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A9Cu;
label_305a9c:
    // 0x305a9c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x305a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x305aa0: 0xc0c1aa2  jal         func_306A88
    ctx->pc = 0x305AA0u;
    SET_GPR_U32(ctx, 31, 0x305AA8u);
    ctx->pc = 0x305AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AA0u;
    // 0x305aa4: 0x24841dc8  addiu       $a0, $a0, 0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306A88u, 0x305AA0u, 0x305AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AA8u;
label_305aa8:
    // 0x305aa8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x305aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x305aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ab0: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x305ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x305ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ab8: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x305ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7479F0u));
    // 0x305abc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x305abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x305ac0: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x305AC0u;
    SET_GPR_U32(ctx, 31, 0x305AC8u);
    ctx->pc = 0x305AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AC0u;
    // 0x305ac4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x305AC0u, 0x305AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AC8u;
label_305ac8:
    // 0x305ac8: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x305ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x305acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ad0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x305ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x305ad4: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x305ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x305ad8: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x305AD8u;
    SET_GPR_U32(ctx, 31, 0x305AE0u);
    ctx->pc = 0x305ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AD8u;
    // 0x305adc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x305AD8u, 0x305AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AE0u;
label_305ae0:
    // 0x305ae0: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x305ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x305ae4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x305ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305aec: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x305aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x305af0: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x305AF0u;
    SET_GPR_U32(ctx, 31, 0x305AF8u);
    ctx->pc = 0x305AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AF0u;
    // 0x305af4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x305AF0u, 0x305AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AF8u;
label_305af8:
    // 0x305af8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x305afc: 0x8e2405ac  lw          $a0, 0x5AC($s1)
    ctx->pc = 0x305afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x305b00: 0x24a50068  addiu       $a1, $a1, 0x68
    ctx->pc = 0x305b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x305b04: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x305B04u;
    SET_GPR_U32(ctx, 31, 0x305B0Cu);
    ctx->pc = 0x305B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B04u;
    // 0x305b08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x305B04u, 0x305B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B0Cu;
label_305b0c:
    // 0x305b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305B0Cu;
    {
        const bool branch_taken_0x305b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B0Cu;
        // 0x305b10: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b0c) {
            ctx->pc = 0x305B20u;
            goto label_305b20;
        }
    }
    ctx->pc = 0x305B14u;
    // 0x305b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b18: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x305B18u;
    SET_GPR_U32(ctx, 31, 0x305B20u);
    ctx->pc = 0x305B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B18u;
    // 0x305b1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x305B18u, 0x305B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B20u;
label_305b20:
    // 0x305b20: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x305b24: 0x8e2405ac  lw          $a0, 0x5AC($s1)
    ctx->pc = 0x305b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x305b28: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x305b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x305b2c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x305B2Cu;
    SET_GPR_U32(ctx, 31, 0x305B34u);
    ctx->pc = 0x305B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B2Cu;
    // 0x305b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x305B2Cu, 0x305B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B34u;
label_305b34:
    // 0x305b34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305B34u;
    {
        const bool branch_taken_0x305b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B34u;
        // 0x305b38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b34) {
            ctx->pc = 0x305B44u;
            goto label_305b44;
        }
    }
    ctx->pc = 0x305B3Cu;
    // 0x305b3c: 0xc0c1704  jal         func_305C10
    ctx->pc = 0x305B3Cu;
    SET_GPR_U32(ctx, 31, 0x305B44u);
    ctx->pc = 0x305B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B3Cu;
    // 0x305b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305C10u, 0x305B3Cu, 0x305B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B44u;
label_305b44:
    // 0x305b44: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x305b48: 0x8e2405ac  lw          $a0, 0x5AC($s1)
    ctx->pc = 0x305b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x305b4c: 0x24a50078  addiu       $a1, $a1, 0x78
    ctx->pc = 0x305b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x305b50: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x305B50u;
    SET_GPR_U32(ctx, 31, 0x305B58u);
    ctx->pc = 0x305B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B50u;
    // 0x305b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x305B50u, 0x305B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B58u;
label_305b58:
    // 0x305b58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x305B58u;
    {
        const bool branch_taken_0x305b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b58) {
            ctx->pc = 0x305B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B58u;
            // 0x305b5c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305B70u;
            goto label_305b70;
        }
    }
    ctx->pc = 0x305B60u;
    // 0x305b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b64: 0xc0c1706  jal         func_305C18
    ctx->pc = 0x305B64u;
    SET_GPR_U32(ctx, 31, 0x305B6Cu);
    ctx->pc = 0x305B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B64u;
    // 0x305b68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305C18u, 0x305B64u, 0x305B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B6Cu;
label_305b6c:
    // 0x305b6c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x305b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_305b70:
    // 0x305b70: 0xc0c1b46  jal         func_306D18
    ctx->pc = 0x305B70u;
    SET_GPR_U32(ctx, 31, 0x305B78u);
    ctx->pc = 0x305B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B70u;
    // 0x305b74: 0x24843250  addiu       $a0, $a0, 0x3250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306D18u, 0x305B70u, 0x305B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B78u;
label_305b78:
    // 0x305b78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x305b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305b84: 0x3e00008  jr          $ra
    ctx->pc = 0x305B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B84u;
        // 0x305b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305B8Cu;
    // 0x305b8c: 0x0  nop
    ctx->pc = 0x305b8cu;
    // NOP
    ctx->pc = 0x305b90u;
}
