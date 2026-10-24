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

// Function: func_0037D558
// Address: 0x37d558 - 0x37d680
void func_0037D558_0x37d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D558_0x37d558");
#endif

    switch (ctx->pc) {
        case 0x37d580u: goto label_37d580;
        case 0x37d61cu: goto label_37d61c;
        default: break;
    }

    ctx->pc = 0x37d558u;

    // 0x37d558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d55c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37d560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d568: 0x9602003e  lhu         $v0, 0x3E($s0)
    ctx->pc = 0x37d568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x37d56c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37d570: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x37d570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x37d574: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x37d574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d578: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x37D578u;
    SET_GPR_U32(ctx, 31, 0x37D580u);
    ctx->pc = 0x37D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D578u;
    // 0x37d57c: 0xa602004c  sh          $v0, 0x4C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x37D578u, 0x37D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D580u;
label_37d580:
    // 0x37d580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37d580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d588: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37D588u;
    {
        const bool branch_taken_0x37d588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D588u;
        // 0x37d58c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d588) {
            ctx->pc = 0x37D5ACu;
            goto label_37d5ac;
        }
    }
    ctx->pc = 0x37D590u;
    // 0x37d590: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x37D590u;
    {
        const bool branch_taken_0x37d590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d590) {
            ctx->pc = 0x37D594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D590u;
            // 0x37d594: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D670u;
            goto label_37d670;
        }
    }
    ctx->pc = 0x37D598u;
    // 0x37d598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d59c: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x37D59Cu;
    {
        const bool branch_taken_0x37d59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d59c) {
            ctx->pc = 0x37D5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D59Cu;
            // 0x37d5a0: 0x96040044  lhu         $a0, 0x44($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D610u;
            goto label_37d610;
        }
    }
    ctx->pc = 0x37D5A4u;
    // 0x37d5a4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x37D5A4u;
    {
        const bool branch_taken_0x37d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5A4u;
        // 0x37d5a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d5a4) {
            ctx->pc = 0x37D670u;
            goto label_37d670;
        }
    }
    ctx->pc = 0x37D5ACu;
label_37d5ac:
    // 0x37d5ac: 0x86050044  lh          $a1, 0x44($s0)
    ctx->pc = 0x37d5acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x37d5b0: 0x28a20041  slti        $v0, $a1, 0x41
    ctx->pc = 0x37d5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x37d5b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37D5B4u;
    {
        const bool branch_taken_0x37d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5B4u;
        // 0x37d5b8: 0x28a20040  slti        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d5b4) {
            ctx->pc = 0x37D5E8u;
            goto label_37d5e8;
        }
    }
    ctx->pc = 0x37D5BCu;
    // 0x37d5bc: 0x9604004c  lhu         $a0, 0x4C($s0)
    ctx->pc = 0x37d5bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37d5c0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x37d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37d5c4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37d5c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37d5cc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x37d5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37d5d0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x37d5d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x37d5d4: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x37d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x37d5d8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x37d5d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x37d5dc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x37d5dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x37d5e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x37D5E0u;
    {
        const bool branch_taken_0x37d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5E0u;
        // 0x37d5e4: 0xa602004c  sh          $v0, 0x4C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d5e0) {
            ctx->pc = 0x37D66Cu;
            goto label_37d66c;
        }
    }
    ctx->pc = 0x37D5E8u;
label_37d5e8:
    // 0x37d5e8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x37D5E8u;
    {
        const bool branch_taken_0x37d5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5E8u;
        // 0x37d5ec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d5e8) {
            ctx->pc = 0x37D66Cu;
            goto label_37d66c;
        }
    }
    ctx->pc = 0x37D5F0u;
    // 0x37d5f0: 0x9603004e  lhu         $v1, 0x4E($s0)
    ctx->pc = 0x37d5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x37d5f4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x37d5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37d5f8: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x37d5f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37d5fc: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x37d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x37d600: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x37d600u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x37d604: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x37d604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x37d608: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x37D608u;
    {
        const bool branch_taken_0x37d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D608u;
        // 0x37d60c: 0xa602004e  sh          $v0, 0x4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d608) {
            ctx->pc = 0x37D66Cu;
            goto label_37d66c;
        }
    }
    ctx->pc = 0x37D610u;
label_37d610:
    // 0x37d610: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37d610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d614: 0xc0de03e  jal         func_3780F8
    ctx->pc = 0x37D614u;
    SET_GPR_U32(ctx, 31, 0x37D61Cu);
    ctx->pc = 0x37D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D614u;
    // 0x37d618: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780F8u, 0x37D614u, 0x37D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D61Cu;
label_37d61c:
    // 0x37d61c: 0x9602004c  lhu         $v0, 0x4C($s0)
    ctx->pc = 0x37d61cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37d620: 0x9603004e  lhu         $v1, 0x4E($s0)
    ctx->pc = 0x37d620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x37d624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d628: 0x0  nop
    ctx->pc = 0x37d628u;
    // NOP
    // 0x37d62c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37d62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37d630: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x37d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37d634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d638: 0x0  nop
    ctx->pc = 0x37d638u;
    // NOP
    // 0x37d63c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37d63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37d640: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x37d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d644: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x37d644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x37d648: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37d648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x37d64c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d64cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x37d650: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x37d650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x37d654: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d658: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37d658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37d65c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x37d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x37d660: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x37d660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x37d664: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x37d664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d668: 0xa603004e  sh          $v1, 0x4E($s0)
    ctx->pc = 0x37d668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 3));
label_37d66c:
    // 0x37d66c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37d66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37d670:
    // 0x37d670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d674: 0x3e00008  jr          $ra
    ctx->pc = 0x37D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D674u;
        // 0x37d678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D67Cu;
    // 0x37d67c: 0x0  nop
    ctx->pc = 0x37d67cu;
    // NOP
    ctx->pc = 0x37d680u;
}
