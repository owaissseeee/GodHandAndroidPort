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

// Function: func_0035B6F8
// Address: 0x35b6f8 - 0x35b848
void func_0035B6F8_0x35b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B6F8_0x35b6f8");
#endif

    switch (ctx->pc) {
        case 0x35b740u: goto label_35b740;
        case 0x35b788u: goto label_35b788;
        case 0x35b808u: goto label_35b808;
        default: break;
    }

    ctx->pc = 0x35b6f8u;

    // 0x35b6f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35b6fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35b700: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35b700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35b704: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35b704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b708: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x35b708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x35b70c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35b70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b710: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35b710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b714: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x35b714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x35b718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b71c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x35b71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b720: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b724: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x35b724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b728: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35b72c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35b72cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b730: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x35b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x35b734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x35b738: 0xc0d6ae6  jal         func_35AB98
    ctx->pc = 0x35B738u;
    SET_GPR_U32(ctx, 31, 0x35B740u);
    ctx->pc = 0x35B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B738u;
    // 0x35b73c: 0x2455e270  addiu       $s5, $v0, -0x1D90 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB98u, 0x35B738u, 0x35B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B740u;
label_35b740:
    // 0x35b740: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x35b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35b744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b748: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x35b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x35b74c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x35b74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x35b750: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x35b750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35b754: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x35b754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x35b758: 0x1446000d  bne         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x35B758u;
    {
        const bool branch_taken_0x35b758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x35B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B758u;
        // 0x35b75c: 0x502018  mult        $a0, $v0, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b758) {
            ctx->pc = 0x35B790u;
            goto label_35b790;
        }
    }
    ctx->pc = 0x35B760u;
    // 0x35b760: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b764: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B764u;
    {
        const bool branch_taken_0x35b764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35b764) {
            ctx->pc = 0x35B768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B764u;
            // 0x35b768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B778u;
            goto label_35b778;
        }
    }
    ctx->pc = 0x35B76Cu;
    // 0x35b76c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x35B76Cu;
    {
        const bool branch_taken_0x35b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B76Cu;
        // 0x35b770: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b76c) {
            ctx->pc = 0x35B820u;
            goto label_35b820;
        }
    }
    ctx->pc = 0x35B774u;
    // 0x35b774: 0x0  nop
    ctx->pc = 0x35b774u;
    // NOP
label_35b778:
    // 0x35b778: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35b778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b77c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35b77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b780: 0xc0d6e12  jal         func_35B848
    ctx->pc = 0x35B780u;
    SET_GPR_U32(ctx, 31, 0x35B788u);
    ctx->pc = 0x35B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B780u;
    // 0x35b784: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B848u, 0x35B780u, 0x35B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B788u;
label_35b788:
    // 0x35b788: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x35B788u;
    {
        const bool branch_taken_0x35b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B788u;
        // 0x35b78c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b788) {
            ctx->pc = 0x35B824u;
            goto label_35b824;
        }
    }
    ctx->pc = 0x35B790u;
label_35b790:
    // 0x35b790: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x35b790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x35b794: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x35b794u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35b798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35b79c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x35b79cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b7a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35b7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35b7a4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x35b7a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35b7a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35B7A8u;
    {
        const bool branch_taken_0x35b7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b7a8) {
            ctx->pc = 0x35B7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B7A8u;
            // 0x35b7ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B7B0u;
            goto label_35b7b0;
        }
    }
    ctx->pc = 0x35B7B0u;
label_35b7b0:
    // 0x35b7b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35b7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b7b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x35b7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35b7b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b7bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x35b7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35b7c0: 0x8e450a48  lw          $a1, 0xA48($s2)
    ctx->pc = 0x35b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2632)));
    // 0x35b7c4: 0x0  nop
    ctx->pc = 0x35b7c4u;
    // NOP
    // 0x35b7c8: 0x0  nop
    ctx->pc = 0x35b7c8u;
    // NOP
    // 0x35b7cc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x35b7ccu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x35b7d0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x35b7d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x35b7d4: 0x1812  mflo        $v1
    ctx->pc = 0x35b7d4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35b7d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35b7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35b7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b7e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35b7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35b7e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x35b7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35b7e8: 0x0  nop
    ctx->pc = 0x35b7e8u;
    // NOP
    // 0x35b7ec: 0x0  nop
    ctx->pc = 0x35b7ecu;
    // NOP
    // 0x35b7f0: 0x46020343  div.s       $f13, $f0, $f2
    ctx->pc = 0x35b7f0u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x35b7f4: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B7F4u;
    {
        const bool branch_taken_0x35b7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x35B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B7F4u;
        // 0x35b7f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b7f4) {
            ctx->pc = 0x35B810u;
            goto label_35b810;
        }
    }
    ctx->pc = 0x35B7FCu;
    // 0x35b7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b800: 0xc0d6e30  jal         func_35B8C0
    ctx->pc = 0x35B800u;
    SET_GPR_U32(ctx, 31, 0x35B808u);
    ctx->pc = 0x35B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B800u;
    // 0x35b804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B8C0u, 0x35B800u, 0x35B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B808u;
label_35b808:
    // 0x35b808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35B808u;
    {
        const bool branch_taken_0x35b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B808u;
        // 0x35b80c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b808) {
            ctx->pc = 0x35B824u;
            goto label_35b824;
        }
    }
    ctx->pc = 0x35B810u;
label_35b810:
    // 0x35b810: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x35b810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b814: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x35B814u;
    {
        const bool branch_taken_0x35b814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35b814) {
            ctx->pc = 0x35B818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B814u;
            // 0x35b818: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B820u;
            goto label_35b820;
        }
    }
    ctx->pc = 0x35B81Cu;
    // 0x35b81c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x35b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_35b820:
    // 0x35b820: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35b824:
    // 0x35b824: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35b824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b828: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35b828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b82c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35b82cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35b830: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35b830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b834: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x35b834u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b838: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35b83c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B83Cu;
        // 0x35b840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B844u;
    // 0x35b844: 0x0  nop
    ctx->pc = 0x35b844u;
    // NOP
    ctx->pc = 0x35b848u;
}
