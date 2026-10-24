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

// Function: func_002A4FD8
// Address: 0x2a4fd8 - 0x2a52e8
void func_002A4FD8_0x2a4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4FD8_0x2a4fd8");
#endif

    switch (ctx->pc) {
        case 0x2a5014u: goto label_2a5014;
        default: break;
    }

    ctx->pc = 0x2a4fd8u;

    // 0x2a4fd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a4fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a4fdc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2a4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2a4fe0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2a4fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2a4fe4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2a4fe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fe8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2a4fe8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fec: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2a4fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2a4ff0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a4ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2a4ff4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a4ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2a4ff8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2a4ffc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a4ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2a5000: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a5000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a5004: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2a5004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2a5008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a500c: 0xc0a93cc  jal         func_2A4F30
    ctx->pc = 0x2A500Cu;
    SET_GPR_U32(ctx, 31, 0x2A5014u);
    ctx->pc = 0x2A5010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A500Cu;
    // 0x2a5010: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4F30u, 0x2A500Cu, 0x2A5014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5014u;
label_2a5014:
    // 0x2a5014: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a5014u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5018: 0x13c000a7  beqz        $fp, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2A5018u;
    {
        const bool branch_taken_0x2a5018 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5018u;
        // 0x2a501c: 0x161100  sll         $v0, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5018) {
            ctx->pc = 0x2A52B8u;
            goto label_2a52b8;
        }
    }
    ctx->pc = 0x2A5020u;
    // 0x2a5020: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x2a5020u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x2a5024: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2a5028: 0x3c0b1100  lui         $t3, 0x1100
    ctx->pc = 0x2a5028u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4352 << 16));
    // 0x2a502c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2a502cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5030: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x2a5030u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x2a5034: 0x36100005  ori         $s0, $s0, 0x5
    ctx->pc = 0x2a5034u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5);
    // 0x2a5038: 0x34e70005  ori         $a3, $a3, 0x5
    ctx->pc = 0x2a5038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5);
    // 0x2a503c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x2a503cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a5040: 0x139b7c  dsll32      $s3, $s3, 13
    ctx->pc = 0x2a5040u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 13));
    // 0x2a5044: 0x36738004  ori         $s3, $s3, 0x8004
    ctx->pc = 0x2a5044u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32772);
    // 0x2a5048: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x2a5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2a504c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x2a504cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x2a5050: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x2a5050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x2a5054: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a5054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a5058: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2a505c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x2a505cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x2a5060: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x2a5060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a5064: 0x3c185000  lui         $t8, 0x5000
    ctx->pc = 0x2a5064u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20480 << 16));
    // 0x2a5068: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x2a5068u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x2a506c: 0x3c095000  lui         $t1, 0x5000
    ctx->pc = 0x2a506cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20480 << 16));
    // 0x2a5070: 0xafcb0008  sw          $t3, 0x8($fp)
    ctx->pc = 0x2a5070u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 11));
    // 0x2a5074: 0x27240050  addiu       $a0, $t9, 0x50
    ctx->pc = 0x2a5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 80));
    // 0x2a5078: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x2a5078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x2a507c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x2a507cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2a5080: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a5080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a5084: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x2a5084u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a5088: 0x7b220000  lq          $v0, 0x0($t9)
    ctx->pc = 0x2a5088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2a508c: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x2a508cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a5090: 0x240f003f  addiu       $t7, $zero, 0x3F
    ctx->pc = 0x2a5090u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a5094: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x2a5094u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x2a5098: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x2a5098u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x2a509c: 0x7fc20010  sq          $v0, 0x10($fp)
    ctx->pc = 0x2a509cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 2));
    // 0x2a50a0: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x2a50a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x2a50a4: 0xffd30010  sd          $s3, 0x10($fp)
    ctx->pc = 0x2a50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 19));
    // 0x2a50a8: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x2a50a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a50ac: 0x12937c  dsll32      $s2, $s2, 13
    ctx->pc = 0x2a50acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 13));
    // 0x2a50b0: 0x36528001  ori         $s2, $s2, 0x8001
    ctx->pc = 0x2a50b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32769);
    // 0x2a50b4: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x2a50b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2a50b8: 0x24151cf0  addiu       $s5, $zero, 0x1CF0
    ctx->pc = 0x2a50b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x2a50bc: 0x7b220010  lq          $v0, 0x10($t9)
    ctx->pc = 0x2a50bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2a50c0: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x2a50c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x2a50c4: 0x358c0007  ori         $t4, $t4, 0x7
    ctx->pc = 0x2a50c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)7);
    // 0x2a50c8: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x2a50c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x2a50cc: 0x7fc20020  sq          $v0, 0x20($fp)
    ctx->pc = 0x2a50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), GPR_VEC(ctx, 2));
    // 0x2a50d0: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x2a50d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x2a50d4: 0x2e84021  addu        $t0, $s7, $t0
    ctx->pc = 0x2a50d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x2a50d8: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x2a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a50dc: 0x24423b00  addiu       $v0, $v0, 0x3B00
    ctx->pc = 0x2a50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15104));
    // 0x2a50e0: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x2a50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x2a50e4: 0x7b220020  lq          $v0, 0x20($t9)
    ctx->pc = 0x2a50e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x2a50e8: 0x7fc20030  sq          $v0, 0x30($fp)
    ctx->pc = 0x2a50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), GPR_VEC(ctx, 2));
    // 0x2a50ec: 0x7b220030  lq          $v0, 0x30($t9)
    ctx->pc = 0x2a50ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x2a50f0: 0x7fc20040  sq          $v0, 0x40($fp)
    ctx->pc = 0x2a50f0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 64), GPR_VEC(ctx, 2));
    // 0x2a50f4: 0x7b230040  lq          $v1, 0x40($t9)
    ctx->pc = 0x2a50f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x2a50f8: 0x7fc30050  sq          $v1, 0x50($fp)
    ctx->pc = 0x2a50f8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 80), GPR_VEC(ctx, 3));
    // 0x2a50fc: 0x8f220050  lw          $v0, 0x50($t9)
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x2a5100: 0xafcb0068  sw          $t3, 0x68($fp)
    ctx->pc = 0x2a5100u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 11));
    // 0x2a5104: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2a5104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2a5108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a510c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2a510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2a5110: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a5110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a5114: 0xffc20060  sd          $v0, 0x60($fp)
    ctx->pc = 0x2a5114u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 96), GPR_U64(ctx, 2));
    // 0x2a5118: 0x8f230050  lw          $v1, 0x50($t9)
    ctx->pc = 0x2a5118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x2a511c: 0xffd10070  sd          $s1, 0x70($fp)
    ctx->pc = 0x2a511cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 112), GPR_U64(ctx, 17));
    // 0x2a5120: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x2a5120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x2a5124: 0xafc00078  sw          $zero, 0x78($fp)
    ctx->pc = 0x2a5124u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 120), GPR_U32(ctx, 0));
    // 0x2a5128: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a5128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a512c: 0xafc9007c  sw          $t1, 0x7C($fp)
    ctx->pc = 0x2a512cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 9));
    // 0x2a5130: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x2a5130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x2a5134: 0xffd20080  sd          $s2, 0x80($fp)
    ctx->pc = 0x2a5134u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 128), GPR_U64(ctx, 18));
    // 0x2a5138: 0xafc3006c  sw          $v1, 0x6C($fp)
    ctx->pc = 0x2a5138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 108), GPR_U32(ctx, 3));
    // 0x2a513c: 0xffcd0088  sd          $t5, 0x88($fp)
    ctx->pc = 0x2a513cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 136), GPR_U64(ctx, 13));
    // 0x2a5140: 0xffce0090  sd          $t6, 0x90($fp)
    ctx->pc = 0x2a5140u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 144), GPR_U64(ctx, 14));
    // 0x2a5144: 0xffcf0098  sd          $t7, 0x98($fp)
    ctx->pc = 0x2a5144u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 152), GPR_U64(ctx, 15));
    // 0x2a5148: 0x8cb90004  lw          $t9, 0x4($a1)
    ctx->pc = 0x2a5148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a514c: 0xffd000a0  sd          $s0, 0xA0($fp)
    ctx->pc = 0x2a514cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 160), GPR_U64(ctx, 16));
    // 0x2a5150: 0xafc700ac  sw          $a3, 0xAC($fp)
    ctx->pc = 0x2a5150u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 7));
    // 0x2a5154: 0x27250050  addiu       $a1, $t9, 0x50
    ctx->pc = 0x2a5154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), 80));
    // 0x2a5158: 0xafcb00a8  sw          $t3, 0xA8($fp)
    ctx->pc = 0x2a5158u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 11));
    // 0x2a515c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2a515cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2a5160: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a5160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a5164: 0x7b220000  lq          $v0, 0x0($t9)
    ctx->pc = 0x2a5164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2a5168: 0x7fc200b0  sq          $v0, 0xB0($fp)
    ctx->pc = 0x2a5168u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 176), GPR_VEC(ctx, 2));
    // 0x2a516c: 0xffd300b0  sd          $s3, 0xB0($fp)
    ctx->pc = 0x2a516cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 176), GPR_U64(ctx, 19));
    // 0x2a5170: 0x7b220010  lq          $v0, 0x10($t9)
    ctx->pc = 0x2a5170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2a5174: 0x7fc200c0  sq          $v0, 0xC0($fp)
    ctx->pc = 0x2a5174u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 192), GPR_VEC(ctx, 2));
    // 0x2a5178: 0xafd500c4  sw          $s5, 0xC4($fp)
    ctx->pc = 0x2a5178u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 21));
    // 0x2a517c: 0x7b220020  lq          $v0, 0x20($t9)
    ctx->pc = 0x2a517cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x2a5180: 0x7fc200d0  sq          $v0, 0xD0($fp)
    ctx->pc = 0x2a5180u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 208), GPR_VEC(ctx, 2));
    // 0x2a5184: 0x7b230030  lq          $v1, 0x30($t9)
    ctx->pc = 0x2a5184u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x2a5188: 0x7fc300e0  sq          $v1, 0xE0($fp)
    ctx->pc = 0x2a5188u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 224), GPR_VEC(ctx, 3));
    // 0x2a518c: 0x7b240040  lq          $a0, 0x40($t9)
    ctx->pc = 0x2a518cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x2a5190: 0x7fc400f0  sq          $a0, 0xF0($fp)
    ctx->pc = 0x2a5190u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 240), GPR_VEC(ctx, 4));
    // 0x2a5194: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x2a5194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x2a5198: 0x8f220050  lw          $v0, 0x50($t9)
    ctx->pc = 0x2a5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x2a519c: 0xafcb0108  sw          $t3, 0x108($fp)
    ctx->pc = 0x2a519cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 264), GPR_U32(ctx, 11));
    // 0x2a51a0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2a51a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2a51a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a51a8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2a51a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2a51ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2a51acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a51b0: 0xffc20100  sd          $v0, 0x100($fp)
    ctx->pc = 0x2a51b0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 256), GPR_U64(ctx, 2));
    // 0x2a51b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a51b8: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2a51b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2a51bc: 0x8f230050  lw          $v1, 0x50($t9)
    ctx->pc = 0x2a51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x2a51c0: 0xffd10110  sd          $s1, 0x110($fp)
    ctx->pc = 0x2a51c0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 272), GPR_U64(ctx, 17));
    // 0x2a51c4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x2a51c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x2a51c8: 0xafc9011c  sw          $t1, 0x11C($fp)
    ctx->pc = 0x2a51c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 284), GPR_U32(ctx, 9));
    // 0x2a51cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a51d0: 0xffd20120  sd          $s2, 0x120($fp)
    ctx->pc = 0x2a51d0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 288), GPR_U64(ctx, 18));
    // 0x2a51d4: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x2a51d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x2a51d8: 0xafc00118  sw          $zero, 0x118($fp)
    ctx->pc = 0x2a51d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 280), GPR_U32(ctx, 0));
    // 0x2a51dc: 0xafc3010c  sw          $v1, 0x10C($fp)
    ctx->pc = 0x2a51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 268), GPR_U32(ctx, 3));
    // 0x2a51e0: 0xffcd0128  sd          $t5, 0x128($fp)
    ctx->pc = 0x2a51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 296), GPR_U64(ctx, 13));
    // 0x2a51e4: 0xffce0130  sd          $t6, 0x130($fp)
    ctx->pc = 0x2a51e4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 304), GPR_U64(ctx, 14));
    // 0x2a51e8: 0xffcf0138  sd          $t7, 0x138($fp)
    ctx->pc = 0x2a51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 312), GPR_U64(ctx, 15));
    // 0x2a51ec: 0xdd430020  ld          $v1, 0x20($t2)
    ctx->pc = 0x2a51ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2a51f0: 0xffc20140  sd          $v0, 0x140($fp)
    ctx->pc = 0x2a51f0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 320), GPR_U64(ctx, 2));
    // 0x2a51f4: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x2a51f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x2a51f8: 0xafcb0148  sw          $t3, 0x148($fp)
    ctx->pc = 0x2a51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 328), GPR_U32(ctx, 11));
    // 0x2a51fc: 0x64423b00  daddiu      $v0, $v0, 0x3B00
    ctx->pc = 0x2a51fcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)15104);
    // 0x2a5200: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5204: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x2a5204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2a5208: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x2a5208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x2a520c: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x2a520cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x2a5210: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a5210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a5214: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2a5214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2a5218: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a5218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a521c: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x2a521cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x2a5220: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x2a5220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x2a5224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a5224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a5228: 0xafcc014c  sw          $t4, 0x14C($fp)
    ctx->pc = 0x2a5228u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 332), GPR_U32(ctx, 12));
    // 0x2a522c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2a522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a5230: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2a5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2a5234: 0x34428006  ori         $v0, $v0, 0x8006
    ctx->pc = 0x2a5234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x2a5238: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a523c: 0xffc20150  sd          $v0, 0x150($fp)
    ctx->pc = 0x2a523cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 336), GPR_U64(ctx, 2));
    // 0x2a5240: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2a5240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a5244: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x2a5244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x2a5248: 0x3402e780  ori         $v0, $zero, 0xE780
    ctx->pc = 0x2a5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59264);
    // 0x2a524c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2a524cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2a5250: 0xffcd0158  sd          $t5, 0x158($fp)
    ctx->pc = 0x2a5250u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 344), GPR_U64(ctx, 13));
    // 0x2a5254: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a5254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a5258: 0xffce0160  sd          $t6, 0x160($fp)
    ctx->pc = 0x2a5258u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 352), GPR_U64(ctx, 14));
    // 0x2a525c: 0xffcf0168  sd          $t7, 0x168($fp)
    ctx->pc = 0x2a525cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 360), GPR_U64(ctx, 15));
    // 0x2a5260: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2a5260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a5264: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a5264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a5268: 0xffc201b8  sd          $v0, 0x1B8($fp)
    ctx->pc = 0x2a5268u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 440), GPR_U64(ctx, 2));
    // 0x2a526c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2a526cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a5270: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2a5270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2a5274: 0x34840044  ori         $a0, $a0, 0x44
    ctx->pc = 0x2a5274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)68);
    // 0x2a5278: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2a527c: 0xffc40170  sd          $a0, 0x170($fp)
    ctx->pc = 0x2a527cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 368), GPR_U64(ctx, 4));
    // 0x2a5280: 0xffc20178  sd          $v0, 0x178($fp)
    ctx->pc = 0x2a5280u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 376), GPR_U64(ctx, 2));
    // 0x2a5284: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2a5284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2a5288: 0x3484001d  ori         $a0, $a0, 0x1D
    ctx->pc = 0x2a5288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29);
    // 0x2a528c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2a528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2a5290: 0xffc40180  sd          $a0, 0x180($fp)
    ctx->pc = 0x2a5290u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 384), GPR_U64(ctx, 4));
    // 0x2a5294: 0xffc20188  sd          $v0, 0x188($fp)
    ctx->pc = 0x2a5294u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 392), GPR_U64(ctx, 2));
    // 0x2a5298: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a5298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a529c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a52a0: 0xffc40198  sd          $a0, 0x198($fp)
    ctx->pc = 0x2a52a0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 408), GPR_U64(ctx, 4));
    // 0x2a52a4: 0xffc301a0  sd          $v1, 0x1A0($fp)
    ctx->pc = 0x2a52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 416), GPR_U64(ctx, 3));
    // 0x2a52a8: 0xffc201a8  sd          $v0, 0x1A8($fp)
    ctx->pc = 0x2a52a8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 424), GPR_U64(ctx, 2));
    // 0x2a52ac: 0xffc00190  sd          $zero, 0x190($fp)
    ctx->pc = 0x2a52acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 400), GPR_U64(ctx, 0));
    // 0x2a52b0: 0xffc001b0  sd          $zero, 0x1B0($fp)
    ctx->pc = 0x2a52b0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 432), GPR_U64(ctx, 0));
    // 0x2a52b4: 0xad16205c  sw          $s6, 0x205C($t0)
    ctx->pc = 0x2a52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8284), GPR_U32(ctx, 22));
label_2a52b8:
    // 0x2a52b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a52b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a52bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a52bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a52c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a52c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a52c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a52c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a52c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a52c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a52cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2a52ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a52d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2a52d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a52d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2a52d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a52d8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2a52d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a52dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a52dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a52e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A52E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52E0u;
        // 0x2a52e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A52E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A52E8u;
}
