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

// Function: func_001D7DC0
// Address: 0x1d7dc0 - 0x1d8120
void func_001D7DC0_0x1d7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D7DC0_0x1d7dc0");
#endif

    switch (ctx->pc) {
        case 0x1d7dfcu: goto label_1d7dfc;
        case 0x1d7e08u: goto label_1d7e08;
        case 0x1d7e58u: goto label_1d7e58;
        case 0x1d7e64u: goto label_1d7e64;
        case 0x1d7ea8u: goto label_1d7ea8;
        case 0x1d7eb4u: goto label_1d7eb4;
        case 0x1d7ed8u: goto label_1d7ed8;
        case 0x1d7f04u: goto label_1d7f04;
        case 0x1d7f10u: goto label_1d7f10;
        case 0x1d7f1cu: goto label_1d7f1c;
        case 0x1d7f28u: goto label_1d7f28;
        case 0x1d7f58u: goto label_1d7f58;
        case 0x1d7f7cu: goto label_1d7f7c;
        case 0x1d7f94u: goto label_1d7f94;
        case 0x1d7fa0u: goto label_1d7fa0;
        case 0x1d7facu: goto label_1d7fac;
        case 0x1d7fc4u: goto label_1d7fc4;
        case 0x1d7fd0u: goto label_1d7fd0;
        case 0x1d8000u: goto label_1d8000;
        case 0x1d8024u: goto label_1d8024;
        case 0x1d8048u: goto label_1d8048;
        case 0x1d806cu: goto label_1d806c;
        case 0x1d8090u: goto label_1d8090;
        case 0x1d80b0u: goto label_1d80b0;
        case 0x1d80c8u: goto label_1d80c8;
        case 0x1d80ecu: goto label_1d80ec;
        case 0x1d8108u: goto label_1d8108;
        default: break;
    }

    ctx->pc = 0x1d7dc0u;

    // 0x1d7dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7dc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d7dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d7dcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7dd4: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d7dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d7dd8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7DD8u;
    {
        const bool branch_taken_0x1d7dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DD8u;
        // 0x1d7ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dd8) {
            ctx->pc = 0x1D7DF0u;
            goto label_1d7df0;
        }
    }
    ctx->pc = 0x1D7DE0u;
    // 0x1d7de0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7DE0u;
    {
        const bool branch_taken_0x1d7de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DE0u;
        // 0x1d7de4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7de0) {
            ctx->pc = 0x1D7E18u;
            goto label_1d7e18;
        }
    }
    ctx->pc = 0x1D7DE8u;
    // 0x1d7de8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1D7DE8u;
    {
        const bool branch_taken_0x1d7de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DE8u;
        // 0x1d7dec: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7de8) {
            ctx->pc = 0x1D8004u;
            goto label_1d8004;
        }
    }
    ctx->pc = 0x1D7DF0u;
label_1d7df0:
    // 0x1d7df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7df4: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D7DF4u;
    SET_GPR_U32(ctx, 31, 0x1D7DFCu);
    ctx->pc = 0x1D7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DF4u;
    // 0x1d7df8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D7DF4u, 0x1D7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DFCu;
label_1d7dfc:
    // 0x1d7dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e00: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D7E00u;
    SET_GPR_U32(ctx, 31, 0x1D7E08u);
    ctx->pc = 0x1D7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E00u;
    // 0x1d7e04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D7E00u, 0x1D7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E08u;
label_1d7e08:
    // 0x1d7e08: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d7e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d7e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d7e10: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1d7e10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7e14: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d7e18:
    // 0x1d7e18: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d7e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d7e1c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d7e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d7e20: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d7e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d7e24: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d7e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d7e28: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d7e2c: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d7e2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d7e30: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d7e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d7e34: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7E34u;
    {
        const bool branch_taken_0x1d7e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e34) {
            ctx->pc = 0x1D7E84u;
            goto label_1d7e84;
        }
    }
    ctx->pc = 0x1D7E3Cu;
    // 0x1d7e3c: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7e40: 0x8e233030  lw          $v1, 0x3030($s1)
    ctx->pc = 0x1d7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12336)));
    // 0x1d7e44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d7e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d7e48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7E48u;
    {
        const bool branch_taken_0x1d7e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E48u;
        // 0x1d7e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e48) {
            ctx->pc = 0x1D7E70u;
            goto label_1d7e70;
        }
    }
    ctx->pc = 0x1D7E50u;
    // 0x1d7e50: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D7E50u;
    SET_GPR_U32(ctx, 31, 0x1D7E58u);
    ctx->pc = 0x1D7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E50u;
    // 0x1d7e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D7E50u, 0x1D7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E58u;
label_1d7e58:
    // 0x1d7e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5c: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E64u);
    ctx->pc = 0x1D7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E5Cu;
    // 0x1d7e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D7E5Cu, 0x1D7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E64u;
label_1d7e64:
    // 0x1d7e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e68: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7e68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7e6c: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d7e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1d7e70:
    // 0x1d7e70: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d7e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e78: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7e7c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1D7E7Cu;
    {
        const bool branch_taken_0x1d7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E7Cu;
        // 0x1d7e80: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e7c) {
            ctx->pc = 0x1D7F44u;
            goto label_1d7f44;
        }
    }
    ctx->pc = 0x1D7E84u;
label_1d7e84:
    // 0x1d7e84: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d7e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d7e88: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d7e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d7e8c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d7e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d7e90: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1d7e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d7e94: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d7e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d7e98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7E98u;
    {
        const bool branch_taken_0x1d7e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E98u;
        // 0x1d7e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e98) {
            ctx->pc = 0x1D7EE8u;
            goto label_1d7ee8;
        }
    }
    ctx->pc = 0x1D7EA0u;
    // 0x1d7ea0: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D7EA0u;
    SET_GPR_U32(ctx, 31, 0x1D7EA8u);
    ctx->pc = 0x1D7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EA0u;
    // 0x1d7ea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D7EA0u, 0x1D7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EA8u;
label_1d7ea8:
    // 0x1d7ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7eac: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D7EACu;
    SET_GPR_U32(ctx, 31, 0x1D7EB4u);
    ctx->pc = 0x1D7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EACu;
    // 0x1d7eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D7EACu, 0x1D7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EB4u;
label_1d7eb4:
    // 0x1d7eb4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d7eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ebc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d7ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7ec0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d7ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d7ec4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d7ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7ec8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7ecc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ed0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D7ED0u;
    SET_GPR_U32(ctx, 31, 0x1D7ED8u);
    ctx->pc = 0x1D7ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7ED0u;
    // 0x1d7ed4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D7ED0u, 0x1D7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ED8u;
label_1d7ed8:
    // 0x1d7ed8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7edc: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7edcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7ee0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1D7EE0u;
    {
        const bool branch_taken_0x1d7ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EE0u;
        // 0x1d7ee4: 0xa2233024  sb          $v1, 0x3024($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ee0) {
            ctx->pc = 0x1D8000u;
            goto label_1d8000;
        }
    }
    ctx->pc = 0x1D7EE8u;
label_1d7ee8:
    // 0x1d7ee8: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1d7ee8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1d7eec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d7ef0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d7ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7ef4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7EF4u;
    {
        const bool branch_taken_0x1d7ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EF4u;
        // 0x1d7ef8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ef4) {
            ctx->pc = 0x1D7F60u;
            goto label_1d7f60;
        }
    }
    ctx->pc = 0x1D7EFCu;
    // 0x1d7efc: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D7EFCu;
    SET_GPR_U32(ctx, 31, 0x1D7F04u);
    ctx->pc = 0x1D7F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EFCu;
    // 0x1d7f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D7EFCu, 0x1D7F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F04u;
label_1d7f04:
    // 0x1d7f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f08: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D7F08u;
    SET_GPR_U32(ctx, 31, 0x1D7F10u);
    ctx->pc = 0x1D7F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F08u;
    // 0x1d7f0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D7F08u, 0x1D7F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F10u;
label_1d7f10:
    // 0x1d7f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f14: 0xc077610  jal         func_1DD840
    ctx->pc = 0x1D7F14u;
    SET_GPR_U32(ctx, 31, 0x1D7F1Cu);
    ctx->pc = 0x1D7F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F14u;
    // 0x1d7f18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD840u, 0x1D7F14u, 0x1D7F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F1Cu;
label_1d7f1c:
    // 0x1d7f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f20: 0xc077678  jal         func_1DD9E0
    ctx->pc = 0x1D7F20u;
    SET_GPR_U32(ctx, 31, 0x1D7F28u);
    ctx->pc = 0x1D7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F20u;
    // 0x1d7f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9E0u, 0x1D7F20u, 0x1D7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F28u;
label_1d7f28:
    // 0x1d7f28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7f2c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d7f30: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7f30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7f34: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7f38: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d7f38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f40: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_1d7f44:
    // 0x1d7f44: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d7f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7f48: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d7f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7f4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7f4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f50: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D7F50u;
    SET_GPR_U32(ctx, 31, 0x1D7F58u);
    ctx->pc = 0x1D7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F50u;
    // 0x1d7f54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D7F50u, 0x1D7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F58u;
label_1d7f58:
    // 0x1d7f58: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D7F58u;
    {
        const bool branch_taken_0x1d7f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F58u;
        // 0x1d7f5c: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f58) {
            ctx->pc = 0x1D8004u;
            goto label_1d8004;
        }
    }
    ctx->pc = 0x1D7F60u;
label_1d7f60:
    // 0x1d7f60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d7f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7f64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D7F64u;
    {
        const bool branch_taken_0x1d7f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F64u;
        // 0x1d7f68: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f64) {
            ctx->pc = 0x1D8000u;
            goto label_1d8000;
        }
    }
    ctx->pc = 0x1D7F6Cu;
    // 0x1d7f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f70: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d7f74: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D7F74u;
    SET_GPR_U32(ctx, 31, 0x1D7F7Cu);
    ctx->pc = 0x1D7F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F74u;
    // 0x1d7f78: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D7F74u, 0x1D7F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F7Cu;
label_1d7f7c:
    // 0x1d7f7c: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f84: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1d7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d7f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f8c: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1D7F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F94u);
    ctx->pc = 0x1D7F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F8Cu;
    // 0x1d7f90: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1D7F8Cu, 0x1D7F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F94u;
label_1d7f94:
    // 0x1d7f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f98: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D7F98u;
    SET_GPR_U32(ctx, 31, 0x1D7FA0u);
    ctx->pc = 0x1D7F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F98u;
    // 0x1d7f9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D7F98u, 0x1D7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FA0u;
label_1d7fa0:
    // 0x1d7fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa4: 0xc077610  jal         func_1DD840
    ctx->pc = 0x1D7FA4u;
    SET_GPR_U32(ctx, 31, 0x1D7FACu);
    ctx->pc = 0x1D7FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FA4u;
    // 0x1d7fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD840u, 0x1D7FA4u, 0x1D7FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FACu;
label_1d7fac:
    // 0x1d7fac: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7fb0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7FB0u;
    {
        const bool branch_taken_0x1d7fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB0u;
        // 0x1d7fb4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fb0) {
            ctx->pc = 0x1D7FE0u;
            goto label_1d7fe0;
        }
    }
    ctx->pc = 0x1D7FB8u;
    // 0x1d7fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fbc: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D7FBCu;
    SET_GPR_U32(ctx, 31, 0x1D7FC4u);
    ctx->pc = 0x1D7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FBCu;
    // 0x1d7fc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D7FBCu, 0x1D7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FC4u;
label_1d7fc4:
    // 0x1d7fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc8: 0xc077568  jal         func_1DD5A0
    ctx->pc = 0x1D7FC8u;
    SET_GPR_U32(ctx, 31, 0x1D7FD0u);
    ctx->pc = 0x1D7FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FC8u;
    // 0x1d7fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A0u, 0x1D7FC8u, 0x1D7FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FD0u;
label_1d7fd0:
    // 0x1d7fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fd4: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7fd8: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d7fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7fdc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d7fe0:
    // 0x1d7fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fe4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7fe8: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d7fec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d7fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7ff0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d7ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7ff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ff8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D7FF8u;
    SET_GPR_U32(ctx, 31, 0x1D8000u);
    ctx->pc = 0x1D7FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FF8u;
    // 0x1d7ffc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D7FF8u, 0x1D8000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8000u;
label_1d8000:
    // 0x1d8000: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d8000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
label_1d8004:
    // 0x1d8004: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8004u;
    {
        const bool branch_taken_0x1d8004 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8004u;
        // 0x1d8008: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8004) {
            ctx->pc = 0x1D8014u;
            goto label_1d8014;
        }
    }
    ctx->pc = 0x1D800Cu;
    // 0x1d800c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D800Cu;
    {
        const bool branch_taken_0x1d800c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D800Cu;
        // 0x1d8010: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d800c) {
            ctx->pc = 0x1D8018u;
            goto label_1d8018;
        }
    }
    ctx->pc = 0x1D8014u;
label_1d8014:
    // 0x1d8014: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1d8014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d8018:
    // 0x1d8018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d801c: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D801Cu;
    SET_GPR_U32(ctx, 31, 0x1D8024u);
    ctx->pc = 0x1D8020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D801Cu;
    // 0x1d8020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D801Cu, 0x1D8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8024u;
label_1d8024:
    // 0x1d8024: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8028: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8028u;
    {
        const bool branch_taken_0x1d8028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8028u;
        // 0x1d802c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8028) {
            ctx->pc = 0x1D8038u;
            goto label_1d8038;
        }
    }
    ctx->pc = 0x1D8030u;
    // 0x1d8030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8030u;
    {
        const bool branch_taken_0x1d8030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8030u;
        // 0x1d8034: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8030) {
            ctx->pc = 0x1D803Cu;
            goto label_1d803c;
        }
    }
    ctx->pc = 0x1D8038u;
label_1d8038:
    // 0x1d8038: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d8038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d803c:
    // 0x1d803c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8040: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8040u;
    SET_GPR_U32(ctx, 31, 0x1D8048u);
    ctx->pc = 0x1D8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8040u;
    // 0x1d8044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8040u, 0x1D8048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8048u;
label_1d8048:
    // 0x1d8048: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d8048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d804c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D804Cu;
    {
        const bool branch_taken_0x1d804c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D804Cu;
        // 0x1d8050: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d804c) {
            ctx->pc = 0x1D805Cu;
            goto label_1d805c;
        }
    }
    ctx->pc = 0x1D8054u;
    // 0x1d8054: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8054u;
    {
        const bool branch_taken_0x1d8054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8054u;
        // 0x1d8058: 0x463023  subu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8054) {
            ctx->pc = 0x1D8060u;
            goto label_1d8060;
        }
    }
    ctx->pc = 0x1D805Cu;
label_1d805c:
    // 0x1d805c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1d805cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d8060:
    // 0x1d8060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8064: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8064u;
    SET_GPR_U32(ctx, 31, 0x1D806Cu);
    ctx->pc = 0x1D8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8064u;
    // 0x1d8068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8064u, 0x1D806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D806Cu;
label_1d806c:
    // 0x1d806c: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d806cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8070: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8070u;
    {
        const bool branch_taken_0x1d8070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8070u;
        // 0x1d8074: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8070) {
            ctx->pc = 0x1D8080u;
            goto label_1d8080;
        }
    }
    ctx->pc = 0x1D8078u;
    // 0x1d8078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8078u;
    {
        const bool branch_taken_0x1d8078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8078u;
        // 0x1d807c: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8078) {
            ctx->pc = 0x1D8084u;
            goto label_1d8084;
        }
    }
    ctx->pc = 0x1D8080u;
label_1d8080:
    // 0x1d8080: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d8080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8084:
    // 0x1d8084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8088: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8088u;
    SET_GPR_U32(ctx, 31, 0x1D8090u);
    ctx->pc = 0x1D808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8088u;
    // 0x1d808c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8088u, 0x1D8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8090u;
label_1d8090:
    // 0x1d8090: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1d8090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8094: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d8094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8098: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d809c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d80a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d80a4: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1d80a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d80a8: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D80A8u;
    SET_GPR_U32(ctx, 31, 0x1D80B0u);
    ctx->pc = 0x1D80ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80A8u;
    // 0x1d80ac: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D80A8u, 0x1D80B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80B0u;
label_1d80b0:
    // 0x1d80b0: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d80b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d80b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d80bc: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1d80bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d80c0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D80C0u;
    SET_GPR_U32(ctx, 31, 0x1D80C8u);
    ctx->pc = 0x1D80C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80C0u;
    // 0x1d80c4: 0x202300a  movz        $a2, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D80C0u, 0x1D80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80C8u;
label_1d80c8:
    // 0x1d80c8: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d80c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d80cc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D80CCu;
    {
        const bool branch_taken_0x1d80cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80CCu;
        // 0x1d80d0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80cc) {
            ctx->pc = 0x1D80DCu;
            goto label_1d80dc;
        }
    }
    ctx->pc = 0x1D80D4u;
    // 0x1d80d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D80D4u;
    {
        const bool branch_taken_0x1d80d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80D4u;
        // 0x1d80d8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80d4) {
            ctx->pc = 0x1D80E0u;
            goto label_1d80e0;
        }
    }
    ctx->pc = 0x1D80DCu;
label_1d80dc:
    // 0x1d80dc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d80dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d80e0:
    // 0x1d80e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80e4: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D80E4u;
    SET_GPR_U32(ctx, 31, 0x1D80ECu);
    ctx->pc = 0x1D80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80E4u;
    // 0x1d80e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D80E4u, 0x1D80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80ECu;
label_1d80ec:
    // 0x1d80ec: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d80f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d80f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d80fc: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1d80fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d8100: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8100u;
    SET_GPR_U32(ctx, 31, 0x1D8108u);
    ctx->pc = 0x1D8104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8100u;
    // 0x1d8104: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8100u, 0x1D8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8108u;
label_1d8108:
    // 0x1d8108: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d8108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d810c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d810cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8114: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8114u;
        // 0x1d8118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D811Cu;
    // 0x1d811c: 0x0  nop
    ctx->pc = 0x1d811cu;
    // NOP
    ctx->pc = 0x1d8120u;
}
