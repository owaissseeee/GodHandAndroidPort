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

// Function: StepObj_stepTimer
// Address: 0x2b3240 - 0x2b3338
void StepObj_stepTimer_0x2b3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepObj_stepTimer_0x2b3240");
#endif

    switch (ctx->pc) {
        case 0x2b3274u: goto label_2b3274;
        case 0x2b3288u: goto label_2b3288;
        case 0x2b3328u: goto label_2b3328;
        default: break;
    }

    ctx->pc = 0x2b3240u;

    // 0x2b3240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b3244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b3248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b324c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b324cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3250: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2b3250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b3254: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3254u;
    {
        const bool branch_taken_0x2b3254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3254u;
        // 0x2b3258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3254) {
            ctx->pc = 0x2B326Cu;
            goto label_2b326c;
        }
    }
    ctx->pc = 0x2B325Cu;
    // 0x2b325c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B325Cu;
    {
        const bool branch_taken_0x2b325c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B325Cu;
        // 0x2b3260: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b325c) {
            ctx->pc = 0x2B3280u;
            goto label_2b3280;
        }
    }
    ctx->pc = 0x2B3264u;
    // 0x2b3264: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B3264u;
    {
        const bool branch_taken_0x2b3264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3264u;
        // 0x2b3268: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3264) {
            ctx->pc = 0x2B3290u;
            goto label_2b3290;
        }
    }
    ctx->pc = 0x2B326Cu;
label_2b326c:
    // 0x2b326c: 0xc0ad174  jal         func_2B45D0
    ctx->pc = 0x2B326Cu;
    SET_GPR_U32(ctx, 31, 0x2B3274u);
    ctx->pc = 0x2B3270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B326Cu;
    // 0x2b3270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45D0u, 0x2B326Cu, 0x2B3274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3274u;
label_2b3274:
    // 0x2b3274: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x2b3274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b3278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b327c: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2b327cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
label_2b3280:
    // 0x2b3280: 0xc0ad176  jal         func_2B45D8
    ctx->pc = 0x2B3280u;
    SET_GPR_U32(ctx, 31, 0x2B3288u);
    ctx->pc = 0x2B3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3280u;
    // 0x2b3284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45D8u, 0x2B3280u, 0x2B3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3288u;
label_2b3288:
    // 0x2b3288: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2b3288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2b328c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b328cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2b3290:
    // 0x2b3290: 0x8c6423a4  lw          $a0, 0x23A4($v1)
    ctx->pc = 0x2b3290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9124)));
    // 0x2b3294: 0x244674a0  addiu       $a2, $v0, 0x74A0
    ctx->pc = 0x2b3294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2b3298: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x2b3298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b329c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2b329cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2b32a0: 0x84820bda  lh          $v0, 0xBDA($a0)
    ctx->pc = 0x2b32a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 3034)));
    // 0x2b32a4: 0xdcc301a0  ld          $v1, 0x1A0($a2)
    ctx->pc = 0x2b32a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 416)));
    // 0x2b32a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b32a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b32ac: 0x0  nop
    ctx->pc = 0x2b32acu;
    // NOP
    // 0x2b32b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b32b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b32b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b32b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b32b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b32b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b32bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b32bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b32c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b32c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b32c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b32c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B32C8u;
    {
        const bool branch_taken_0x2b32c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32C8u;
        // 0x2b32cc: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32c8) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B32D0u;
    // 0x2b32d0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b32d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b32d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b32d8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2b32dc:
    // 0x2b32dc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b32e0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B32E0u;
    {
        const bool branch_taken_0x2b32e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b32e0) {
            ctx->pc = 0x2B32E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B32E0u;
            // 0x2b32e4: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3318u;
            goto label_2b3318;
        }
    }
    ctx->pc = 0x2B32E8u;
    // 0x2b32e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b32ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b32ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b32f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B32F0u;
    {
        const bool branch_taken_0x2b32f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32F0u;
        // 0x2b32f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32f0) {
            ctx->pc = 0x2B3310u;
            goto label_2b3310;
        }
    }
    ctx->pc = 0x2B32F8u;
    // 0x2b32f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b32fc: 0xdcc30178  ld          $v1, 0x178($a2)
    ctx->pc = 0x2b32fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 376)));
    // 0x2b3300: 0xdc443d48  ld          $a0, 0x3D48($v0)
    ctx->pc = 0x2b3300u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x3C3D48u));
    // 0x2b3304: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b3304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b3308: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3308u;
    {
        const bool branch_taken_0x2b3308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3308u;
        // 0x2b330c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3308) {
            ctx->pc = 0x2B3314u;
            goto label_2b3314;
        }
    }
    ctx->pc = 0x2B3310u;
label_2b3310:
    // 0x2b3310: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2b3310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2b3314:
    // 0x2b3314: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b3314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2b3318:
    // 0x2b3318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b331c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b3320: 0xc0accce  jal         func_2B3338
    ctx->pc = 0x2B3320u;
    SET_GPR_U32(ctx, 31, 0x2B3328u);
    ctx->pc = 0x2B3324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3320u;
    // 0x2b3324: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3338u, 0x2B3320u, 0x2B3328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3328u;
label_2b3328:
    // 0x2b3328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b3328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b332c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3330: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3330u;
        // 0x2b3334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3338u;
}
