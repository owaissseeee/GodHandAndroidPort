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

// Function: JukeBox_Execute
// Address: 0x1f5cc0 - 0x1f5e90
void JukeBox_Execute_0x1f5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("JukeBox_Execute_0x1f5cc0");
#endif

    switch (ctx->pc) {
        case 0x1f5d20u: goto label_1f5d20;
        case 0x1f5d54u: goto label_1f5d54;
        case 0x1f5d6cu: goto label_1f5d6c;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d7cu: goto label_1f5d7c;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5d94u: goto label_1f5d94;
        case 0x1f5d9cu: goto label_1f5d9c;
        case 0x1f5db0u: goto label_1f5db0;
        case 0x1f5db8u: goto label_1f5db8;
        case 0x1f5dc8u: goto label_1f5dc8;
        case 0x1f5ddcu: goto label_1f5ddc;
        case 0x1f5df8u: goto label_1f5df8;
        case 0x1f5e04u: goto label_1f5e04;
        case 0x1f5e24u: goto label_1f5e24;
        case 0x1f5e34u: goto label_1f5e34;
        case 0x1f5e3cu: goto label_1f5e3c;
        case 0x1f5e58u: goto label_1f5e58;
        case 0x1f5e64u: goto label_1f5e64;
        default: break;
    }

    ctx->pc = 0x1f5cc0u;

    // 0x1f5cc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f5cc4: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x1f5cc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f5ccc: 0x24c27a78  addiu       $v0, $a2, 0x7A78
    ctx->pc = 0x1f5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31352));
    // 0x1f5cd0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f5cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f5cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ce0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1f5ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1f5ce4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5ce8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1f5ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1f5cec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cf0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1f5cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1f5cf4: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x1f5cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x1f5cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5cfc: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1f5cfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d00: 0x8cc37a78  lw          $v1, 0x7A78($a2)
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1f5d04: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1f5d04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x1f5d08: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f5d0c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f5d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f5d10: 0x8c520034  lw          $s2, 0x34($v0)
    ctx->pc = 0x1f5d10u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x747AACu));
    // 0x1f5d14: 0xacc37a78  sw          $v1, 0x7A78($a2)
    ctx->pc = 0x1f5d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x1f5d18: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x1F5D18u;
    SET_GPR_U32(ctx, 31, 0x1F5D20u);
    ctx->pc = 0x1F5D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D18u;
    // 0x1f5d1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x1F5D18u, 0x1F5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D20u;
label_1f5d20:
    // 0x1f5d20: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1f5d24: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1f5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f5d28: 0x2610ac90  addiu       $s0, $s0, -0x5370
    ctx->pc = 0x1f5d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945936));
    // 0x1f5d2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f5d2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d30: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f5d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5d34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d3c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1f5d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1f5d40: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1f5d40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f5d44: 0xa60201b0  sh          $v0, 0x1B0($s0)
    ctx->pc = 0x1f5d44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 432), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f5d48: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1f5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1f5d4c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1F5D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F5D54u);
    ctx->pc = 0x1F5D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D4Cu;
    // 0x1f5d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1F5D4Cu, 0x1F5D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D54u;
label_1f5d54:
    // 0x1f5d54: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f5d58: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f5d5c: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x1f5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1f5d60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f5d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d64: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1F5D64u;
    SET_GPR_U32(ctx, 31, 0x1F5D6Cu);
    ctx->pc = 0x1F5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D64u;
    // 0x1f5d68: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1F5D64u, 0x1F5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D6Cu;
label_1f5d6c:
    // 0x1f5d6c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F5D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F5D74u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F5D6Cu, 0x1F5D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D74u;
label_1f5d74:
    // 0x1f5d74: 0xc04b106  jal         func_12C418
    ctx->pc = 0x1F5D74u;
    SET_GPR_U32(ctx, 31, 0x1F5D7Cu);
    ctx->pc = 0x1F5D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D74u;
    // 0x1f5d78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x1F5D74u, 0x1F5D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D7Cu;
label_1f5d7c:
    // 0x1f5d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d80: 0xc07dade  jal         func_1F6B78
    ctx->pc = 0x1F5D80u;
    SET_GPR_U32(ctx, 31, 0x1F5D88u);
    ctx->pc = 0x1F5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D80u;
    // 0x1f5d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B78u, 0x1F5D80u, 0x1F5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D88u;
label_1f5d88:
    // 0x1f5d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d8c: 0xc07db10  jal         func_1F6C40
    ctx->pc = 0x1F5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F5D94u);
    ctx->pc = 0x1F5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D8Cu;
    // 0x1f5d90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C40u, 0x1F5D8Cu, 0x1F5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D94u;
label_1f5d94:
    // 0x1f5d94: 0xc07d6a6  jal         func_1F5A98
    ctx->pc = 0x1F5D94u;
    SET_GPR_U32(ctx, 31, 0x1F5D9Cu);
    ctx->pc = 0x1F5D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D94u;
    // 0x1f5d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5A98u, 0x1F5D94u, 0x1F5D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D9Cu;
label_1f5d9c:
    // 0x1f5d9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5D9Cu;
    {
        const bool branch_taken_0x1f5d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D9Cu;
        // 0x1f5da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d9c) {
            ctx->pc = 0x1F5DD4u;
            goto label_1f5dd4;
        }
    }
    ctx->pc = 0x1F5DA4u;
    // 0x1f5da4: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x1f5da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f5da8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5DA8u;
    {
        const bool branch_taken_0x1f5da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5da8) {
            ctx->pc = 0x1F5DD4u;
            goto label_1f5dd4;
        }
    }
    ctx->pc = 0x1F5DB0u;
label_1f5db0:
    // 0x1f5db0: 0xc07d7a4  jal         func_1F5E90
    ctx->pc = 0x1F5DB0u;
    SET_GPR_U32(ctx, 31, 0x1F5DB8u);
    ctx->pc = 0x1F5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DB0u;
    // 0x1f5db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5E90u, 0x1F5DB0u, 0x1F5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DB8u;
label_1f5db8:
    // 0x1f5db8: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x1f5dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5dc0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1F5DC0u;
    SET_GPR_U32(ctx, 31, 0x1F5DC8u);
    ctx->pc = 0x1F5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DC0u;
    // 0x1f5dc4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1F5DC0u, 0x1F5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DC8u;
label_1f5dc8:
    // 0x1f5dc8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x1f5dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f5dcc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F5DCCu;
    {
        const bool branch_taken_0x1f5dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DCCu;
        // 0x1f5dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5dcc) {
            ctx->pc = 0x1F5DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5db0;
        }
    }
    ctx->pc = 0x1F5DD4u;
label_1f5dd4:
    // 0x1f5dd4: 0xc07d712  jal         func_1F5C48
    ctx->pc = 0x1F5DD4u;
    SET_GPR_U32(ctx, 31, 0x1F5DDCu);
    ctx->pc = 0x1F5DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DD4u;
    // 0x1f5dd8: 0x26b07470  addiu       $s0, $s5, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C48u, 0x1F5DD4u, 0x1F5DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DDCu;
label_1f5ddc:
    // 0x1f5ddc: 0x26c3ac90  addiu       $v1, $s6, -0x5370
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945936));
    // 0x1f5de0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1f5de4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f5de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5de8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f5dec: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x1f5df0: 0xc0b453e  jal         func_2D14F8
    ctx->pc = 0x1F5DF0u;
    SET_GPR_U32(ctx, 31, 0x1F5DF8u);
    ctx->pc = 0x1F5DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DF0u;
    // 0x1f5df4: 0xa46201b0  sh          $v0, 0x1B0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 432), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D14F8u, 0x1F5DF0u, 0x1F5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DF8u;
label_1f5df8:
    // 0x1f5df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dfc: 0xc07dade  jal         func_1F6B78
    ctx->pc = 0x1F5DFCu;
    SET_GPR_U32(ctx, 31, 0x1F5E04u);
    ctx->pc = 0x1F5E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DFCu;
    // 0x1f5e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B78u, 0x1F5DFCu, 0x1F5E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E04u;
label_1f5e04:
    // 0x1f5e04: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f5e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5e08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e0c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1f5e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1f5e10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f5e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e14: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1f5e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f5e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e1c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1F5E1Cu;
    SET_GPR_U32(ctx, 31, 0x1F5E24u);
    ctx->pc = 0x1F5E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E1Cu;
    // 0x1f5e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1F5E1Cu, 0x1F5E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E24u;
label_1f5e24:
    // 0x1f5e24: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x1f5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x1f5e28: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f5e2c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1F5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5E34u);
    ctx->pc = 0x1F5E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E2Cu;
    // 0x1f5e30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1F5E2Cu, 0x1F5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E34u;
label_1f5e34:
    // 0x1f5e34: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1F5E34u;
    SET_GPR_U32(ctx, 31, 0x1F5E3Cu);
    ctx->pc = 0x1F5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E34u;
    // 0x1f5e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1F5E34u, 0x1F5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E3Cu;
label_1f5e3c:
    // 0x1f5e3c: 0x123202  srl         $a2, $s2, 8
    ctx->pc = 0x1f5e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x1f5e40: 0x123c02  srl         $a3, $s2, 16
    ctx->pc = 0x1f5e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1f5e44: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1f5e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1f5e48: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f5e48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1f5e4c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1f5e4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1f5e50: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x1F5E50u;
    SET_GPR_U32(ctx, 31, 0x1F5E58u);
    ctx->pc = 0x1F5E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E50u;
    // 0x1f5e54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x1F5E50u, 0x1F5E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E58u;
label_1f5e58:
    // 0x1f5e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e5c: 0xc07db10  jal         func_1F6C40
    ctx->pc = 0x1F5E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F5E64u);
    ctx->pc = 0x1F5E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E5Cu;
    // 0x1f5e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C40u, 0x1F5E5Cu, 0x1F5E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E64u;
label_1f5e64:
    // 0x1f5e64: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f5e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5e68: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f5e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5e6c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f5e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5e70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f5e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5e74: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1f5e74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5e78: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1f5e78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5e7c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1f5e7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E84u;
        // 0x1f5e88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5E8Cu;
    // 0x1f5e8c: 0x0  nop
    ctx->pc = 0x1f5e8cu;
    // NOP
    ctx->pc = 0x1f5e90u;
}
