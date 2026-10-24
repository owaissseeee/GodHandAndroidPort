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

// Function: func_00374210
// Address: 0x374210 - 0x374318
void func_00374210_0x374210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374210_0x374210");
#endif

    switch (ctx->pc) {
        case 0x3742b8u: goto label_3742b8;
        case 0x3742d4u: goto label_3742d4;
        case 0x3742f0u: goto label_3742f0;
        default: break;
    }

    ctx->pc = 0x374210u;

    // 0x374210: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x374210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x374214: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x374214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x374218: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x374218u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37421c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x374220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x374220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x374224: 0x240c61a8  addiu       $t4, $zero, 0x61A8
    ctx->pc = 0x374224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
    // 0x374228: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x374228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37422c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37422cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374230: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x374230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x374234: 0x240440c0  addiu       $a0, $zero, 0x40C0
    ctx->pc = 0x374234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16576));
    // 0x374238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37423c: 0x2408002c  addiu       $t0, $zero, 0x2C
    ctx->pc = 0x37423cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x374240: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x374240u;
    {
        const bool branch_taken_0x374240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374240) {
            ctx->pc = 0x374244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374240u;
            // 0x374244: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x374248u;
            goto label_374248;
        }
    }
    ctx->pc = 0x374248u;
label_374248:
    // 0x374248: 0x24cb0001  addiu       $t3, $a2, 0x1
    ctx->pc = 0x374248u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x37424c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x374250: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x374250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x374254: 0x24734210  addiu       $s3, $v1, 0x4210
    ctx->pc = 0x374254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16912));
    // 0x374258: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x374258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37425c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x37425cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374260: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x374260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x374264: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x374264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374268: 0x5012  mflo        $t2
    ctx->pc = 0x374268u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x37426c: 0x14c5018  mult        $t2, $t2, $t4
    ctx->pc = 0x37426cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x374270: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x374270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x374274: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x374274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x374278: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x374278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x37427c: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x37427cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x374280: 0x1012  mflo        $v0
    ctx->pc = 0x374280u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x374284: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x374284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x374288: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x374288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x37428c: 0x24420fff  addiu       $v0, $v0, 0xFFF
    ctx->pc = 0x37428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x374290: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x374290u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x374294: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x374294u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x374298: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x374298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x37429c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x37429cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x3742a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3742a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3742a4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x3742a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3742a8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3742a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3742ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3742acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742b0: 0xc0c7238  jal         func_31C8E0
    ctx->pc = 0x3742B0u;
    SET_GPR_U32(ctx, 31, 0x3742B8u);
    ctx->pc = 0x3742B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742B0u;
    // 0x3742b4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C8E0u, 0x3742B0u, 0x3742B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742B8u;
label_3742b8:
    // 0x3742b8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3742B8u;
    {
        const bool branch_taken_0x3742b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3742BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3742B8u;
        // 0x3742bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3742b8) {
            ctx->pc = 0x3742F4u;
            goto label_3742f4;
        }
    }
    ctx->pc = 0x3742C0u;
    // 0x3742c0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3742c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3742c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3742c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742c8: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x3742c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3742cc: 0xc0cb4d0  jal         func_32D340
    ctx->pc = 0x3742CCu;
    SET_GPR_U32(ctx, 31, 0x3742D4u);
    ctx->pc = 0x3742D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742CCu;
    // 0x3742d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D340u, 0x3742CCu, 0x3742D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742D4u;
label_3742d4:
    // 0x3742d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3742D4u;
    {
        const bool branch_taken_0x3742d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3742D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3742D4u;
        // 0x3742d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3742d4) {
            ctx->pc = 0x3742E4u;
            goto label_3742e4;
        }
    }
    ctx->pc = 0x3742DCu;
    // 0x3742dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3742DCu;
    {
        const bool branch_taken_0x3742dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3742E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3742DCu;
        // 0x3742e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3742dc) {
            ctx->pc = 0x3742F8u;
            goto label_3742f8;
        }
    }
    ctx->pc = 0x3742E4u;
label_3742e4:
    // 0x3742e4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3742e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3742e8: 0xc0c724a  jal         func_31C928
    ctx->pc = 0x3742E8u;
    SET_GPR_U32(ctx, 31, 0x3742F0u);
    ctx->pc = 0x3742ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742E8u;
    // 0x3742ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C928u, 0x3742E8u, 0x3742F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742F0u;
label_3742f0:
    // 0x3742f0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3742f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3742f4:
    // 0x3742f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3742f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3742f8:
    // 0x3742f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3742f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3742fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3742fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374304: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x374304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37430c: 0x3e00008  jr          $ra
    ctx->pc = 0x37430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37430Cu;
        // 0x374310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374314u;
    // 0x374314: 0x0  nop
    ctx->pc = 0x374314u;
    // NOP
    ctx->pc = 0x374318u;
}
