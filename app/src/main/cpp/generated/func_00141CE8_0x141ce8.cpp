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

// Function: func_00141CE8
// Address: 0x141ce8 - 0x142060
void func_00141CE8_0x141ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00141CE8_0x141ce8");
#endif

    switch (ctx->pc) {
        case 0x141d30u: goto label_141d30;
        case 0x141d3cu: goto label_141d3c;
        case 0x141d8cu: goto label_141d8c;
        case 0x141d98u: goto label_141d98;
        case 0x141da8u: goto label_141da8;
        case 0x141e30u: goto label_141e30;
        case 0x141ed4u: goto label_141ed4;
        case 0x141ee0u: goto label_141ee0;
        case 0x141ef8u: goto label_141ef8;
        case 0x141f3cu: goto label_141f3c;
        case 0x141f48u: goto label_141f48;
        case 0x141fe0u: goto label_141fe0;
        case 0x141ff8u: goto label_141ff8;
        case 0x142010u: goto label_142010;
        case 0x142028u: goto label_142028;
        default: break;
    }

    ctx->pc = 0x141ce8u;

    // 0x141ce8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x141ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x141cec: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x141cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x141cf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x141cf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141cf4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x141cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x141cf8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x141cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x141cfc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x141cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x141d00: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x141d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141d04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x141d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x141d08: 0x26b00210  addiu       $s0, $s5, 0x210
    ctx->pc = 0x141d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 528));
    // 0x141d0c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x141d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x141d10: 0x26b300e0  addiu       $s3, $s5, 0xE0
    ctx->pc = 0x141d10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x141d14: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x141d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x141d18: 0x26b40190  addiu       $s4, $s5, 0x190
    ctx->pc = 0x141d18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x141d1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141d20: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x141d20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x141d24: 0xaea00090  sw          $zero, 0x90($s5)
    ctx->pc = 0x141d24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 0));
    // 0x141d28: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x141D28u;
    SET_GPR_U32(ctx, 31, 0x141D30u);
    ctx->pc = 0x141D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D28u;
    // 0x141d2c: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x141D28u, 0x141D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D30u;
label_141d30:
    // 0x141d30: 0xa2b1001c  sb          $s1, 0x1C($s5)
    ctx->pc = 0x141d30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 28), (uint8_t)GPR_U32(ctx, 17));
    // 0x141d34: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x141D34u;
    SET_GPR_U32(ctx, 31, 0x141D3Cu);
    ctx->pc = 0x141D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D34u;
    // 0x141d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x141D34u, 0x141D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D3Cu;
label_141d3c:
    // 0x141d3c: 0xa211001c  sb          $s1, 0x1C($s0)
    ctx->pc = 0x141d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 17));
    // 0x141d40: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x141d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x141d44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d48: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x141d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x141d4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141d50: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x141d54: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141d58: 0x8ea500cc  lw          $a1, 0xCC($s5)
    ctx->pc = 0x141d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x141d5c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141d60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x141d64: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141d68: 0x8ea300d0  lw          $v1, 0xD0($s5)
    ctx->pc = 0x141d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x141d6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141d70: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x141d74: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141d78: 0x8ea500d4  lw          $a1, 0xD4($s5)
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x141d7c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141d80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x141d84: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x141D84u;
    SET_GPR_U32(ctx, 31, 0x141D8Cu);
    ctx->pc = 0x141D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D84u;
    // 0x141d88: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x141D84u, 0x141D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D8Cu;
label_141d8c:
    // 0x141d8c: 0xa271001c  sb          $s1, 0x1C($s3)
    ctx->pc = 0x141d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 17));
    // 0x141d90: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x141D90u;
    SET_GPR_U32(ctx, 31, 0x141D98u);
    ctx->pc = 0x141D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D90u;
    // 0x141d94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x141D90u, 0x141D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D98u;
label_141d98:
    // 0x141d98: 0xa280001c  sb          $zero, 0x1C($s4)
    ctx->pc = 0x141d98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x141d9c: 0x26449b70  addiu       $a0, $s2, -0x6490
    ctx->pc = 0x141d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x141da0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x141DA0u;
    SET_GPR_U32(ctx, 31, 0x141DA8u);
    ctx->pc = 0x141DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DA0u;
    // 0x141da4: 0xaea00180  sw          $zero, 0x180($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x141DA0u, 0x141DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DA8u;
label_141da8:
    // 0x141da8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x141da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141dac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x141dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x141db0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141DB0u;
    {
        const bool branch_taken_0x141db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x141DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DB0u;
        // 0x141db4: 0xa6a2017c  sh          $v0, 0x17C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141db0) {
            ctx->pc = 0x141DC4u;
            goto label_141dc4;
        }
    }
    ctx->pc = 0x141DB8u;
    // 0x141db8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x141db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141dbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x141DBCu;
    {
        const bool branch_taken_0x141dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DBCu;
        // 0x141dc0: 0xa6a2017c  sh          $v0, 0x17C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141dbc) {
            ctx->pc = 0x141DD0u;
            goto label_141dd0;
        }
    }
    ctx->pc = 0x141DC4u;
label_141dc4:
    // 0x141dc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x141dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x141dc8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x141DC8u;
    {
        const bool branch_taken_0x141dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141dc8) {
            ctx->pc = 0x141DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141DC8u;
            // 0x141dcc: 0xa6a4017c  sh          $a0, 0x17C($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 380), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141DD0u;
            goto label_141dd0;
        }
    }
    ctx->pc = 0x141DD0u;
label_141dd0:
    // 0x141dd0: 0x96a2017c  lhu         $v0, 0x17C($s5)
    ctx->pc = 0x141dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 380)));
    // 0x141dd4: 0x26a80098  addiu       $t0, $s5, 0x98
    ctx->pc = 0x141dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
    // 0x141dd8: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x141dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x141ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x141de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x141de4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x141de8: 0xa6a2017c  sh          $v0, 0x17C($s5)
    ctx->pc = 0x141de8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 380), (uint16_t)GPR_U32(ctx, 2));
    // 0x141dec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x141decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141df0: 0x26d09b70  addiu       $s0, $s6, -0x6490
    ctx->pc = 0x141df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x141df4: 0x26b10190  addiu       $s1, $s5, 0x190
    ctx->pc = 0x141df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x141df8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x141df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x141dfc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x141dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x141e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x141e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141e04: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x141e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x141e08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x141e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141e0c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x141e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141e10: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x141e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x141e14: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x141e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x141e18: 0x96a2017c  lhu         $v0, 0x17C($s5)
    ctx->pc = 0x141e18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 380)));
    // 0x141e1c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x141e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x141e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x141e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141e24: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x141e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x141e28: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x141E28u;
    SET_GPR_U32(ctx, 31, 0x141E30u);
    ctx->pc = 0x141E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E28u;
    // 0x141e2c: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x141E28u, 0x141E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E30u;
label_141e30:
    // 0x141e30: 0x8ea501fc  lw          $a1, 0x1FC($s5)
    ctx->pc = 0x141e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 508)));
    // 0x141e34: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x141e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x141e38: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x141e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x141e3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x141e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e44: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141e48: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x141e4c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141e50: 0x8ea30200  lw          $v1, 0x200($s5)
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x141e54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141e58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x141e5c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141e60: 0x8ea50204  lw          $a1, 0x204($s5)
    ctx->pc = 0x141e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 516)));
    // 0x141e64: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141e68: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x141e6c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141e70: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x141e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x141e74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141e78: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141e7c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141e80: 0x8ea500cc  lw          $a1, 0xCC($s5)
    ctx->pc = 0x141e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x141e84: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141e88: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141e8c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141e90: 0x8ea300d0  lw          $v1, 0xD0($s5)
    ctx->pc = 0x141e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x141e94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141e98: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141e9c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141ea0: 0x8ea500d4  lw          $a1, 0xD4($s5)
    ctx->pc = 0x141ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x141ea4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141ea8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x141ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x141eac: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141eb0: 0x8ea601f8  lw          $a2, 0x1F8($s5)
    ctx->pc = 0x141eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 504)));
    // 0x141eb4: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x141eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x141eb8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x141eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x141ebc: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x141ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x141ec0: 0x8ea301f8  lw          $v1, 0x1F8($s5)
    ctx->pc = 0x141ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 504)));
    // 0x141ec4: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x141ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x141ec8: 0x8ea201f8  lw          $v0, 0x1F8($s5)
    ctx->pc = 0x141ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 504)));
    // 0x141ecc: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x141ECCu;
    SET_GPR_U32(ctx, 31, 0x141ED4u);
    ctx->pc = 0x141ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141ECCu;
    // 0x141ed0: 0xe4400044  swc1        $f0, 0x44($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x141ECCu, 0x141ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141ED4u;
label_141ed4:
    // 0x141ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ed8: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x141ED8u;
    SET_GPR_U32(ctx, 31, 0x141EE0u);
    ctx->pc = 0x141EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141ED8u;
    // 0x141edc: 0xa2a20260  sb          $v0, 0x260($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 608), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x141ED8u, 0x141EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EE0u;
label_141ee0:
    // 0x141ee0: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x141ee4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x141ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ee8: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x141ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x141eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ef0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x141ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x141ef4: 0x26a40130  addiu       $a0, $s5, 0x130
    ctx->pc = 0x141ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
label_141ef8:
    // 0x141ef8: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x141ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x141efc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141EFCu;
    {
        const bool branch_taken_0x141efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EFCu;
        // 0x141f00: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141efc) {
            ctx->pc = 0x141F10u;
            goto label_141f10;
        }
    }
    ctx->pc = 0x141F04u;
    // 0x141f04: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141f08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141F08u;
    {
        const bool branch_taken_0x141f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F08u;
        // 0x141f0c: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f08) {
            ctx->pc = 0x141F18u;
            goto label_141f18;
        }
    }
    ctx->pc = 0x141F10u;
label_141f10:
    // 0x141f10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141f14: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x141f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_141f18:
    // 0x141f18: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141f1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x141f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141f20: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x141f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x141f24: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x141F24u;
    {
        const bool branch_taken_0x141f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F24u;
        // 0x141f28: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f24) {
            ctx->pc = 0x141EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141ef8;
        }
    }
    ctx->pc = 0x141F2Cu;
    // 0x141f2c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x141f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x141f30: 0x2610b000  addiu       $s0, $s0, -0x5000
    ctx->pc = 0x141f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946816));
    // 0x141f34: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x141F34u;
    SET_GPR_U32(ctx, 31, 0x141F3Cu);
    ctx->pc = 0x141F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F34u;
    // 0x141f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x141F34u, 0x141F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F3Cu;
label_141f3c:
    // 0x141f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f40: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x141F40u;
    SET_GPR_U32(ctx, 31, 0x141F48u);
    ctx->pc = 0x141F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F40u;
    // 0x141f44: 0xe6a00264  swc1        $f0, 0x264($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 612), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x141F40u, 0x141F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F48u;
label_141f48:
    // 0x141f48: 0xe6a00268  swc1        $f0, 0x268($s5)
    ctx->pc = 0x141f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 616), bits); }
    // 0x141f4c: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x141f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x141f50: 0x8ea50164  lw          $a1, 0x164($s5)
    ctx->pc = 0x141f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
    // 0x141f54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141f5c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141f60: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141f64: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141f64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141f68: 0x8ea30168  lw          $v1, 0x168($s5)
    ctx->pc = 0x141f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x141f6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141f70: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141f74: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141f78: 0x8ea5016c  lw          $a1, 0x16C($s5)
    ctx->pc = 0x141f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 364)));
    // 0x141f7c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141f80: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141f84: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141f84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141f88: 0x8ea30170  lw          $v1, 0x170($s5)
    ctx->pc = 0x141f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
    // 0x141f8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141f90: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141f94: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141f98: 0x8ea50174  lw          $a1, 0x174($s5)
    ctx->pc = 0x141f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x141f9c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141fa0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141fa4: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141fa8: 0x8ea30178  lw          $v1, 0x178($s5)
    ctx->pc = 0x141fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
    // 0x141fac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141fb0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141fb4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141fb8: 0x8ea500dc  lw          $a1, 0xDC($s5)
    ctx->pc = 0x141fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x141fbc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x141fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x141fc0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141fc4: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x141fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x141fc8: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x141fcc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x141fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x141fd0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x141fd4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x141fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x141fd8: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x141FD8u;
    SET_GPR_U32(ctx, 31, 0x141FE0u);
    ctx->pc = 0x141FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141FD8u;
    // 0x141fdc: 0x8ea500c4  lw          $a1, 0xC4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x141FD8u, 0x141FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FE0u;
label_141fe0:
    // 0x141fe0: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x141fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141fe8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141fec: 0xa040004f  sb          $zero, 0x4F($v0)
    ctx->pc = 0x141fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x141ff0: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x141FF0u;
    SET_GPR_U32(ctx, 31, 0x141FF8u);
    ctx->pc = 0x141FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141FF0u;
    // 0x141ff4: 0x8ea501e8  lw          $a1, 0x1E8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x141FF0u, 0x141FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FF8u;
label_141ff8:
    // 0x141ff8: 0x8ea201e8  lw          $v0, 0x1E8($s5)
    ctx->pc = 0x141ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 488)));
    // 0x141ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142004: 0xa040004f  sb          $zero, 0x4F($v0)
    ctx->pc = 0x142004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x142008: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142008u;
    SET_GPR_U32(ctx, 31, 0x142010u);
    ctx->pc = 0x14200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142008u;
    // 0x14200c: 0x8ea50208  lw          $a1, 0x208($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142008u, 0x142010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142010u;
label_142010:
    // 0x142010: 0x8ea20208  lw          $v0, 0x208($s5)
    ctx->pc = 0x142010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 520)));
    // 0x142014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142018: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14201c: 0xa040004f  sb          $zero, 0x4F($v0)
    ctx->pc = 0x14201cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x142020: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142020u;
    SET_GPR_U32(ctx, 31, 0x142028u);
    ctx->pc = 0x142024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142020u;
    // 0x142024: 0x8ea5020c  lw          $a1, 0x20C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142020u, 0x142028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142028u;
label_142028:
    // 0x142028: 0x8ea3020c  lw          $v1, 0x20C($s5)
    ctx->pc = 0x142028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
    // 0x14202c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142030: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x142030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x142034: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x142034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x142038: 0xa2a0026f  sb          $zero, 0x26F($s5)
    ctx->pc = 0x142038u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 623), (uint8_t)GPR_U32(ctx, 0));
    // 0x14203c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14203cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x142040: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x142040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142044: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x142044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142048: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x142048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14204c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14204cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142050: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x142050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142058: 0x3e00008  jr          $ra
    ctx->pc = 0x142058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142058u;
        // 0x14205c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142060u;
}
