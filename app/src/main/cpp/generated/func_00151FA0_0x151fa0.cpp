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

// Function: func_00151FA0
// Address: 0x151fa0 - 0x1522c0
void func_00151FA0_0x151fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151FA0_0x151fa0");
#endif

    switch (ctx->pc) {
        case 0x152034u: goto label_152034;
        case 0x152060u: goto label_152060;
        case 0x1520c0u: goto label_1520c0;
        case 0x1521dcu: goto label_1521dc;
        case 0x152210u: goto label_152210;
        default: break;
    }

    ctx->pc = 0x151fa0u;

    // 0x151fa0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x151fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x151fa4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x151fa8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x151fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x151fac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x151facu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fb0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x151fb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fb4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x151fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x151fb8: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x151fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x151fbc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x151fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x151fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x151fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x151fc4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x151fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x151fc8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x151fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x151fcc: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x151fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x151fd0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x151fd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fd4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x151fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x151fd8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x151fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x151fdc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x151fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x151fe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x151fe4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x151fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x151fe8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x151fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x151fec: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x151fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x151ff0: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151ff4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x151ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x151ff8: 0x8eaa000c  lw          $t2, 0xC($s5)
    ctx->pc = 0x151ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x151ffc: 0x118180  sll         $s0, $s1, 6
    ctx->pc = 0x151ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x152000: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x152000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x152004: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x152004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x152008: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x152008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x15200c: 0xa5342  srl         $t2, $t2, 13
    ctx->pc = 0x15200cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 13));
    // 0x152010: 0xa51c0  sll         $t2, $t2, 7
    ctx->pc = 0x152010u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 7));
    // 0x152014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152018: 0x8cf30000  lw          $s3, 0x0($a3)
    ctx->pc = 0x152018u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15201c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x15201cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x152020: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x152020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x152024: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x152024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152028: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x152028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15202c: 0xc05445a  jal         func_151168
    ctx->pc = 0x15202Cu;
    SET_GPR_U32(ctx, 31, 0x152034u);
    ctx->pc = 0x152030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15202Cu;
    // 0x152030: 0x323700ff  andi        $s7, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x151168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151168u, 0x15202Cu, 0x152034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152034u;
label_152034:
    // 0x152034: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x152034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x152038: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x152038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x15203c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x15203cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x152040: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x152040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x152044: 0x906278aa  lbu         $v0, 0x78AA($v1)
    ctx->pc = 0x152044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30890)));
    // 0x152048: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x152048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15204c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152050: 0xa06278aa  sb          $v0, 0x78AA($v1)
    ctx->pc = 0x152050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30890), (uint8_t)GPR_U32(ctx, 2));
    // 0x152054: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x152054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x152058: 0x204b021  addu        $s6, $s0, $a0
    ctx->pc = 0x152058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x15205c: 0x0  nop
    ctx->pc = 0x15205cu;
    // NOP
label_152060:
    // 0x152060: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x152060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152064: 0x3c04fc0f  lui         $a0, 0xFC0F
    ctx->pc = 0x152064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64527 << 16));
    // 0x152068: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x152068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15206c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15206cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152070: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x152074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152078: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x152078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15207c: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x15207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x152080: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x152084: 0xde300018  ld          $s0, 0x18($s1)
    ctx->pc = 0x152084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x152088: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x152088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x15208c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x15208cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x152090: 0x96250014  lhu         $a1, 0x14($s1)
    ctx->pc = 0x152090u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x152094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x152094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x152098: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x152098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x15209c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15209cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1520a0: 0x2484ed98  addiu       $a0, $a0, -0x1268
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962584));
    // 0x1520a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1520a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1520a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1520a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1520ac: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x1520acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1520b0: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1520b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x1520b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1520b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1520b8: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x1520B8u;
    SET_GPR_U32(ctx, 31, 0x1520C0u);
    ctx->pc = 0x1520BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520B8u;
    // 0x1520bc: 0xfe300018  sd          $s0, 0x18($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x1520B8u, 0x1520C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520C0u;
label_1520c0:
    // 0x1520c0: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x1520c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1520c4: 0x32843fff  andi        $a0, $s4, 0x3FFF
    ctx->pc = 0x1520c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16383);
    // 0x1520c8: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1520c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1520cc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1520ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1520d0: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x1520d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1520d4: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1520d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1520d8: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x1520d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x1520dc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1520dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1520e0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1520e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1520e4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1520e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1520e8: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x1520e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x1520ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1520ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1520f0: 0x3402ff87  ori         $v0, $zero, 0xFF87
    ctx->pc = 0x1520f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65415);
    // 0x1520f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1520f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1520f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1520f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1520fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1520fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152104: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152108: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15210c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x15210cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x152110: 0x3403ff7f  ori         $v1, $zero, 0xFF7F
    ctx->pc = 0x152110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x152114: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x152114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x152118: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x152118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15211c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15211cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x152120: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x152120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152124: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x152124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x152128: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x152128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15212c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x15212cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x152130: 0x3404e0ff  ori         $a0, $zero, 0xE0FF
    ctx->pc = 0x152130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57599);
    // 0x152134: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x152134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x152138: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x152138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15213c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15213cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x152140: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x152140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152144: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x152144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x152148: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x152148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15214c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x15214cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x152150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152154: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x152154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x152158: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x152158u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x15215c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x15215cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x152160: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x152160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x152164: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x152164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x152168: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x152168u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x15216c: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x15216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x152170: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x152170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x152174: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152178: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15217c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152180: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x152180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x152184: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x152184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x152188: 0x32633fff  andi        $v1, $s3, 0x3FFF
    ctx->pc = 0x152188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x15218c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x15218cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152190: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x152190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x152194: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152198: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x152198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x15219c: 0x92240013  lbu         $a0, 0x13($s1)
    ctx->pc = 0x15219cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x1521a0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1521a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1521a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1521a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1521a8: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1521A8u;
    {
        const bool branch_taken_0x1521a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1521ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521A8u;
        // 0x1521ac: 0xc5b021  addu        $s6, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521a8) {
            ctx->pc = 0x1521E4u;
            goto label_1521e4;
        }
    }
    ctx->pc = 0x1521B0u;
    // 0x1521b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1521b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1521b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1521b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1521b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1521bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1521c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1521c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1521c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1521c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1521cc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1521ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1521d0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1521d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1521d4: 0xc0543da  jal         func_150F68
    ctx->pc = 0x1521D4u;
    SET_GPR_U32(ctx, 31, 0x1521DCu);
    ctx->pc = 0x1521D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521D4u;
    // 0x1521d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F68u, 0x1521D4u, 0x1521DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521DCu;
label_1521dc:
    // 0x1521dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1521DCu;
    {
        const bool branch_taken_0x1521dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521DCu;
        // 0x1521e0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521dc) {
            ctx->pc = 0x152214u;
            goto label_152214;
        }
    }
    ctx->pc = 0x1521E4u;
label_1521e4:
    // 0x1521e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1521e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1521e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1521e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1521ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1521f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1521f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1521f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1521f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1521fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152200: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x152200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152204: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x152204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152208: 0xc0543da  jal         func_150F68
    ctx->pc = 0x152208u;
    SET_GPR_U32(ctx, 31, 0x152210u);
    ctx->pc = 0x15220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152208u;
    // 0x15220c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F68u, 0x152208u, 0x152210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152210u;
label_152210:
    // 0x152210: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x152210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_152214:
    // 0x152214: 0x924278ab  lbu         $v0, 0x78AB($s2)
    ctx->pc = 0x152214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 30891)));
    // 0x152218: 0x248674a0  addiu       $a2, $a0, 0x74A0
    ctx->pc = 0x152218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x15221c: 0x964378a8  lhu         $v1, 0x78A8($s2)
    ctx->pc = 0x15221cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30888)));
    // 0x152220: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152228: 0xa24278ab  sb          $v0, 0x78AB($s2)
    ctx->pc = 0x152228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 30891), (uint8_t)GPR_U32(ctx, 2));
    // 0x15222c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15222cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x152230: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x152230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x152234: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x152238: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x152238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15223c: 0x26e4ffff  addiu       $a0, $s7, -0x1
    ctx->pc = 0x15223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x152240: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x152240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x152244: 0x309700ff  andi        $s7, $a0, 0xFF
    ctx->pc = 0x152244u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x152248: 0x8cc20210  lw          $v0, 0x210($a2)
    ctx->pc = 0x152248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 528)));
    // 0x15224c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152250: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x152250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x152254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152258: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x152258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15225c: 0xfc505c88  sd          $s0, 0x5C88($v0)
    ctx->pc = 0x15225cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 23688), GPR_U64(ctx, 16));
    // 0x152260: 0x964378a8  lhu         $v1, 0x78A8($s2)
    ctx->pc = 0x152260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30888)));
    // 0x152264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x152268: 0xa64378a8  sh          $v1, 0x78A8($s2)
    ctx->pc = 0x152268u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30888), (uint16_t)GPR_U32(ctx, 3));
    // 0x15226c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x152270: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x152270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x152274: 0x16e0ff7a  bnez        $s7, . + 4 + (-0x86 << 2)
    ctx->pc = 0x152274u;
    {
        const bool branch_taken_0x152274 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x152278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152274u;
        // 0x152278: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152274) {
            ctx->pc = 0x152060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152060;
        }
    }
    ctx->pc = 0x15227Cu;
    // 0x15227c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152280: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x152280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152284: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x152284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x152288: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x152288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15228c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x15228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x152290: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x152290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152294: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x152294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x152298: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x152298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15229c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x15229cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1522a0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1522a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1522a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1522a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1522a8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1522a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1522ac: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1522acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1522b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1522b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1522b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1522B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1522B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522B4u;
        // 0x1522b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1522B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1522BCu;
    // 0x1522bc: 0x0  nop
    ctx->pc = 0x1522bcu;
    // NOP
    ctx->pc = 0x1522c0u;
}
