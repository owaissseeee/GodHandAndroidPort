#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_0079A190
// Address: 0x79a190 - 0x79a290
void func_0079A190_0x79a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A190_0x79a190");
#endif

    switch (ctx->pc) {
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1fcu: goto label_79a1fc;
        case 0x79a210u: goto label_79a210;
        case 0x79a230u: goto label_79a230;
        case 0x79a250u: goto label_79a250;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a268u: goto label_79a268;
        default: break;
    }

    ctx->pc = 0x79a190u;

    // 0x79a190: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79a194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a198: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79a19c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a19cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a1a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79a1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79a1a4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79a1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79a1a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79a1ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79a1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79a1b0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79a1b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a1b8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a1bc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A1BCu;
    SET_GPR_U32(ctx, 31, 0x79A1C4u);
    ctx->pc = 0x79A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1BCu;
    // 0x79a1c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1BCu, 0x79A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C4u;
label_79a1c4:
    // 0x79a1c4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79a1c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1c8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a1cc: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x79a1d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A1D0u;
    {
        const bool branch_taken_0x79a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D0u;
        // 0x79a1d4: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1d0) {
            ctx->pc = 0x79A1E4u;
            goto label_79a1e4;
        }
    }
    ctx->pc = 0x79A1D8u;
label_79a1d8:
    // 0x79a1d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1dc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A1DCu;
    SET_GPR_U32(ctx, 31, 0x79A1E4u);
    ctx->pc = 0x79A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1DCu;
    // 0x79a1e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1DCu, 0x79A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a1e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1ec: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a1f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1f4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A1F4u;
    SET_GPR_U32(ctx, 31, 0x79A1FCu);
    ctx->pc = 0x79A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F4u;
    // 0x79a1f8: 0xa3b00000  sb          $s0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A1F4u, 0x79A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1FCu;
label_79a1fc:
    // 0x79a1fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a200: 0x1630fff5  bne         $s1, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A200u;
    {
        const bool branch_taken_0x79a200 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a200) {
            ctx->pc = 0x79A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1d8;
        }
    }
    ctx->pc = 0x79A208u;
    // 0x79a208: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A208u;
    SET_GPR_U32(ctx, 31, 0x79A210u);
    ctx->pc = 0x79A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A208u;
    // 0x79a20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A208u, 0x79A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A210u;
label_79a210:
    // 0x79a210: 0x1451fff1  bne         $v0, $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x79A210u;
    {
        const bool branch_taken_0x79a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x79A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A210u;
        // 0x79a214: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a210) {
            ctx->pc = 0x79A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1d8;
        }
    }
    ctx->pc = 0x79A218u;
    // 0x79a218: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79a218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a21c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a220: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
    // 0x79a224: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79a224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a228: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79A228u;
    SET_GPR_U32(ctx, 31, 0x79A230u);
    ctx->pc = 0x79A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A228u;
    // 0x79a22c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A228u, 0x79A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A230u;
label_79a230:
    // 0x79a230: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a234: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a238: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a23c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a244: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a248: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A248u;
    SET_GPR_U32(ctx, 31, 0x79A250u);
    ctx->pc = 0x79A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A248u;
    // 0x79a24c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A248u, 0x79A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a254: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A254u;
    SET_GPR_U32(ctx, 31, 0x79A25Cu);
    ctx->pc = 0x79A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A254u;
    // 0x79a258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A254u, 0x79A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A25Cu;
label_79a25c:
    // 0x79a25c: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79a260: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A260u;
    SET_GPR_U32(ctx, 31, 0x79A268u);
    ctx->pc = 0x79A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A260u;
    // 0x79a264: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A260u, 0x79A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A268u;
label_79a268:
    // 0x79a268: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79a268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a26c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79a26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a270: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79a270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a274: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79a274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a278: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79a278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a27c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79a27cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a284: 0x3e00008  jr          $ra
    ctx->pc = 0x79A284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A284u;
        // 0x79a288: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A28Cu;
    // 0x79a28c: 0x0  nop
    ctx->pc = 0x79a28cu;
    // NOP
    ctx->pc = 0x79a290u;
}
} // namespace gh_r300
