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

// Function: func_00151CC0
// Address: 0x151cc0 - 0x151fa0
void func_00151CC0_0x151cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151CC0_0x151cc0");
#endif

    switch (ctx->pc) {
        case 0x151d68u: goto label_151d68;
        case 0x151eb8u: goto label_151eb8;
        case 0x151f08u: goto label_151f08;
        case 0x151f34u: goto label_151f34;
        default: break;
    }

    ctx->pc = 0x151cc0u;

    // 0x151cc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x151cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x151cc4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x151cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x151cc8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x151cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x151ccc: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x151cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
    // 0x151cd0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x151cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x151cd4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x151cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x151cd8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x151cd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cdc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x151cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x151ce0: 0x24b60010  addiu       $s6, $a1, 0x10
    ctx->pc = 0x151ce0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x151ce4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x151ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x151ce8: 0x3c05fc0f  lui         $a1, 0xFC0F
    ctx->pc = 0x151ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64527 << 16));
    // 0x151cec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x151cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x151cf0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x151cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x151cf4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x151cf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cf8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x151cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x151cfc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x151cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x151d00: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x151d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x151d04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151d08: 0x92c20013  lbu         $v0, 0x13($s6)
    ctx->pc = 0x151d08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 19)));
    // 0x151d0c: 0xded00018  ld          $s0, 0x18($s6)
    ctx->pc = 0x151d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x151d10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151d14: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x151d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x151d18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151d1c: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x151d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x151d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151d24: 0x2058024  and         $s0, $s0, $a1
    ctx->pc = 0x151d24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x151d28: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x151d28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x151d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151d30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x151d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d34: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x151d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x151d38: 0x3262003f  andi        $v0, $s3, 0x3F
    ctx->pc = 0x151d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x151d3c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x151d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x151d40: 0x8cf70000  lw          $s7, 0x0($a3)
    ctx->pc = 0x151d40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x151d44: 0x96d40014  lhu         $s4, 0x14($s6)
    ctx->pc = 0x151d44u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x151d48: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x151d48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x151d4c: 0x96c30016  lhu         $v1, 0x16($s6)
    ctx->pc = 0x151d4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
    // 0x151d50: 0x96d2000c  lhu         $s2, 0xC($s6)
    ctx->pc = 0x151d50u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x151d54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x151d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d58: 0xfed00018  sd          $s0, 0x18($s6)
    ctx->pc = 0x151d58u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 24), GPR_U64(ctx, 16));
    // 0x151d5c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x151d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x151d60: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x151D60u;
    SET_GPR_U32(ctx, 31, 0x151D68u);
    ctx->pc = 0x151D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D60u;
    // 0x151d64: 0x2d29021  addu        $s2, $s6, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x151D60u, 0x151D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D68u;
label_151d68:
    // 0x151d68: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x151d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x151d6c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x151d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x151d70: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x151d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x151d74: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x151d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x151d78: 0x3c110003  lui         $s1, 0x3
    ctx->pc = 0x151d78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)3 << 16));
    // 0x151d7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x151d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151d80: 0x36318000  ori         $s1, $s1, 0x8000
    ctx->pc = 0x151d80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32768);
    // 0x151d84: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x151d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x151d88: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x151d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x151d8c: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x151d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x151d90: 0x962678a8  lhu         $a2, 0x78A8($s1)
    ctx->pc = 0x151d90u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30888)));
    // 0x151d94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x151d94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x151d98: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x151d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x151d9c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x151da0: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x151da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x151da4: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x151da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x151da8: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151da8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151dac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x151dacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x151db0: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x151db0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x151db4: 0x3403ff87  ori         $v1, $zero, 0xFF87
    ctx->pc = 0x151db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65415);
    // 0x151db8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151dbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151dc0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151dc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151dc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151dcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151dd0: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x151dd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x151dd4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x151dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dd8: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151dd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151ddc: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x151ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x151de0: 0x3403ff7f  ori         $v1, $zero, 0xFF7F
    ctx->pc = 0x151de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x151de4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151de8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151dec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151df0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151df4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151df8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151dfc: 0x8ca476b0  lw          $a0, 0x76B0($a1)
    ctx->pc = 0x151dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30384)));
    // 0x151e00: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151e00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151e04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x151e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151e08: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x151e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x151e0c: 0x3403e0ff  ori         $v1, $zero, 0xE0FF
    ctx->pc = 0x151e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57599);
    // 0x151e10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151e14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151e18: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151e1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151e20: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151e24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151e28: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x151e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x151e2c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151e2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151e30: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x151e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x151e34: 0x2058024  and         $s0, $s0, $a1
    ctx->pc = 0x151e34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x151e38: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x151e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x151e3c: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x151e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x151e40: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x151e40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x151e44: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x151e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x151e48: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x151e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x151e4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x151e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x151e50: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x151e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x151e54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x151e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x151e58: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x151e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x151e5c: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x151e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    // 0x151e60: 0x32e33fff  andi        $v1, $s7, 0x3FFF
    ctx->pc = 0x151e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16383);
    // 0x151e64: 0x2058024  and         $s0, $s0, $a1
    ctx->pc = 0x151e64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x151e68: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x151e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x151e6c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x151e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x151e70: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x151e70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x151e74: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x151e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x151e78: 0x96c3000c  lhu         $v1, 0xC($s6)
    ctx->pc = 0x151e78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x151e7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x151e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e80: 0xfc905c88  sd          $s0, 0x5C88($a0)
    ctx->pc = 0x151e80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 23688), GPR_U64(ctx, 16));
    // 0x151e84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x151e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e88: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x151e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x151e8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x151e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e90: 0x962278a8  lhu         $v0, 0x78A8($s1)
    ctx->pc = 0x151e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30888)));
    // 0x151e94: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x151e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x151e98: 0x8faa0030  lw          $t2, 0x30($sp)
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151e9c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x151e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ea0: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x151ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x151ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151ea8: 0xa62278a8  sh          $v0, 0x78A8($s1)
    ctx->pc = 0x151ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30888), (uint16_t)GPR_U32(ctx, 2));
    // 0x151eac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x151eacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151eb0: 0xc05445a  jal         func_151168
    ctx->pc = 0x151EB0u;
    SET_GPR_U32(ctx, 31, 0x151EB8u);
    ctx->pc = 0x151EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EB0u;
    // 0x151eb4: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151168u, 0x151EB0u, 0x151EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EB8u;
label_151eb8:
    // 0x151eb8: 0x922378aa  lbu         $v1, 0x78AA($s1)
    ctx->pc = 0x151eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30890)));
    // 0x151ebc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x151ec0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151ec4: 0xa22378aa  sb          $v1, 0x78AA($s1)
    ctx->pc = 0x151ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30890), (uint8_t)GPR_U32(ctx, 3));
    // 0x151ec8: 0x92c20013  lbu         $v0, 0x13($s6)
    ctx->pc = 0x151ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 19)));
    // 0x151ecc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151ECCu;
    {
        const bool branch_taken_0x151ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x151ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151ECCu;
        // 0x151ed0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ecc) {
            ctx->pc = 0x151EE0u;
            goto label_151ee0;
        }
    }
    ctx->pc = 0x151ED4u;
    // 0x151ed4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x151ed8: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x151ED8u;
    {
        const bool branch_taken_0x151ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x151ed8) {
            ctx->pc = 0x151EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151ED8u;
            // 0x151edc: 0xafbe0000  sw          $fp, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151F10u;
            goto label_151f10;
        }
    }
    ctx->pc = 0x151EE0u;
label_151ee0:
    // 0x151ee0: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x151ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x151ee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x151ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ef0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x151ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ef4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151ef8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151efc: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151f00: 0xc0543da  jal         func_150F68
    ctx->pc = 0x151F00u;
    SET_GPR_U32(ctx, 31, 0x151F08u);
    ctx->pc = 0x151F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F00u;
    // 0x151f04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F68u, 0x151F00u, 0x151F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F08u;
label_151f08:
    // 0x151f08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151F08u;
    {
        const bool branch_taken_0x151f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F08u;
        // 0x151f0c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f08) {
            ctx->pc = 0x151F38u;
            goto label_151f38;
        }
    }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x151f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f1c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x151f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f24: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x151f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x151f28: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151f2c: 0xc0543da  jal         func_150F68
    ctx->pc = 0x151F2Cu;
    SET_GPR_U32(ctx, 31, 0x151F34u);
    ctx->pc = 0x151F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F2Cu;
    // 0x151f30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F68u, 0x151F2Cu, 0x151F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F34u;
label_151f34:
    // 0x151f34: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x151f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_151f38:
    // 0x151f38: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x151f38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x151f3c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x151f40: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x151f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151f44: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x151f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x151f48: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x151f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151f4c: 0x904378ab  lbu         $v1, 0x78AB($v0)
    ctx->pc = 0x151f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30891)));
    // 0x151f50: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x151f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151f54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151f58: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x151f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151f5c: 0xa04378ab  sb          $v1, 0x78AB($v0)
    ctx->pc = 0x151f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 30891), (uint8_t)GPR_U32(ctx, 3));
    // 0x151f60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x151f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151f64: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x151f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x151f68: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x151f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151f6c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x151f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x151f70: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x151f70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151f74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x151f78: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x151f78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151f7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x151f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x151f80: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x151f80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151f84: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x151f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x151f88: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x151f88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151f8c: 0xac970000  sw          $s7, 0x0($a0)
    ctx->pc = 0x151f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
    // 0x151f90: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x151f90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151f94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x151f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151f98: 0x3e00008  jr          $ra
    ctx->pc = 0x151F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F98u;
        // 0x151f9c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151FA0u;
}
