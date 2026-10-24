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

// Function: func_002FA620
// Address: 0x2fa620 - 0x2faa20
void func_002FA620_0x2fa620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FA620_0x2fa620");
#endif

    switch (ctx->pc) {
        case 0x2fa660u: goto label_2fa660;
        case 0x2fa7d0u: goto label_2fa7d0;
        case 0x2fa9e0u: goto label_2fa9e0;
        default: break;
    }

    ctx->pc = 0x2fa620u;

    // 0x2fa620: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fa620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fa624: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2fa624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2fa628: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fa628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fa62c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2fa62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa630: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2fa630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2fa634: 0x240403c0  addiu       $a0, $zero, 0x3C0
    ctx->pc = 0x2fa634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x2fa638: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2fa638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2fa63c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2fa63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2fa640: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2fa640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2fa644: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fa644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2fa648: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2fa648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2fa64c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2fa64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2fa650: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2fa650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2fa654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fa654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fa658: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2FA658u;
    SET_GPR_U32(ctx, 31, 0x2FA660u);
    ctx->pc = 0x2FA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA658u;
    // 0x2fa65c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2FA658u, 0x2FA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA660u;
label_2fa660:
    // 0x2fa660: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2fa660u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa664: 0x11a000de  beqz        $t5, . + 4 + (0xDE << 2)
    ctx->pc = 0x2FA664u;
    {
        const bool branch_taken_0x2fa664 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA664u;
        // 0x2fa668: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa664) {
            ctx->pc = 0x2FA9E0u;
            goto label_2fa9e0;
        }
    }
    ctx->pc = 0x2FA66Cu;
    // 0x2fa66c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa670: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x2fa670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2fa674: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x2fa674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x2fa678: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2fa678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2fa67c: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2fa67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2fa680: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2fa680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fa684: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2fa684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2fa688: 0x34848004  ori         $a0, $a0, 0x8004
    ctx->pc = 0x2fa688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32772);
    // 0x2fa68c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2fa68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2fa690: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x2fa690u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x2fa694: 0xfdc30018  sd          $v1, 0x18($t6)
    ctx->pc = 0x2fa694u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 3));
    // 0x2fa698: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2fa698u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2fa69c: 0xfdc40020  sd          $a0, 0x20($t6)
    ctx->pc = 0x2fa69cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 4));
    // 0x2fa6a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2fa6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa6a4: 0xfdc50028  sd          $a1, 0x28($t6)
    ctx->pc = 0x2fa6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 5));
    // 0x2fa6a8: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x2fa6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2fa6ac: 0xfdc00008  sd          $zero, 0x8($t6)
    ctx->pc = 0x2fa6acu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 0));
    // 0x2fa6b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2fa6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa6b4: 0xfdc00010  sd          $zero, 0x10($t6)
    ctx->pc = 0x2fa6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 0));
    // 0x2fa6b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fa6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fa6bc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2fa6bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa6c0: 0x94e3c  dsll32      $t1, $t1, 24
    ctx->pc = 0x2fa6c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 24));
    // 0x2fa6c4: 0x2408004c  addiu       $t0, $zero, 0x4C
    ctx->pc = 0x2fa6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2fa6c8: 0x8ce51180  lw          $a1, 0x1180($a3)
    ctx->pc = 0x2fa6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4480)));
    // 0x2fa6cc: 0x340c9d00  ori         $t4, $zero, 0x9D00
    ctx->pc = 0x2fa6ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40192);
    // 0x2fa6d0: 0xc6478  dsll        $t4, $t4, 17
    ctx->pc = 0x2fa6d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 17);
    // 0x2fa6d4: 0x358c00f8  ori         $t4, $t4, 0xF8
    ctx->pc = 0x2fa6d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)248);
    // 0x2fa6d8: 0x240d004e  addiu       $t5, $zero, 0x4E
    ctx->pc = 0x2fa6d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2fa6dc: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x2fa6dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x2fa6e0: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x2fa6e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2fa6e4: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x2fa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x2fa6e8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2fa6e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2fa6ec: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x2fa6ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fa6f0: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x2fa6f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x2fa6f4: 0x356b0044  ori         $t3, $t3, 0x44
    ctx->pc = 0x2fa6f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)68);
    // 0x2fa6f8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2fa6f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2fa6fc: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x2fa6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2fa700: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa704: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2fa704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2fa708: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2fa708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2fa70c: 0xfdc80038  sd          $t0, 0x38($t6)
    ctx->pc = 0x2fa70cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 8));
    // 0x2fa710: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x2fa710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x2fa714: 0xfdcc0040  sd          $t4, 0x40($t6)
    ctx->pc = 0x2fa714u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 12));
    // 0x2fa718: 0xfdc40030  sd          $a0, 0x30($t6)
    ctx->pc = 0x2fa718u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 4));
    // 0x2fa71c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2fa71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fa720: 0xfdcd0048  sd          $t5, 0x48($t6)
    ctx->pc = 0x2fa720u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 13));
    // 0x2fa724: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2fa724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2fa728: 0xfdca0050  sd          $t2, 0x50($t6)
    ctx->pc = 0x2fa728u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 10));
    // 0x2fa72c: 0x25cd0080  addiu       $t5, $t6, 0x80
    ctx->pc = 0x2fa72cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x2fa730: 0xfdc50058  sd          $a1, 0x58($t6)
    ctx->pc = 0x2fa730u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 88), GPR_U64(ctx, 5));
    // 0x2fa734: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2fa734u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa738: 0xfdcb0060  sd          $t3, 0x60($t6)
    ctx->pc = 0x2fa738u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 96), GPR_U64(ctx, 11));
    // 0x2fa73c: 0xfdc30068  sd          $v1, 0x68($t6)
    ctx->pc = 0x2fa73cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 104), GPR_U64(ctx, 3));
    // 0x2fa740: 0xfdc00070  sd          $zero, 0x70($t6)
    ctx->pc = 0x2fa740u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 112), GPR_U64(ctx, 0));
    // 0x2fa744: 0x8ce31180  lw          $v1, 0x1180($a3)
    ctx->pc = 0x2fa744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4480)));
    // 0x2fa748: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x2fa748u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa74c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2fa74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2fa750: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x2fa750u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2fa754: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2fa754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2fa758: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x2fa758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2fa75c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2fa75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2fa760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa764: 0xfdc20078  sd          $v0, 0x78($t6)
    ctx->pc = 0x2fa764u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 120), GPR_U64(ctx, 2));
    // 0x2fa768: 0x8ce31180  lw          $v1, 0x1180($a3)
    ctx->pc = 0x2fa768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4480)));
    // 0x2fa76c: 0x18600065  blez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2FA76Cu;
    {
        const bool branch_taken_0x2fa76c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2FA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA76Cu;
        // 0x2fa770: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa76c) {
            ctx->pc = 0x2FA904u;
            goto label_2fa904;
        }
    }
    ctx->pc = 0x2FA774u;
    // 0x2fa774: 0x241e0116  addiu       $fp, $zero, 0x116
    ctx->pc = 0x2fa774u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x2fa778: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x2fa778u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fa77c: 0x17bef8  dsll        $s7, $s7, 27
    ctx->pc = 0x2fa77cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 27);
    // 0x2fa780: 0x36f7cc80  ori         $s7, $s7, 0xCC80
    ctx->pc = 0x2fa780u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)52352);
    // 0x2fa784: 0x17bc78  dsll        $s7, $s7, 17
    ctx->pc = 0x2fa784u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 17);
    // 0x2fa788: 0x36f78380  ori         $s7, $s7, 0x8380
    ctx->pc = 0x2fa788u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)33664);
    // 0x2fa78c: 0x17b8b8  dsll        $s7, $s7, 2
    ctx->pc = 0x2fa78cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 2);
    // 0x2fa790: 0x3416fe00  ori         $s6, $zero, 0xFE00
    ctx->pc = 0x2fa790u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2fa794: 0x16b7b8  dsll        $s6, $s6, 30
    ctx->pc = 0x2fa794u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 30);
    // 0x2fa798: 0x36d68080  ori         $s6, $s6, 0x8080
    ctx->pc = 0x2fa798u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32896);
    // 0x2fa79c: 0x16b438  dsll        $s6, $s6, 16
    ctx->pc = 0x2fa79cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 16);
    // 0x2fa7a0: 0x36d68080  ori         $s6, $s6, 0x8080
    ctx->pc = 0x2fa7a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32896);
    // 0x2fa7a4: 0xe0c02d  daddu       $t8, $a3, $zero
    ctx->pc = 0x2fa7a4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa7a8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2fa7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2fa7ac: 0x24150800  addiu       $s5, $zero, 0x800
    ctx->pc = 0x2fa7acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2fa7b0: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x2fa7b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa7b4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x2fa7b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2fa7b8: 0x3c140004  lui         $s4, 0x4
    ctx->pc = 0x2fa7b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4 << 16));
    // 0x2fa7bc: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x2fa7bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fa7c0: 0x139afc  dsll32      $s3, $s3, 11
    ctx->pc = 0x2fa7c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 11));
    // 0x2fa7c4: 0x36738000  ori         $s3, $s3, 0x8000
    ctx->pc = 0x2fa7c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32768);
    // 0x2fa7c8: 0x3c0f0020  lui         $t7, 0x20
    ctx->pc = 0x2fa7c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32 << 16));
    // 0x2fa7cc: 0x3c120020  lui         $s2, 0x20
    ctx->pc = 0x2fa7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
label_2fa7d0:
    // 0x2fa7d0: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x2fa7d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa7d4: 0x3402e800  ori         $v0, $zero, 0xE800
    ctx->pc = 0x2fa7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x2fa7d8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x2fa7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x2fa7dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2fa7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2fa7e0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x2fa7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x2fa7e4: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x2fa7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x2fa7e8: 0x3c020535  lui         $v0, 0x535
    ctx->pc = 0x2fa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1333 << 16));
    // 0x2fa7ec: 0x34423160  ori         $v0, $v0, 0x3160
    ctx->pc = 0x2fa7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12640);
    // 0x2fa7f0: 0xfd5e0010  sd          $fp, 0x10($t2)
    ctx->pc = 0x2fa7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 30));
    // 0x2fa7f4: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x2fa7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x2fa7f8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2fa7f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2fa7fc: 0xfd570018  sd          $s7, 0x18($t2)
    ctx->pc = 0x2fa7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 23));
    // 0x2fa800: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x2fa800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x2fa804: 0xfd560020  sd          $s6, 0x20($t2)
    ctx->pc = 0x2fa804u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 22));
    // 0x2fa808: 0xf4c03  sra         $t1, $t7, 16
    ctx->pc = 0x2fa808u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 15), 16));
    // 0x2fa80c: 0x25290800  addiu       $t1, $t1, 0x800
    ctx->pc = 0x2fa80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2048));
    // 0x2fa810: 0x3187ffff  andi        $a3, $t4, 0xFFFF
    ctx->pc = 0x2fa810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2fa814: 0x8e02118c  lw          $v0, 0x118C($s0)
    ctx->pc = 0x2fa814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2fa818: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2fa818u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fa81c: 0x8f051180  lw          $a1, 0x1180($t8)
    ctx->pc = 0x2fa81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4480)));
    // 0x2fa820: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2fa820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fa824: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2fa824u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2fa828: 0x2873825  or          $a3, $s4, $a3
    ctx->pc = 0x2fa828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) | GPR_U64(ctx, 7));
    // 0x2fa82c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa830: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2fa830u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2fa834: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fa834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fa838: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2fa838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2fa83c: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x2fa83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2fa840: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2fa840u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2fa844: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fa844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fa848: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x2fa848u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2fa84c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2fa84cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fa850: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa854: 0x258b0040  addiu       $t3, $t4, 0x40
    ctx->pc = 0x2fa854u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x2fa858: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2fa858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fa85c: 0x3168ffff  andi        $t0, $t3, 0xFFFF
    ctx->pc = 0x2fa85cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2fa860: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2fa860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x2fa864: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2fa864u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fa868: 0xfd420030  sd          $v0, 0x30($t2)
    ctx->pc = 0x2fa868u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 48), GPR_U64(ctx, 2));
    // 0x2fa86c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2fa86cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fa870: 0x25ad0050  addiu       $t5, $t5, 0x50
    ctx->pc = 0x2fa870u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x2fa874: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x2fa874u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa878: 0x8e02118c  lw          $v0, 0x118C($s0)
    ctx->pc = 0x2fa878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2fa87c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x2fa87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa880: 0x8f051180  lw          $a1, 0x1180($t8)
    ctx->pc = 0x2fa880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4480)));
    // 0x2fa884: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x2fa884u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x2fa888: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2fa888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2fa88c: 0xfd470028  sd          $a3, 0x28($t2)
    ctx->pc = 0x2fa88cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 7));
    // 0x2fa890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa894: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2fa894u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2fa898: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fa898u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fa89c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2fa89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2fa8a0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2fa8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2fa8a4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2fa8a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2fa8a8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2fa8a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2fa8ac: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x2fa8acu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2fa8b0: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x2fa8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2fa8b4: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2fa8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2fa8b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2fa8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fa8bc: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x2fa8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x2fa8c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fa8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fa8c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa8c8: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x2fa8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2fa8cc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x2fa8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x2fa8d0: 0xfd430040  sd          $v1, 0x40($t2)
    ctx->pc = 0x2fa8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 3));
    // 0x2fa8d4: 0x9602118c  lhu         $v0, 0x118C($s0)
    ctx->pc = 0x2fa8d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2fa8d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fa8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fa8dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2fa8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2fa8e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa8e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2fa8e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2fa8e8: 0xfd480038  sd          $t0, 0x38($t2)
    ctx->pc = 0x2fa8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 8));
    // 0x2fa8ec: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x2fa8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x2fa8f0: 0xfcd30000  sd          $s3, 0x0($a2)
    ctx->pc = 0x2fa8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 19));
    // 0x2fa8f4: 0x8f021180  lw          $v0, 0x1180($t8)
    ctx->pc = 0x2fa8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4480)));
    // 0x2fa8f8: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x2fa8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fa8fc: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2FA8FCu;
    {
        const bool branch_taken_0x2fa8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8FCu;
        // 0x2fa900: 0x27390020  addiu       $t9, $t9, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8fc) {
            ctx->pc = 0x2FA7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa7d0;
        }
    }
    ctx->pc = 0x2FA904u;
label_2fa904:
    // 0x2fa904: 0xfda00000  sd          $zero, 0x0($t5)
    ctx->pc = 0x2fa904u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 0));
    // 0x2fa908: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x2fa908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2fa90c: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
    // 0x2fa910: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2fa910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2fa914: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x2fa914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x2fa918: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa918u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa91c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fa91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fa920: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2fa920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2fa924: 0x34638003  ori         $v1, $v1, 0x8003
    ctx->pc = 0x2fa924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32771);
    // 0x2fa928: 0xfda20000  sd          $v0, 0x0($t5)
    ctx->pc = 0x2fa928u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
    // 0x2fa92c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2fa92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2fa930: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa930u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa934: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fa934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2fa938: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x2fa938u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
    // 0x2fa93c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fa93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa940: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa940u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa944: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2fa944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2fa948: 0xfda50000  sd          $a1, 0x0($t5)
    ctx->pc = 0x2fa948u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 5));
    // 0x2fa94c: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x2fa94cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2fa950: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa950u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa954: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2fa954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa958: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2fa95c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2fa95cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa960: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2fa960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fa964: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa964u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa968: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2fa968u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa96c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2fa96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2fa970: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2fa970u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2fa974: 0x3c0a3a00  lui         $t2, 0x3A00
    ctx->pc = 0x2fa974u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)14848 << 16));
    // 0x2fa978: 0x354a00f8  ori         $t2, $t2, 0xF8
    ctx->pc = 0x2fa978u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)248);
    // 0x2fa97c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2fa97cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2fa980: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x2fa980u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2fa984: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa988: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x2fa988u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2fa98c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fa98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2fa990: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2fa990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2fa994: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x2fa994u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x2fa998: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2fa998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2fa99c: 0xfda90000  sd          $t1, 0x0($t5)
    ctx->pc = 0x2fa99cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 9));
    // 0x2fa9a0: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x2fa9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9a4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa9a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa9a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fa9a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9ac: 0xfdaa0000  sd          $t2, 0x0($t5)
    ctx->pc = 0x2fa9acu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 10));
    // 0x2fa9b0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa9b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa9b4: 0xfdab0000  sd          $t3, 0x0($t5)
    ctx->pc = 0x2fa9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 11));
    // 0x2fa9b8: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa9b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa9bc: 0xfda00000  sd          $zero, 0x0($t5)
    ctx->pc = 0x2fa9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 0));
    // 0x2fa9c0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa9c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa9c4: 0xfdac0000  sd          $t4, 0x0($t5)
    ctx->pc = 0x2fa9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 12));
    // 0x2fa9c8: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2fa9c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2fa9cc: 0x1ae1023  subu        $v0, $t5, $t6
    ctx->pc = 0x2fa9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2fa9d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2fa9d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2fa9d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fa9d8: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2FA9D8u;
    SET_GPR_U32(ctx, 31, 0x2FA9E0u);
    ctx->pc = 0x2FA9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA9D8u;
    // 0x2fa9dc: 0xa5c20000  sh          $v0, 0x0($t6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2FA9D8u, 0x2FA9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9E0u;
label_2fa9e0:
    // 0x2fa9e0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2fa9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fa9e4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2fa9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fa9e8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2fa9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fa9ec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2fa9ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fa9f0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2fa9f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fa9f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fa9f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fa9f8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2fa9f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa9fc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2fa9fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2faa00: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2faa00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2faa04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2faa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2faa08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA08u;
        // 0x2faa0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAA10u;
    // 0x2faa10: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2faa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2faa14: 0x0  nop
    ctx->pc = 0x2faa14u;
    // NOP
    // 0x2faa18: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2faa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2faa1c: 0x0  nop
    ctx->pc = 0x2faa1cu;
    // NOP
    ctx->pc = 0x2faa20u;
}
