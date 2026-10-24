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

// Function: func_00151990
// Address: 0x151990 - 0x151cc0
void func_00151990_0x151990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151990_0x151990");
#endif

    switch (ctx->pc) {
        case 0x151a08u: goto label_151a08;
        case 0x151a60u: goto label_151a60;
        case 0x151ba8u: goto label_151ba8;
        case 0x151c10u: goto label_151c10;
        case 0x151c44u: goto label_151c44;
        default: break;
    }

    ctx->pc = 0x151990u;

    // 0x151990: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x151994: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x151994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x151998: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x151998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x15199c: 0x24b50080  addiu       $s5, $a1, 0x80
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1519a0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1519a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1519a4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1519a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1519a8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1519a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1519ac: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1519acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1519b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1519b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1519b4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1519b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1519b8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1519b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1519bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1519bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1519c0: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1519c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1519c4: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x1519c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1519c8: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1519c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1519cc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1519ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1519d0: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x1519d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1519d4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1519d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1519d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1519dc: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x1519dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x1519e0: 0xa2a80a  movz        $s5, $a1, $v0
    ctx->pc = 0x1519e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
    // 0x1519e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1519e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1519e8: 0x8cde0000  lw          $fp, 0x0($a2)
    ctx->pc = 0x1519e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1519ec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1519ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1519f0: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1519F0u;
    {
        const bool branch_taken_0x1519f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519F0u;
        // 0x1519f4: 0x8cf70000  lw          $s7, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519f0) {
            ctx->pc = 0x151C7Cu;
            goto label_151c7c;
        }
    }
    ctx->pc = 0x1519F8u;
    // 0x1519f8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1519fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1519fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x151a00: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x151a00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151a04: 0x0  nop
    ctx->pc = 0x151a04u;
    // NOP
label_151a08:
    // 0x151a08: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x151a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x151a0c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x151a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x151a10: 0x24a5ed68  addiu       $a1, $a1, -0x1298
    ctx->pc = 0x151a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962536));
    // 0x151a14: 0xdeb00018  ld          $s0, 0x18($s5)
    ctx->pc = 0x151a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x151a18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151a1c: 0x3c03fc0f  lui         $v1, 0xFC0F
    ctx->pc = 0x151a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64527 << 16));
    // 0x151a20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151a24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151a28: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151a28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151a2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x151a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x151a30: 0x96b30014  lhu         $s3, 0x14($s5)
    ctx->pc = 0x151a30u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x151a34: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x151a34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151a38: 0x96b1000c  lhu         $s1, 0xC($s5)
    ctx->pc = 0x151a38u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x151a3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x151a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a40: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x151a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x151a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a48: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x151a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x151a4c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x151a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x151a50: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x151a50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x151a54: 0x96b40016  lhu         $s4, 0x16($s5)
    ctx->pc = 0x151a54u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x151a58: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x151A58u;
    SET_GPR_U32(ctx, 31, 0x151A60u);
    ctx->pc = 0x151A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A58u;
    // 0x151a5c: 0xfeb00018  sd          $s0, 0x18($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x151A58u, 0x151A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A60u;
label_151a60:
    // 0x151a60: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x151a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x151a64: 0x33c33fff  andi        $v1, $fp, 0x3FFF
    ctx->pc = 0x151a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16383);
    // 0x151a68: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x151a68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x151a6c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x151a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x151a70: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x151a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x151a74: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x151a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x151a78: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x151a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x151a7c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x151a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x151a80: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x151a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x151a84: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x151a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x151a88: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151a88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151a8c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x151a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a90: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x151a90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x151a94: 0x3403ff87  ori         $v1, $zero, 0xFF87
    ctx->pc = 0x151a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65415);
    // 0x151a98: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151a9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151aa0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151aa4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151aa8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151aac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151ab0: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x151ab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x151ab4: 0x3404ff7f  ori         $a0, $zero, 0xFF7F
    ctx->pc = 0x151ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x151ab8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x151ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x151abc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151ac0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x151ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x151ac4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151ac8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x151ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x151acc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151ad0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151ad0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151ad4: 0x96c578a8  lhu         $a1, 0x78A8($s6)
    ctx->pc = 0x151ad4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 30888)));
    // 0x151ad8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x151ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x151adc: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x151adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x151ae0: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x151ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x151ae4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x151ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151ae8: 0x420fa  dsrl        $a0, $a0, 3
    ctx->pc = 0x151ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 3);
    // 0x151aec: 0x8c670210  lw          $a3, 0x210($v1)
    ctx->pc = 0x151aecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x151af0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x151af4: 0x3403e0ff  ori         $v1, $zero, 0xE0FF
    ctx->pc = 0x151af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57599);
    // 0x151af8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151afc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151b00: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151b04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151b08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151b0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151b10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x151b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b14: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x151b14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151b18: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x151b18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x151b1c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x151b1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x151b20: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x151b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x151b24: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x151b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x151b28: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x151b28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x151b2c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x151b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x151b30: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x151b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x151b34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151b38: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x151b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x151b3c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151b40: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x151b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x151b44: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x151b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x151b48: 0x32e33fff  andi        $v1, $s7, 0x3FFF
    ctx->pc = 0x151b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16383);
    // 0x151b4c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x151b4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x151b50: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x151b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x151b54: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x151b58: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x151b58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x151b5c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x151b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x151b60: 0x96a3000c  lhu         $v1, 0xC($s5)
    ctx->pc = 0x151b60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x151b64: 0x2c73821  addu        $a3, $s6, $a3
    ctx->pc = 0x151b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x151b68: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x151b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x151b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b70: 0xfcf05c88  sd          $s0, 0x5C88($a3)
    ctx->pc = 0x151b70u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 23688), GPR_U64(ctx, 16));
    // 0x151b74: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x151b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x151b78: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x151b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151b7c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x151b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b80: 0x96c278a8  lhu         $v0, 0x78A8($s6)
    ctx->pc = 0x151b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 30888)));
    // 0x151b84: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x151b84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b88: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x151b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x151b8c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x151b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151b94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x151b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151b98: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x151b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x151b9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x151b9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ba0: 0xc0543da  jal         func_150F68
    ctx->pc = 0x151BA0u;
    SET_GPR_U32(ctx, 31, 0x151BA8u);
    ctx->pc = 0x151BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BA0u;
    // 0x151ba4: 0xa6c278a8  sh          $v0, 0x78A8($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 30888), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F68u, 0x151BA0u, 0x151BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BA8u;
label_151ba8:
    // 0x151ba8: 0x92c378aa  lbu         $v1, 0x78AA($s6)
    ctx->pc = 0x151ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 30890)));
    // 0x151bac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x151bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x151bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151bb4: 0xa2c378aa  sb          $v1, 0x78AA($s6)
    ctx->pc = 0x151bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 30890), (uint8_t)GPR_U32(ctx, 3));
    // 0x151bb8: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x151bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x151bbc: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151BBCu;
    {
        const bool branch_taken_0x151bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x151bbc) {
            ctx->pc = 0x151BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151BBCu;
            // 0x151bc0: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151BDCu;
            goto label_151bdc;
        }
    }
    ctx->pc = 0x151BC4u;
    // 0x151bc4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x151bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x151bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x151bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151BD4u;
    {
        const bool branch_taken_0x151bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BD4u;
        // 0x151bd8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151bd4) {
            ctx->pc = 0x151BF8u;
            goto label_151bf8;
        }
    }
    ctx->pc = 0x151BDCu;
label_151bdc:
    // 0x151bdc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x151bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x151be0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x151BE0u;
    {
        const bool branch_taken_0x151be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BE0u;
        // 0x151be4: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151be0) {
            ctx->pc = 0x151C18u;
            goto label_151c18;
        }
    }
    ctx->pc = 0x151BE8u;
    // 0x151be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x151becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bf4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x151bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_151bf8:
    // 0x151bf8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x151bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151c00: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x151c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151c04: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x151c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151c08: 0xc0543da  jal         func_150F68
    ctx->pc = 0x151C08u;
    SET_GPR_U32(ctx, 31, 0x151C10u);
    ctx->pc = 0x151C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C08u;
    // 0x151c0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F68u, 0x151C08u, 0x151C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C10u;
label_151c10:
    // 0x151c10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x151C10u;
    {
        const bool branch_taken_0x151c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C10u;
        // 0x151c14: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c10) {
            ctx->pc = 0x151C48u;
            goto label_151c48;
        }
    }
    ctx->pc = 0x151C18u;
label_151c18:
    // 0x151c18: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x151c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x151c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x151c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x151c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x151c2c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x151c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c30: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151c34: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x151c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x151c38: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x151c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151c3c: 0xc0543da  jal         func_150F68
    ctx->pc = 0x151C3Cu;
    SET_GPR_U32(ctx, 31, 0x151C44u);
    ctx->pc = 0x151C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C3Cu;
    // 0x151c40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F68u, 0x151C3Cu, 0x151C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C44u;
label_151c44:
    // 0x151c44: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x151c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_151c48:
    // 0x151c48: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x151c48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x151c4c: 0x92c278ab  lbu         $v0, 0x78AB($s6)
    ctx->pc = 0x151c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 30891)));
    // 0x151c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151c54: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x151c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151c58: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x151c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x151c5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151c60: 0xa2c278ab  sb          $v0, 0x78AB($s6)
    ctx->pc = 0x151c60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 30891), (uint8_t)GPR_U32(ctx, 2));
    // 0x151c64: 0x65202b  sltu        $a0, $v1, $a1
    ctx->pc = 0x151c64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x151c68: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x151c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x151c6c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x151c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x151c70: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x151c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x151c74: 0x1480ff64  bnez        $a0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x151C74u;
    {
        const bool branch_taken_0x151c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x151C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C74u;
        // 0x151c78: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c74) {
            ctx->pc = 0x151A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a08;
        }
    }
    ctx->pc = 0x151C7Cu;
label_151c7c:
    // 0x151c7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x151c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x151c80: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x151c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151c84: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x151c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x151c88: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x151c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151c8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x151c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x151c90: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x151c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151c94: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x151c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x151c98: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x151c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151c9c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x151c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151ca0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x151ca0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151ca4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x151ca4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151ca8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x151ca8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151cac: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x151cacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151cb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x151CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CB4u;
        // 0x151cb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151CBCu;
    // 0x151cbc: 0x0  nop
    ctx->pc = 0x151cbcu;
    // NOP
    ctx->pc = 0x151cc0u;
}
