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

// Function: func_00313150
// Address: 0x313150 - 0x313210
void func_00313150_0x313150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00313150_0x313150");
#endif

    switch (ctx->pc) {
        case 0x313188u: goto label_313188;
        case 0x3131a4u: goto label_3131a4;
        case 0x3131acu: goto label_3131ac;
        case 0x3131c8u: goto label_3131c8;
        default: break;
    }

    ctx->pc = 0x313150u;

    // 0x313150: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313154: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x313158: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31315c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31315cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313160: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x313160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x313164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313168: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31316c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x31316Cu;
    {
        const bool branch_taken_0x31316c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31316Cu;
        // 0x313170: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31316c) {
            ctx->pc = 0x3131F8u;
            goto label_3131f8;
        }
    }
    ctx->pc = 0x313174u;
    // 0x313174: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313178: 0x240421c0  addiu       $a0, $zero, 0x21C0
    ctx->pc = 0x313178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x31317c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x31317cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x313180: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313180u;
    SET_GPR_U32(ctx, 31, 0x313188u);
    ctx->pc = 0x313184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313180u;
    // 0x313184: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313180u, 0x313188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313188u;
label_313188:
    // 0x313188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31318c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31318Cu;
    {
        const bool branch_taken_0x31318c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31318Cu;
        // 0x313190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31318c) {
            ctx->pc = 0x3131F8u;
            goto label_3131f8;
        }
    }
    ctx->pc = 0x313194u;
    // 0x313194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313198: 0x240621c0  addiu       $a2, $zero, 0x21C0
    ctx->pc = 0x313198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x31319c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31319Cu;
    SET_GPR_U32(ctx, 31, 0x3131A4u);
    ctx->pc = 0x3131A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31319Cu;
    // 0x3131a0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31319Cu, 0x3131A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3131A4u;
label_3131a4:
    // 0x3131a4: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x3131A4u;
    SET_GPR_U32(ctx, 31, 0x3131ACu);
    ctx->pc = 0x3131A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3131A4u;
    // 0x3131a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x3131A4u, 0x3131ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3131ACu;
label_3131ac:
    // 0x3131ac: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3131acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3131b0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3131b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3131b4: 0x24428890  addiu       $v0, $v0, -0x7770
    ctx->pc = 0x3131b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936720));
    // 0x3131b8: 0x260305b0  addiu       $v1, $s0, 0x5B0
    ctx->pc = 0x3131b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x3131bc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x3131bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x3131c0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3131c4: 0x0  nop
    ctx->pc = 0x3131c4u;
    // NOP
label_3131c8:
    // 0x3131c8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x3131c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3131cc: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x3131ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3131d0: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x3131d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3131d4: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x3131d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3131d8: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x3131d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3131dc: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x3131dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3131e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3131e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3131e4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3131E4u;
    {
        const bool branch_taken_0x3131e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131E4u;
        // 0x3131e8: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131e4) {
            ctx->pc = 0x3131C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3131c8;
        }
    }
    ctx->pc = 0x3131ECu;
    // 0x3131ec: 0xfa202190  sqc2        $vf0, 0x2190($s1)
    ctx->pc = 0x3131ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 8592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3131f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3131F0u;
    {
        const bool branch_taken_0x3131f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3131F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131F0u;
        // 0x3131f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131f0) {
            ctx->pc = 0x3131FCu;
            goto label_3131fc;
        }
    }
    ctx->pc = 0x3131F8u;
label_3131f8:
    // 0x3131f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3131f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3131fc:
    // 0x3131fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3131fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313208: 0x3e00008  jr          $ra
    ctx->pc = 0x313208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313208u;
        // 0x31320c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313210u;
}
