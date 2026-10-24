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

// Function: func_001D8B98
// Address: 0x1d8b98 - 0x1d94d0
void func_001D8B98_0x1d8b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D8B98_0x1d8b98");
#endif

    switch (ctx->pc) {
        case 0x1d8c0cu: goto label_1d8c0c;
        case 0x1d8c1cu: goto label_1d8c1c;
        case 0x1d8c2cu: goto label_1d8c2c;
        case 0x1d8c30u: goto label_1d8c30;
        case 0x1d8c58u: goto label_1d8c58;
        case 0x1d8c68u: goto label_1d8c68;
        case 0x1d8c78u: goto label_1d8c78;
        case 0x1d8c90u: goto label_1d8c90;
        case 0x1d8ca0u: goto label_1d8ca0;
        case 0x1d8cbcu: goto label_1d8cbc;
        case 0x1d8cc8u: goto label_1d8cc8;
        case 0x1d8cdcu: goto label_1d8cdc;
        case 0x1d8cf0u: goto label_1d8cf0;
        case 0x1d8d74u: goto label_1d8d74;
        case 0x1d8de0u: goto label_1d8de0;
        case 0x1d8e08u: goto label_1d8e08;
        case 0x1d8e2cu: goto label_1d8e2c;
        case 0x1d8e40u: goto label_1d8e40;
        case 0x1d8eb8u: goto label_1d8eb8;
        case 0x1d8ed8u: goto label_1d8ed8;
        case 0x1d8f28u: goto label_1d8f28;
        case 0x1d8f50u: goto label_1d8f50;
        case 0x1d8f74u: goto label_1d8f74;
        case 0x1d8f88u: goto label_1d8f88;
        case 0x1d9000u: goto label_1d9000;
        case 0x1d9020u: goto label_1d9020;
        case 0x1d9050u: goto label_1d9050;
        case 0x1d9078u: goto label_1d9078;
        case 0x1d9098u: goto label_1d9098;
        case 0x1d90d4u: goto label_1d90d4;
        case 0x1d90e0u: goto label_1d90e0;
        case 0x1d90ecu: goto label_1d90ec;
        case 0x1d910cu: goto label_1d910c;
        case 0x1d9170u: goto label_1d9170;
        case 0x1d9190u: goto label_1d9190;
        case 0x1d91b4u: goto label_1d91b4;
        case 0x1d91f4u: goto label_1d91f4;
        case 0x1d9208u: goto label_1d9208;
        case 0x1d9230u: goto label_1d9230;
        case 0x1d9254u: goto label_1d9254;
        case 0x1d9268u: goto label_1d9268;
        case 0x1d92dcu: goto label_1d92dc;
        case 0x1d92e8u: goto label_1d92e8;
        case 0x1d9308u: goto label_1d9308;
        case 0x1d9340u: goto label_1d9340;
        case 0x1d9354u: goto label_1d9354;
        case 0x1d9368u: goto label_1d9368;
        case 0x1d9378u: goto label_1d9378;
        case 0x1d938cu: goto label_1d938c;
        case 0x1d93bcu: goto label_1d93bc;
        case 0x1d93ccu: goto label_1d93cc;
        case 0x1d93e0u: goto label_1d93e0;
        case 0x1d93e8u: goto label_1d93e8;
        case 0x1d93f8u: goto label_1d93f8;
        case 0x1d94a8u: goto label_1d94a8;
        default: break;
    }

    ctx->pc = 0x1d8b98u;

    // 0x1d8b98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d8b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ba0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d8ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1d8ba4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d8ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1d8ba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d8bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d8bb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d8bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d8bb4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d8bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1d8bb8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d8bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1d8bbc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1d8bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1d8bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8bc4: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d8bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d8bc8: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1D8BC8u;
    {
        const bool branch_taken_0x1d8bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BC8u;
        // 0x1d8bcc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bc8) {
            ctx->pc = 0x1D8D84u;
            goto label_1d8d84;
        }
    }
    ctx->pc = 0x1D8BD0u;
    // 0x1d8bd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8BD0u;
    {
        const bool branch_taken_0x1d8bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bd0) {
            ctx->pc = 0x1D8BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BD0u;
            // 0x1d8bd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BE8u;
            goto label_1d8be8;
        }
    }
    ctx->pc = 0x1D8BD8u;
    // 0x1d8bd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8BD8u;
    {
        const bool branch_taken_0x1d8bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BD8u;
        // 0x1d8bdc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bd8) {
            ctx->pc = 0x1D8BF8u;
            goto label_1d8bf8;
        }
    }
    ctx->pc = 0x1D8BE0u;
    // 0x1d8be0: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x1D8BE0u;
    {
        const bool branch_taken_0x1d8be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BE0u;
        // 0x1d8be4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8be0) {
            ctx->pc = 0x1D94B0u;
            goto label_1d94b0;
        }
    }
    ctx->pc = 0x1D8BE8u;
label_1d8be8:
    // 0x1d8be8: 0x10620174  beq         $v1, $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x1D8BE8u;
    {
        const bool branch_taken_0x1d8be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BE8u;
        // 0x1d8bec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8be8) {
            ctx->pc = 0x1D91BCu;
            goto label_1d91bc;
        }
    }
    ctx->pc = 0x1D8BF0u;
    // 0x1d8bf0: 0x1000022f  b           . + 4 + (0x22F << 2)
    ctx->pc = 0x1D8BF0u;
    {
        const bool branch_taken_0x1d8bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BF0u;
        // 0x1d8bf4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bf0) {
            ctx->pc = 0x1D94B0u;
            goto label_1d94b0;
        }
    }
    ctx->pc = 0x1D8BF8u;
label_1d8bf8:
    // 0x1d8bf8: 0xae20303c  sw          $zero, 0x303C($s1)
    ctx->pc = 0x1d8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12348), GPR_U32(ctx, 0));
    // 0x1d8bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c04: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D8C04u;
    SET_GPR_U32(ctx, 31, 0x1D8C0Cu);
    ctx->pc = 0x1D8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C04u;
    // 0x1d8c08: 0x26343004  addiu       $s4, $s1, 0x3004 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D8C04u, 0x1D8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C0Cu;
label_1d8c0c:
    // 0x1d8c0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d8c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c14: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D8C14u;
    SET_GPR_U32(ctx, 31, 0x1D8C1Cu);
    ctx->pc = 0x1D8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C14u;
    // 0x1d8c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D8C14u, 0x1D8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C1Cu;
label_1d8c1c:
    // 0x1d8c1c: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x1d8c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x1d8c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c24: 0xc07736a  jal         func_1DCDA8
    ctx->pc = 0x1D8C24u;
    SET_GPR_U32(ctx, 31, 0x1D8C2Cu);
    ctx->pc = 0x1D8C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C24u;
    // 0x1d8c28: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCDA8u, 0x1D8C24u, 0x1D8C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C2Cu;
label_1d8c2c:
    // 0x1d8c2c: 0xae223048  sw          $v0, 0x3048($s1)
    ctx->pc = 0x1d8c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12360), GPR_U32(ctx, 2));
label_1d8c30:
    // 0x1d8c30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d8c34: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8c34u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8c38: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1d8c38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1d8c3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d8c40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8C40u;
    {
        const bool branch_taken_0x1d8c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C40u;
        // 0x1d8c44: 0x327000ff  andi        $s0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c40) {
            ctx->pc = 0x1D8C78u;
            goto label_1d8c78;
        }
    }
    ctx->pc = 0x1D8C48u;
    // 0x1d8c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c50: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1D8C50u;
    SET_GPR_U32(ctx, 31, 0x1D8C58u);
    ctx->pc = 0x1D8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C50u;
    // 0x1d8c54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1D8C50u, 0x1D8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C58u;
label_1d8c58:
    // 0x1d8c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c60: 0xc077a94  jal         func_1DEA50
    ctx->pc = 0x1D8C60u;
    SET_GPR_U32(ctx, 31, 0x1D8C68u);
    ctx->pc = 0x1D8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C60u;
    // 0x1d8c64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA50u, 0x1D8C60u, 0x1D8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C68u;
label_1d8c68:
    // 0x1d8c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c70: 0xc077ac2  jal         func_1DEB08
    ctx->pc = 0x1D8C70u;
    SET_GPR_U32(ctx, 31, 0x1D8C78u);
    ctx->pc = 0x1D8C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C70u;
    // 0x1d8c74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB08u, 0x1D8C70u, 0x1D8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C78u;
label_1d8c78:
    // 0x1d8c78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d8c7c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1d8c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8c80: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D8C80u;
    {
        const bool branch_taken_0x1d8c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C80u;
        // 0x1d8c84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c80) {
            ctx->pc = 0x1D8C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8c30;
        }
    }
    ctx->pc = 0x1D8C88u;
    // 0x1d8c88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d8c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c8c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x1d8c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1d8c90:
    // 0x1d8c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c98: 0xc07776c  jal         func_1DDDB0
    ctx->pc = 0x1D8C98u;
    SET_GPR_U32(ctx, 31, 0x1D8CA0u);
    ctx->pc = 0x1D8C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C98u;
    // 0x1d8c9c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDDB0u, 0x1D8C98u, 0x1D8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CA0u;
label_1d8ca0:
    // 0x1d8ca0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1d8ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8ca4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8CA4u;
    {
        const bool branch_taken_0x1d8ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ca4) {
            ctx->pc = 0x1D8CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8CA4u;
            // 0x1d8ca8: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8c90;
        }
    }
    ctx->pc = 0x1D8CACu;
    // 0x1d8cac: 0x9225303c  lbu         $a1, 0x303C($s1)
    ctx->pc = 0x1d8cacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8cb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8cb4: 0xc0777c2  jal         func_1DDF08
    ctx->pc = 0x1D8CB4u;
    SET_GPR_U32(ctx, 31, 0x1D8CBCu);
    ctx->pc = 0x1D8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CB4u;
    // 0x1d8cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDF08u, 0x1D8CB4u, 0x1D8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CBCu;
label_1d8cbc:
    // 0x1d8cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8cc0: 0xc077814  jal         func_1DE050
    ctx->pc = 0x1D8CC0u;
    SET_GPR_U32(ctx, 31, 0x1D8CC8u);
    ctx->pc = 0x1D8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CC0u;
    // 0x1d8cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE050u, 0x1D8CC0u, 0x1D8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CC8u;
label_1d8cc8:
    // 0x1d8cc8: 0x9225303c  lbu         $a1, 0x303C($s1)
    ctx->pc = 0x1d8cc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8cd0: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x1d8cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d8cd4: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D8CD4u;
    SET_GPR_U32(ctx, 31, 0x1D8CDCu);
    ctx->pc = 0x1D8CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CD4u;
    // 0x1d8cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D8CD4u, 0x1D8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CDCu;
label_1d8cdc:
    // 0x1d8cdc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d8ce0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d8ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ce4: 0x24478170  addiu       $a3, $v0, -0x7E90
    ctx->pc = 0x1d8ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x1d8ce8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d8ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8cec: 0x0  nop
    ctx->pc = 0x1d8cecu;
    // NOP
label_1d8cf0:
    // 0x1d8cf0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8cf4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d8cf8: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8cfc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d8cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d8d00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8d04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d8d08: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d8d0c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1d8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1d8d10: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d8d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8d14: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D8D14u;
    {
        const bool branch_taken_0x1d8d14 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1D8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D14u;
        // 0x1d8d18: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d14) {
            ctx->pc = 0x1D8CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8cf0;
        }
    }
    ctx->pc = 0x1D8D1Cu;
    // 0x1d8d1c: 0x8e23303c  lw          $v1, 0x303C($s1)
    ctx->pc = 0x1d8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8d20: 0x26a58170  addiu       $a1, $s5, -0x7E90
    ctx->pc = 0x1d8d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934896));
    // 0x1d8d24: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1d8d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1d8d28: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d8d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1d8d2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8d30: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8d34: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d8d38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d8d3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d8d40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8d44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8d48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8d4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8d50: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d8d54: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d8d58: 0x8e223048  lw          $v0, 0x3048($s1)
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12360)));
    // 0x1d8d5c: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d8d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d8d60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D60u;
    {
        const bool branch_taken_0x1d8d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d60) {
            ctx->pc = 0x1D8D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8D60u;
            // 0x1d8d64: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8D78u;
            goto label_1d8d78;
        }
    }
    ctx->pc = 0x1D8D68u;
    // 0x1d8d68: 0x92253048  lbu         $a1, 0x3048($s1)
    ctx->pc = 0x1d8d68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12360)));
    // 0x1d8d6c: 0xc077a16  jal         func_1DE858
    ctx->pc = 0x1D8D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8D74u);
    ctx->pc = 0x1D8D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D6Cu;
    // 0x1d8d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE858u, 0x1D8D6Cu, 0x1D8D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D74u;
label_1d8d74:
    // 0x1d8d74: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d8d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d8d78:
    // 0x1d8d78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8d7c: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x1D8D7Cu;
    {
        const bool branch_taken_0x1d8d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D7Cu;
        // 0x1d8d80: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d7c) {
            ctx->pc = 0x1D94A8u;
            goto label_1d94a8;
        }
    }
    ctx->pc = 0x1D8D84u;
label_1d8d84:
    // 0x1d8d84: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d8d88: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x1d8d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d8d8c: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x1d8d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x1d8d90: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d8d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d8d94: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x1d8d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
    // 0x1d8d98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d8d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d9c: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1d8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1d8da0: 0xdc4401b0  ld          $a0, 0x1B0($v0)
    ctx->pc = 0x1d8da0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1d8da4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d8da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d8da8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1D8DA8u;
    {
        const bool branch_taken_0x1d8da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8da8) {
            ctx->pc = 0x1D8EE0u;
            goto label_1d8ee0;
        }
    }
    ctx->pc = 0x1D8DB0u;
    // 0x1d8db0: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8db4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8db8: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x1d8db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8dbc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8DBCu;
    {
        const bool branch_taken_0x1d8dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DBCu;
        // 0x1d8dc0: 0xae22303c  sw          $v0, 0x303C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8dbc) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8DC4u;
    // 0x1d8dc4: 0xae20303c  sw          $zero, 0x303C($s1)
    ctx->pc = 0x1d8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12348), GPR_U32(ctx, 0));
label_1d8dc8:
    // 0x1d8dc8: 0x26343004  addiu       $s4, $s1, 0x3004
    ctx->pc = 0x1d8dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    // 0x1d8dcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d8dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8dd0: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x1d8dd4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1d8dd4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1d8dd8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1d8dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ddc: 0x0  nop
    ctx->pc = 0x1d8ddcu;
    // NOP
label_1d8de0:
    // 0x1d8de0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8de4: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8de4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8de8: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1d8de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1d8dec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d8df0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8DF0u;
    {
        const bool branch_taken_0x1d8df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DF0u;
        // 0x1d8df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8df0) {
            ctx->pc = 0x1D8E08u;
            goto label_1d8e08;
        }
    }
    ctx->pc = 0x1D8DF8u;
    // 0x1d8df8: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1d8df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d8dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e00: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D8E00u;
    SET_GPR_U32(ctx, 31, 0x1D8E08u);
    ctx->pc = 0x1D8E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E00u;
    // 0x1d8e04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D8E00u, 0x1D8E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E08u;
label_1d8e08:
    // 0x1d8e08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d8e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d8e0c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1d8e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8e10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D8E10u;
    {
        const bool branch_taken_0x1d8e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E10u;
        // 0x1d8e14: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e10) {
            ctx->pc = 0x1D8DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8de0;
        }
    }
    ctx->pc = 0x1D8E18u;
    // 0x1d8e18: 0x9225303c  lbu         $a1, 0x303C($s1)
    ctx->pc = 0x1d8e18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e20: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x1d8e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d8e24: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D8E24u;
    SET_GPR_U32(ctx, 31, 0x1D8E2Cu);
    ctx->pc = 0x1D8E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E24u;
    // 0x1d8e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D8E24u, 0x1D8E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E2Cu;
label_1d8e2c:
    // 0x1d8e2c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d8e30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d8e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e34: 0x24478170  addiu       $a3, $v0, -0x7E90
    ctx->pc = 0x1d8e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x1d8e38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d8e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8e3c: 0x0  nop
    ctx->pc = 0x1d8e3cu;
    // NOP
label_1d8e40:
    // 0x1d8e40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8e44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d8e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d8e48: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8e4c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d8e50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8e54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d8e58: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d8e5c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1d8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1d8e60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8e64: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D8E64u;
    {
        const bool branch_taken_0x1d8e64 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1D8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E64u;
        // 0x1d8e68: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e64) {
            ctx->pc = 0x1D8E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8e40;
        }
    }
    ctx->pc = 0x1D8E6Cu;
    // 0x1d8e6c: 0x8e23303c  lw          $v1, 0x303C($s1)
    ctx->pc = 0x1d8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8e70: 0x26a58170  addiu       $a1, $s5, -0x7E90
    ctx->pc = 0x1d8e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934896));
    // 0x1d8e74: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1d8e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1d8e78: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d8e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1d8e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8e88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8e8c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d8e90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d8e94: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d8e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8e98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d8e9c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8ea0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d8ea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8ea8: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x1d8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1d8eac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d8eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d8eb0: 0xc0777c2  jal         func_1DDF08
    ctx->pc = 0x1D8EB0u;
    SET_GPR_U32(ctx, 31, 0x1D8EB8u);
    ctx->pc = 0x1D8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8EB0u;
    // 0x1d8eb4: 0x9225303c  lbu         $a1, 0x303C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDF08u, 0x1D8EB0u, 0x1D8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EB8u;
label_1d8eb8:
    // 0x1d8eb8: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1d8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1d8ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ec0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d8ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d8ec4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d8ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8ec8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d8ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8ecc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ed0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D8ED0u;
    SET_GPR_U32(ctx, 31, 0x1D8ED8u);
    ctx->pc = 0x1D8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ED0u;
    // 0x1d8ed4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D8ED0u, 0x1D8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ED8u;
label_1d8ed8:
    // 0x1d8ed8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1D8ED8u;
    {
        const bool branch_taken_0x1d8ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ED8u;
        // 0x1d8edc: 0x266474a0  addiu       $a0, $s3, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ed8) {
            ctx->pc = 0x1D9024u;
            goto label_1d9024;
        }
    }
    ctx->pc = 0x1D8EE0u;
label_1d8ee0:
    // 0x1d8ee0: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1d8ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d8ee4: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1d8ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1d8ee8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d8ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d8eec: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d8eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d8ef0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d8ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d8ef4: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D8EF4u;
    {
        const bool branch_taken_0x1d8ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ef4) {
            ctx->pc = 0x1D8EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8EF4u;
            // 0x1d8ef8: 0x266474a0  addiu       $a0, $s3, 0x74A0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9024u;
            goto label_1d9024;
        }
    }
    ctx->pc = 0x1D8EFCu;
    // 0x1d8efc: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8f00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8f04: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8F04u;
    {
        const bool branch_taken_0x1d8f04 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1D8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F04u;
        // 0x1d8f08: 0xae22303c  sw          $v0, 0x303C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f04) {
            ctx->pc = 0x1D8F14u;
            goto label_1d8f14;
        }
    }
    ctx->pc = 0x1D8F0Cu;
    // 0x1d8f0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8f10: 0xae22303c  sw          $v0, 0x303C($s1)
    ctx->pc = 0x1d8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12348), GPR_U32(ctx, 2));
label_1d8f14:
    // 0x1d8f14: 0x26343004  addiu       $s4, $s1, 0x3004
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    // 0x1d8f18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d8f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f1c: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x1d8f1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x1d8f20: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f24: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1d8f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f28:
    // 0x1d8f28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8f2c: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8f2cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8f30: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1d8f30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1d8f34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d8f38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8F38u;
    {
        const bool branch_taken_0x1d8f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F38u;
        // 0x1d8f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f38) {
            ctx->pc = 0x1D8F50u;
            goto label_1d8f50;
        }
    }
    ctx->pc = 0x1D8F40u;
    // 0x1d8f40: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1d8f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d8f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f48: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D8F48u;
    SET_GPR_U32(ctx, 31, 0x1D8F50u);
    ctx->pc = 0x1D8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F48u;
    // 0x1d8f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D8F48u, 0x1D8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F50u;
label_1d8f50:
    // 0x1d8f50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d8f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d8f54: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1d8f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8f58: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D8F58u;
    {
        const bool branch_taken_0x1d8f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F58u;
        // 0x1d8f5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f58) {
            ctx->pc = 0x1D8F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8f28;
        }
    }
    ctx->pc = 0x1D8F60u;
    // 0x1d8f60: 0x9225303c  lbu         $a1, 0x303C($s1)
    ctx->pc = 0x1d8f60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f68: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x1d8f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d8f6c: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D8F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F74u);
    ctx->pc = 0x1D8F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F6Cu;
    // 0x1d8f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D8F6Cu, 0x1D8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F74u;
label_1d8f74:
    // 0x1d8f74: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d8f78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d8f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f7c: 0x24478170  addiu       $a3, $v0, -0x7E90
    ctx->pc = 0x1d8f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x1d8f80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8f84: 0x0  nop
    ctx->pc = 0x1d8f84u;
    // NOP
label_1d8f88:
    // 0x1d8f88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8f8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d8f90: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8f94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d8f98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8f9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d8fa0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d8fa4: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1d8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1d8fa8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d8fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8fac: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D8FACu;
    {
        const bool branch_taken_0x1d8fac = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FACu;
        // 0x1d8fb0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8fac) {
            ctx->pc = 0x1D8F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8f88;
        }
    }
    ctx->pc = 0x1D8FB4u;
    // 0x1d8fb4: 0x8e23303c  lw          $v1, 0x303C($s1)
    ctx->pc = 0x1d8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d8fb8: 0x26a58170  addiu       $a1, $s5, -0x7E90
    ctx->pc = 0x1d8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934896));
    // 0x1d8fbc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1d8fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1d8fc0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d8fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1d8fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8fd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8fd4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d8fd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d8fdc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8fe0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d8fe4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8fe8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1d8fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d8fec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8ff0: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x1d8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1d8ff4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d8ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d8ff8: 0xc0777c2  jal         func_1DDF08
    ctx->pc = 0x1D8FF8u;
    SET_GPR_U32(ctx, 31, 0x1D9000u);
    ctx->pc = 0x1D8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FF8u;
    // 0x1d8ffc: 0x9225303c  lbu         $a1, 0x303C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDF08u, 0x1D8FF8u, 0x1D9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9000u;
label_1d9000:
    // 0x1d9000: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1d9000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1d9004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9008: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d900c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9010: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d9010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9014: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9018: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D9018u;
    SET_GPR_U32(ctx, 31, 0x1D9020u);
    ctx->pc = 0x1D901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9018u;
    // 0x1d901c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D9018u, 0x1D9020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9020u;
label_1d9020:
    // 0x1d9020: 0x266474a0  addiu       $a0, $s3, 0x74A0
    ctx->pc = 0x1d9020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
label_1d9024:
    // 0x1d9024: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x1d9024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d9028: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1d9028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1d902c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d902cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d9030: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x1d9030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x1d9034: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x1d9034u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1d9038: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d9038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d903c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D903Cu;
    {
        const bool branch_taken_0x1d903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D903Cu;
        // 0x1d9040: 0x26343004  addiu       $s4, $s1, 0x3004 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d903c) {
            ctx->pc = 0x1D911Cu;
            goto label_1d911c;
        }
    }
    ctx->pc = 0x1D9044u;
    // 0x1d9044: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d9044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9048: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1d9048u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1d904c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1d904cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9050:
    // 0x1d9050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9054: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9054u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9058: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1d9058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1d905c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d9060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9060u;
    {
        const bool branch_taken_0x1d9060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9060u;
        // 0x1d9064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9060) {
            ctx->pc = 0x1D9078u;
            goto label_1d9078;
        }
    }
    ctx->pc = 0x1D9068u;
    // 0x1d9068: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1d9068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d906c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d906cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9070: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D9070u;
    SET_GPR_U32(ctx, 31, 0x1D9078u);
    ctx->pc = 0x1D9074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9070u;
    // 0x1d9074: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D9070u, 0x1D9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9078u;
label_1d9078:
    // 0x1d9078: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d9078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d907c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1d907cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d9080: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D9080u;
    {
        const bool branch_taken_0x1d9080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9080u;
        // 0x1d9084: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9080) {
            ctx->pc = 0x1D9050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9050;
        }
    }
    ctx->pc = 0x1D9088u;
    // 0x1d9088: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d9088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d908c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9090: 0x24478170  addiu       $a3, $v0, -0x7E90
    ctx->pc = 0x1d9090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x1d9094: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9098:
    // 0x1d9098: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d909c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d90a0: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d90a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d90a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d90ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d90acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d90b0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d90b4: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1d90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1d90b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d90b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d90bc: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D90BCu;
    {
        const bool branch_taken_0x1d90bc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1D90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90BCu;
        // 0x1d90c0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90bc) {
            ctx->pc = 0x1D9098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9098;
        }
    }
    ctx->pc = 0x1D90C4u;
    // 0x1d90c4: 0x9225303c  lbu         $a1, 0x303C($s1)
    ctx->pc = 0x1d90c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d90c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d90c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90cc: 0xc0777c2  jal         func_1DDF08
    ctx->pc = 0x1D90CCu;
    SET_GPR_U32(ctx, 31, 0x1D90D4u);
    ctx->pc = 0x1D90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90CCu;
    // 0x1d90d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDF08u, 0x1D90CCu, 0x1D90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90D4u;
label_1d90d4:
    // 0x1d90d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90d8: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D90D8u;
    SET_GPR_U32(ctx, 31, 0x1D90E0u);
    ctx->pc = 0x1D90DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90D8u;
    // 0x1d90dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D90D8u, 0x1D90E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90E0u;
label_1d90e0:
    // 0x1d90e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d90e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90e4: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D90E4u;
    SET_GPR_U32(ctx, 31, 0x1D90ECu);
    ctx->pc = 0x1D90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90E4u;
    // 0x1d90e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D90E4u, 0x1D90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90ECu;
label_1d90ec:
    // 0x1d90ec: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1d90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1d90f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d90f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90f4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d90f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d90f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d90f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d90fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d90fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9100: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9104: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D9104u;
    SET_GPR_U32(ctx, 31, 0x1D910Cu);
    ctx->pc = 0x1D9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9104u;
    // 0x1d9108: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D9104u, 0x1D910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D910Cu;
label_1d910c:
    // 0x1d910c: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d910cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d9110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d9110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d9114: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1D9114u;
    {
        const bool branch_taken_0x1d9114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9114u;
        // 0x1d9118: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9114) {
            ctx->pc = 0x1D94A8u;
            goto label_1d94a8;
        }
    }
    ctx->pc = 0x1D911Cu;
label_1d911c:
    // 0x1d911c: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x1d911cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x1d9120: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d9120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d9124: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d9124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d9128: 0x104000e0  beqz        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x1D9128u;
    {
        const bool branch_taken_0x1d9128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9128u;
        // 0x1d912c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9128) {
            ctx->pc = 0x1D94ACu;
            goto label_1d94ac;
        }
    }
    ctx->pc = 0x1D9130u;
    // 0x1d9130: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d9130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d9134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d9134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d9138: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d913c: 0x8c433004  lw          $v1, 0x3004($v0)
    ctx->pc = 0x1d913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12292)));
    // 0x1d9140: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9140u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9144: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d9148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d914c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D914Cu;
    {
        const bool branch_taken_0x1d914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D914Cu;
        // 0x1d9150: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d914c) {
            ctx->pc = 0x1D9178u;
            goto label_1d9178;
        }
    }
    ctx->pc = 0x1D9154u;
    // 0x1d9154: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1d9154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d9158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d915c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1d915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d9160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9164: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d9164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1d9168: 0xc07776c  jal         func_1DDDB0
    ctx->pc = 0x1D9168u;
    SET_GPR_U32(ctx, 31, 0x1D9170u);
    ctx->pc = 0x1D916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9168u;
    // 0x1d916c: 0x9085303c  lbu         $a1, 0x303C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDDB0u, 0x1D9168u, 0x1D9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9170u;
label_1d9170:
    // 0x1d9170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9170u;
    {
        const bool branch_taken_0x1d9170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9170u;
        // 0x1d9174: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9170) {
            ctx->pc = 0x1D9194u;
            goto label_1d9194;
        }
    }
    ctx->pc = 0x1D9178u;
label_1d9178:
    // 0x1d9178: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x1d9178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1d917c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9180: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d9180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1d9184: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9188: 0xc07776c  jal         func_1DDDB0
    ctx->pc = 0x1D9188u;
    SET_GPR_U32(ctx, 31, 0x1D9190u);
    ctx->pc = 0x1D918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9188u;
    // 0x1d918c: 0x9085303c  lbu         $a1, 0x303C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDDB0u, 0x1D9188u, 0x1D9190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9190u;
label_1d9190:
    // 0x1d9190: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d9194:
    // 0x1d9194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9198: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d919c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d91a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d91a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d91a4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d91a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d91a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91ac: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D91ACu;
    SET_GPR_U32(ctx, 31, 0x1D91B4u);
    ctx->pc = 0x1D91B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91ACu;
    // 0x1d91b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D91ACu, 0x1D91B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91B4u;
label_1d91b4:
    // 0x1d91b4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1D91B4u;
    {
        const bool branch_taken_0x1d91b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91B4u;
        // 0x1d91b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91b4) {
            ctx->pc = 0x1D94ACu;
            goto label_1d94ac;
        }
    }
    ctx->pc = 0x1D91BCu;
label_1d91bc:
    // 0x1d91bc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d91c0: 0x34048800  ori         $a0, $zero, 0x8800
    ctx->pc = 0x1d91c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d91c4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1d91c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1d91c8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x1d91c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x1d91cc: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x1d91ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x1d91d0: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1d91d4: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1d91d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1d91d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d91d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d91dc: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D91DCu;
    {
        const bool branch_taken_0x1d91dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91DCu;
        // 0x1d91e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91dc) {
            ctx->pc = 0x1D9318u;
            goto label_1d9318;
        }
    }
    ctx->pc = 0x1D91E4u;
    // 0x1d91e4: 0x9225303c  lbu         $a1, 0x303C($s1)
    ctx->pc = 0x1d91e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d91e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d91e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d91ec: 0xc0777c2  jal         func_1DDF08
    ctx->pc = 0x1D91ECu;
    SET_GPR_U32(ctx, 31, 0x1D91F4u);
    ctx->pc = 0x1D91F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91ECu;
    // 0x1d91f0: 0x26343004  addiu       $s4, $s1, 0x3004 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDF08u, 0x1D91ECu, 0x1D91F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91F4u;
label_1d91f4:
    // 0x1d91f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d91f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91f8: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x1d91f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x1d91fc: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1d91fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1d9200: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1d9200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9204: 0x0  nop
    ctx->pc = 0x1d9204u;
    // NOP
label_1d9208:
    // 0x1d9208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d920c: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d920cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9210: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1d9210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1d9214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d9218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9218u;
    {
        const bool branch_taken_0x1d9218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9218u;
        // 0x1d921c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9218) {
            ctx->pc = 0x1D9230u;
            goto label_1d9230;
        }
    }
    ctx->pc = 0x1D9220u;
    // 0x1d9220: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1d9220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d9224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9228: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D9228u;
    SET_GPR_U32(ctx, 31, 0x1D9230u);
    ctx->pc = 0x1D922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9228u;
    // 0x1d922c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D9228u, 0x1D9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9230u;
label_1d9230:
    // 0x1d9230: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d9230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d9234: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1d9234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d9238: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D9238u;
    {
        const bool branch_taken_0x1d9238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9238u;
        // 0x1d923c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9238) {
            ctx->pc = 0x1D9208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9208;
        }
    }
    ctx->pc = 0x1D9240u;
    // 0x1d9240: 0x9225303c  lbu         $a1, 0x303C($s1)
    ctx->pc = 0x1d9240u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d9244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9248: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x1d9248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d924c: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D924Cu;
    SET_GPR_U32(ctx, 31, 0x1D9254u);
    ctx->pc = 0x1D9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D924Cu;
    // 0x1d9250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D924Cu, 0x1D9254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9254u;
label_1d9254:
    // 0x1d9254: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d9254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d9258: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d9258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d925c: 0x24478170  addiu       $a3, $v0, -0x7E90
    ctx->pc = 0x1d925cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x1d9260: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9264: 0x0  nop
    ctx->pc = 0x1d9264u;
    // NOP
label_1d9268:
    // 0x1d9268: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d9268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d926c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d926cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d9270: 0x8e22303c  lw          $v0, 0x303C($s1)
    ctx->pc = 0x1d9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d9274: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d9274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d9278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d9278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d927c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d9280: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d9284: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1d9284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1d9288: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d9288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d928c: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D928Cu;
    {
        const bool branch_taken_0x1d928c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1D9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D928Cu;
        // 0x1d9290: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d928c) {
            ctx->pc = 0x1D9268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9268;
        }
    }
    ctx->pc = 0x1D9294u;
    // 0x1d9294: 0x8e23303c  lw          $v1, 0x303C($s1)
    ctx->pc = 0x1d9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12348)));
    // 0x1d9298: 0x26a58170  addiu       $a1, $s5, -0x7E90
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934896));
    // 0x1d929c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1d929cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1d92a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d92a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1d92a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d92a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d92a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d92a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d92acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d92b0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d92b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d92b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d92b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d92bc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d92bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d92c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d92c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d92c8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1d92c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d92cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d92ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d92d0: 0x8cc200f0  lw          $v0, 0xF0($a2)
    ctx->pc = 0x1d92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x1d92d4: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D92D4u;
    SET_GPR_U32(ctx, 31, 0x1D92DCu);
    ctx->pc = 0x1D92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92D4u;
    // 0x1d92d8: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D92D4u, 0x1D92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92DCu;
label_1d92dc:
    // 0x1d92dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d92dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92e0: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D92E0u;
    SET_GPR_U32(ctx, 31, 0x1D92E8u);
    ctx->pc = 0x1D92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92E0u;
    // 0x1d92e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D92E0u, 0x1D92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92E8u;
label_1d92e8:
    // 0x1d92e8: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1d92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1d92ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d92ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92f0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d92f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d92f4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d92f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d92f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d92f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d92fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d92fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9300: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D9300u;
    SET_GPR_U32(ctx, 31, 0x1D9308u);
    ctx->pc = 0x1D9304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9300u;
    // 0x1d9304: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D9300u, 0x1D9308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9308u;
label_1d9308:
    // 0x1d9308: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d9308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d930c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9310: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1D9310u;
    {
        const bool branch_taken_0x1d9310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9310u;
        // 0x1d9314: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9310) {
            ctx->pc = 0x1D94A8u;
            goto label_1d94a8;
        }
    }
    ctx->pc = 0x1D9318u;
label_1d9318:
    // 0x1d9318: 0xdc4201a0  ld          $v0, 0x1A0($v0)
    ctx->pc = 0x1d9318u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1d931c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d931cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d9320: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d9320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d9324: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1D9324u;
    {
        const bool branch_taken_0x1d9324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9324u;
        // 0x1d9328: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9324) {
            ctx->pc = 0x1D94A8u;
            goto label_1d94a8;
        }
    }
    ctx->pc = 0x1D932Cu;
    // 0x1d932c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d932cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9330: 0x26a28170  addiu       $v0, $s5, -0x7E90
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934896));
    // 0x1d9334: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1d9334u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1d9338: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x1d9338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d933c: 0x26323004  addiu       $s2, $s1, 0x3004
    ctx->pc = 0x1d933cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
label_1d9340:
    // 0x1d9340: 0x327000ff  andi        $s0, $s3, 0xFF
    ctx->pc = 0x1d9340u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1d9344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d934c: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1D934Cu;
    SET_GPR_U32(ctx, 31, 0x1D9354u);
    ctx->pc = 0x1D9350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D934Cu;
    // 0x1d9350: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1D934Cu, 0x1D9354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9354u;
label_1d9354:
    // 0x1d9354: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d9354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d9358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d935c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d935cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9360: 0xc077a94  jal         func_1DEA50
    ctx->pc = 0x1D9360u;
    SET_GPR_U32(ctx, 31, 0x1D9368u);
    ctx->pc = 0x1D9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9360u;
    // 0x1d9364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA50u, 0x1D9360u, 0x1D9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9368u;
label_1d9368:
    // 0x1d9368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d936c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9370: 0xc077ac2  jal         func_1DEB08
    ctx->pc = 0x1D9370u;
    SET_GPR_U32(ctx, 31, 0x1D9378u);
    ctx->pc = 0x1D9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9370u;
    // 0x1d9374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB08u, 0x1D9370u, 0x1D9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9378u;
label_1d9378:
    // 0x1d9378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d937c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9384: 0xc077afc  jal         func_1DEBF0
    ctx->pc = 0x1D9384u;
    SET_GPR_U32(ctx, 31, 0x1D938Cu);
    ctx->pc = 0x1D9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9384u;
    // 0x1d9388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBF0u, 0x1D9384u, 0x1D938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D938Cu;
label_1d938c:
    // 0x1d938c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d9390: 0x2a640005  slti        $a0, $s3, 0x5
    ctx->pc = 0x1d9390u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d9394: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1d9394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9398: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1d9398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1d939c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d93a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d93a4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1d93a8: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D93A8u;
    {
        const bool branch_taken_0x1d93a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93A8u;
        // 0x1d93ac: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93a8) {
            ctx->pc = 0x1D9340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9340;
        }
    }
    ctx->pc = 0x1D93B0u;
    // 0x1d93b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d93b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93b4: 0xc077a16  jal         func_1DE858
    ctx->pc = 0x1D93B4u;
    SET_GPR_U32(ctx, 31, 0x1D93BCu);
    ctx->pc = 0x1D93B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93B4u;
    // 0x1d93b8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE858u, 0x1D93B4u, 0x1D93BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93BCu;
label_1d93bc:
    // 0x1d93bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d93bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d93c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93c4: 0xc077718  jal         func_1DDC60
    ctx->pc = 0x1D93C4u;
    SET_GPR_U32(ctx, 31, 0x1D93CCu);
    ctx->pc = 0x1D93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93C4u;
    // 0x1d93c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDC60u, 0x1D93C4u, 0x1D93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93CCu;
label_1d93cc:
    // 0x1d93cc: 0xae20303c  sw          $zero, 0x303C($s1)
    ctx->pc = 0x1d93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12348), GPR_U32(ctx, 0));
    // 0x1d93d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d93d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d93d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93d8: 0xc0777c2  jal         func_1DDF08
    ctx->pc = 0x1D93D8u;
    SET_GPR_U32(ctx, 31, 0x1D93E0u);
    ctx->pc = 0x1D93DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93D8u;
    // 0x1d93dc: 0x9225303c  lbu         $a1, 0x303C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDF08u, 0x1D93D8u, 0x1D93E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93E0u;
label_1d93e0:
    // 0x1d93e0: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x1d93e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d93e4: 0x0  nop
    ctx->pc = 0x1d93e4u;
    // NOP
label_1d93e8:
    // 0x1d93e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d93e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d93ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93f0: 0xc07776c  jal         func_1DDDB0
    ctx->pc = 0x1D93F0u;
    SET_GPR_U32(ctx, 31, 0x1D93F8u);
    ctx->pc = 0x1D93F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93F0u;
    // 0x1d93f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDDB0u, 0x1D93F0u, 0x1D93F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93F8u;
label_1d93f8:
    // 0x1d93f8: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1d93f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d93fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D93FCu;
    {
        const bool branch_taken_0x1d93fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93FCu;
        // 0x1d9400: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93fc) {
            ctx->pc = 0x1D93E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93e8;
        }
    }
    ctx->pc = 0x1D9404u;
    // 0x1d9404: 0x8e233004  lw          $v1, 0x3004($s1)
    ctx->pc = 0x1d9404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1d9408: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9408u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d940c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d940cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d9410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d9414: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9414u;
    {
        const bool branch_taken_0x1d9414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9414u;
        // 0x1d9418: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9414) {
            ctx->pc = 0x1D9480u;
            goto label_1d9480;
        }
    }
    ctx->pc = 0x1D941Cu;
    // 0x1d941c: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1d941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1d9420: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9420u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9424: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d9428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d942c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D942Cu;
    {
        const bool branch_taken_0x1d942c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D942Cu;
        // 0x1d9430: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d942c) {
            ctx->pc = 0x1D9480u;
            goto label_1d9480;
        }
    }
    ctx->pc = 0x1D9434u;
    // 0x1d9434: 0x8e23300c  lw          $v1, 0x300C($s1)
    ctx->pc = 0x1d9434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
    // 0x1d9438: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9438u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d943c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d943cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d9440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d9444: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D9444u;
    {
        const bool branch_taken_0x1d9444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9444u;
        // 0x1d9448: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9444) {
            ctx->pc = 0x1D9480u;
            goto label_1d9480;
        }
    }
    ctx->pc = 0x1D944Cu;
    // 0x1d944c: 0x8e233010  lw          $v1, 0x3010($s1)
    ctx->pc = 0x1d944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
    // 0x1d9450: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9450u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9454: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d9458: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d945c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D945Cu;
    {
        const bool branch_taken_0x1d945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D945Cu;
        // 0x1d9460: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d945c) {
            ctx->pc = 0x1D9480u;
            goto label_1d9480;
        }
    }
    ctx->pc = 0x1D9464u;
    // 0x1d9464: 0x8e233014  lw          $v1, 0x3014($s1)
    ctx->pc = 0x1d9464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
    // 0x1d9468: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9468u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d946c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d946cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d9470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d9474: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9474u;
    {
        const bool branch_taken_0x1d9474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9474u;
        // 0x1d9478: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9474) {
            ctx->pc = 0x1D9480u;
            goto label_1d9480;
        }
    }
    ctx->pc = 0x1D947Cu;
    // 0x1d947c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d9480:
    // 0x1d9480: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d9480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9484: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d9484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d9488: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1d9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1d948c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d948cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9490: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d9494: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d9494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9498: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d9498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d949c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d949cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94a0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D94A0u;
    SET_GPR_U32(ctx, 31, 0x1D94A8u);
    ctx->pc = 0x1D94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94A0u;
    // 0x1d94a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D94A0u, 0x1D94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A8u;
label_1d94a8:
    // 0x1d94a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d94a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d94ac:
    // 0x1d94ac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d94acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d94b0:
    // 0x1d94b0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d94b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d94b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d94b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d94b8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d94b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d94bc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d94bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d94c0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1d94c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d94c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C8u;
        // 0x1d94cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94D0u;
}
