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

// Function: func_00313210
// Address: 0x313210 - 0x3132d0
void func_00313210_0x313210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00313210_0x313210");
#endif

    switch (ctx->pc) {
        case 0x313248u: goto label_313248;
        case 0x313264u: goto label_313264;
        case 0x31326cu: goto label_31326c;
        case 0x313288u: goto label_313288;
        default: break;
    }

    ctx->pc = 0x313210u;

    // 0x313210: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313214: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x313218: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313218u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31321c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31321cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313220: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x313220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x313224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313228: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31322c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x31322Cu;
    {
        const bool branch_taken_0x31322c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31322Cu;
        // 0x313230: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31322c) {
            ctx->pc = 0x3132B8u;
            goto label_3132b8;
        }
    }
    ctx->pc = 0x313234u;
    // 0x313234: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313238: 0x240421c0  addiu       $a0, $zero, 0x21C0
    ctx->pc = 0x313238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x31323c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x31323cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x313240: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313240u;
    SET_GPR_U32(ctx, 31, 0x313248u);
    ctx->pc = 0x313244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313240u;
    // 0x313244: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313240u, 0x313248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313248u;
label_313248:
    // 0x313248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31324c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31324Cu;
    {
        const bool branch_taken_0x31324c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31324Cu;
        // 0x313250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31324c) {
            ctx->pc = 0x3132B8u;
            goto label_3132b8;
        }
    }
    ctx->pc = 0x313254u;
    // 0x313254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313258: 0x240621c0  addiu       $a2, $zero, 0x21C0
    ctx->pc = 0x313258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x31325c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31325Cu;
    SET_GPR_U32(ctx, 31, 0x313264u);
    ctx->pc = 0x313260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31325Cu;
    // 0x313260: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31325Cu, 0x313264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313264u;
label_313264:
    // 0x313264: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x313264u;
    SET_GPR_U32(ctx, 31, 0x31326Cu);
    ctx->pc = 0x313268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313264u;
    // 0x313268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x313264u, 0x31326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31326Cu;
label_31326c:
    // 0x31326c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x31326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x313270: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313274: 0x24427ad0  addiu       $v0, $v0, 0x7AD0
    ctx->pc = 0x313274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31440));
    // 0x313278: 0x260305b0  addiu       $v1, $s0, 0x5B0
    ctx->pc = 0x313278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x31327c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x31327cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x313280: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x313284: 0x0  nop
    ctx->pc = 0x313284u;
    // NOP
label_313288:
    // 0x313288: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x313288u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31328c: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x31328cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313290: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x313290u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313294: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x313294u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313298: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x313298u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31329c: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x31329cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3132a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3132a4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3132A4u;
    {
        const bool branch_taken_0x3132a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3132A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132A4u;
        // 0x3132a8: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132a4) {
            ctx->pc = 0x313288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313288;
        }
    }
    ctx->pc = 0x3132ACu;
    // 0x3132ac: 0xfa202190  sqc2        $vf0, 0x2190($s1)
    ctx->pc = 0x3132acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 8592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3132b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3132B0u;
    {
        const bool branch_taken_0x3132b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132B0u;
        // 0x3132b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132b0) {
            ctx->pc = 0x3132BCu;
            goto label_3132bc;
        }
    }
    ctx->pc = 0x3132B8u;
label_3132b8:
    // 0x3132b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3132b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3132bc:
    // 0x3132bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3132bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3132c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3132c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3132c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3132c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3132c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3132C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132C8u;
        // 0x3132cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3132C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3132D0u;
}
