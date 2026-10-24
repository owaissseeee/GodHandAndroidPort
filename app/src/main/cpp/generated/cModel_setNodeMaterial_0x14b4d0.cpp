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

// Function: cModel_setNodeMaterial
// Address: 0x14b4d0 - 0x14b5d8
void cModel_setNodeMaterial_0x14b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_setNodeMaterial_0x14b4d0");
#endif

    switch (ctx->pc) {
        case 0x14b58cu: goto label_14b58c;
        case 0x14b5b4u: goto label_14b5b4;
        case 0x14b5c8u: goto label_14b5c8;
        default: break;
    }

    ctx->pc = 0x14b4d0u;

    // 0x14b4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b4d4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14b4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b4dc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x14b4e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14b4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4e4: 0x8d020380  lw          $v0, 0x380($t0)
    ctx->pc = 0x14b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
    // 0x14b4e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b4ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14B4ECu;
    {
        const bool branch_taken_0x14b4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4ECu;
        // 0x14b4f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4ec) {
            ctx->pc = 0x14B560u;
            goto label_14b560;
        }
    }
    ctx->pc = 0x14B4F4u;
    // 0x14b4f4: 0x90c202b6  lbu         $v0, 0x2B6($a2)
    ctx->pc = 0x14b4f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 694)));
    // 0x14b4f8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14b4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x14b4fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14b4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14b500: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14b504: 0x0  nop
    ctx->pc = 0x14b504u;
    // NOP
    // 0x14b508: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14b508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14b50c: 0x90c302b7  lbu         $v1, 0x2B7($a2)
    ctx->pc = 0x14b50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 695)));
    // 0x14b510: 0x90c202bc  lbu         $v0, 0x2BC($a2)
    ctx->pc = 0x14b510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 700)));
    // 0x14b514: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14b514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14b518: 0x0  nop
    ctx->pc = 0x14b518u;
    // NOP
    // 0x14b51c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14b51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14b520: 0xc4c0024c  lwc1        $f0, 0x24C($a2)
    ctx->pc = 0x14b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b524: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x14b524u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[3]);
    // 0x14b528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14b528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14b52c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x14b52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14b530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b534: 0x0  nop
    ctx->pc = 0x14b534u;
    // NOP
    // 0x14b538: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b53c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x14b53cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x14b540: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x14b540u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x14b544: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x14b544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x14b548: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14b548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14b54c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14b54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14b550: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x14b550u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b554: 0x0  nop
    ctx->pc = 0x14b554u;
    // NOP
    // 0x14b558: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14B558u;
    {
        const bool branch_taken_0x14b558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b558) {
            ctx->pc = 0x14B55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B558u;
            // 0x14b55c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B560u;
            goto label_14b560;
        }
    }
    ctx->pc = 0x14B560u;
label_14b560:
    // 0x14b560: 0x8d020380  lw          $v0, 0x380($t0)
    ctx->pc = 0x14b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
    // 0x14b564: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14b564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x14b568: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b56c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B56Cu;
    {
        const bool branch_taken_0x14b56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B56Cu;
        // 0x14b570: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b56c) {
            ctx->pc = 0x14B594u;
            goto label_14b594;
        }
    }
    ctx->pc = 0x14B574u;
    // 0x14b574: 0x8c427aa8  lw          $v0, 0x7AA8($v0)
    ctx->pc = 0x14b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31400)));
    // 0x14b578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B578u;
    {
        const bool branch_taken_0x14b578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B578u;
        // 0x14b57c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b578) {
            ctx->pc = 0x14B594u;
            goto label_14b594;
        }
    }
    ctx->pc = 0x14B580u;
    // 0x14b580: 0x8cc502c4  lw          $a1, 0x2C4($a2)
    ctx->pc = 0x14b580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
    // 0x14b584: 0xc0522f6  jal         func_148BD8
    ctx->pc = 0x14B584u;
    SET_GPR_U32(ctx, 31, 0x14B58Cu);
    ctx->pc = 0x14B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B584u;
    // 0x14b588: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148BD8u, 0x14B584u, 0x14B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B58Cu;
label_14b58c:
    // 0x14b58c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14B58Cu;
    {
        const bool branch_taken_0x14b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B58Cu;
        // 0x14b590: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b58c) {
            ctx->pc = 0x14B5CCu;
            goto label_14b5cc;
        }
    }
    ctx->pc = 0x14B594u;
label_14b594:
    // 0x14b594: 0x8cc20254  lw          $v0, 0x254($a2)
    ctx->pc = 0x14b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 596)));
    // 0x14b598: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x14b598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x14b59c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b5a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B5A0u;
    {
        const bool branch_taken_0x14b5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5A0u;
        // 0x14b5a4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5a0) {
            ctx->pc = 0x14B5BCu;
            goto label_14b5bc;
        }
    }
    ctx->pc = 0x14B5A8u;
    // 0x14b5a8: 0x8cc502c4  lw          $a1, 0x2C4($a2)
    ctx->pc = 0x14b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
    // 0x14b5ac: 0xc0521a4  jal         func_148690
    ctx->pc = 0x14B5ACu;
    SET_GPR_U32(ctx, 31, 0x14B5B4u);
    ctx->pc = 0x14B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5ACu;
    // 0x14b5b0: 0x24c602d4  addiu       $a2, $a2, 0x2D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 724));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148690u, 0x14B5ACu, 0x14B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5B4u;
label_14b5b4:
    // 0x14b5b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B5B4u;
    {
        const bool branch_taken_0x14b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5B4u;
        // 0x14b5b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5b4) {
            ctx->pc = 0x14B5CCu;
            goto label_14b5cc;
        }
    }
    ctx->pc = 0x14B5BCu;
label_14b5bc:
    // 0x14b5bc: 0x8cc502c4  lw          $a1, 0x2C4($a2)
    ctx->pc = 0x14b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
    // 0x14b5c0: 0xc0521a4  jal         func_148690
    ctx->pc = 0x14B5C0u;
    SET_GPR_U32(ctx, 31, 0x14B5C8u);
    ctx->pc = 0x14B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5C0u;
    // 0x14b5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148690u, 0x14B5C0u, 0x14B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5C8u;
label_14b5c8:
    // 0x14b5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b5cc:
    // 0x14b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5CCu;
        // 0x14b5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B5D4u;
    // 0x14b5d4: 0x0  nop
    ctx->pc = 0x14b5d4u;
    // NOP
    ctx->pc = 0x14b5d8u;
}
