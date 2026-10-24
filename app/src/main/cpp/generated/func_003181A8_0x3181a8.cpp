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

// Function: func_003181A8
// Address: 0x3181a8 - 0x3182d8
void func_003181A8_0x3181a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003181A8_0x3181a8");
#endif

    switch (ctx->pc) {
        case 0x3181e0u: goto label_3181e0;
        case 0x3181fcu: goto label_3181fc;
        case 0x318204u: goto label_318204;
        case 0x318220u: goto label_318220;
        case 0x318260u: goto label_318260;
        case 0x318270u: goto label_318270;
        default: break;
    }

    ctx->pc = 0x3181a8u;

    // 0x3181a8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3181a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3181ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3181acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3181b0: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3181b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3181b4: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3181b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3181b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3181b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3181bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3181bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3181c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3181c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3181c4: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3181C4u;
    {
        const bool branch_taken_0x3181c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3181C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181C4u;
        // 0x3181c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181c4) {
            ctx->pc = 0x3182BCu;
            goto label_3182bc;
        }
    }
    ctx->pc = 0x3181CCu;
    // 0x3181cc: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3181ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3181d0: 0x240430e0  addiu       $a0, $zero, 0x30E0
    ctx->pc = 0x3181d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12512));
    // 0x3181d4: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x3181d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x3181d8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3181D8u;
    SET_GPR_U32(ctx, 31, 0x3181E0u);
    ctx->pc = 0x3181DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181D8u;
    // 0x3181dc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3181D8u, 0x3181E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181E0u;
label_3181e0:
    // 0x3181e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3181e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181e4: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3181E4u;
    {
        const bool branch_taken_0x3181e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181E4u;
        // 0x3181e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181e4) {
            ctx->pc = 0x3182BCu;
            goto label_3182bc;
        }
    }
    ctx->pc = 0x3181ECu;
    // 0x3181ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3181ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181f0: 0x240630e0  addiu       $a2, $zero, 0x30E0
    ctx->pc = 0x3181f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12512));
    // 0x3181f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3181F4u;
    SET_GPR_U32(ctx, 31, 0x3181FCu);
    ctx->pc = 0x3181F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181F4u;
    // 0x3181f8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3181F4u, 0x3181FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181FCu;
label_3181fc:
    // 0x3181fc: 0xc053a64  jal         func_14E990
    ctx->pc = 0x3181FCu;
    SET_GPR_U32(ctx, 31, 0x318204u);
    ctx->pc = 0x318200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181FCu;
    // 0x318200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E990u, 0x3181FCu, 0x318204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318204u;
label_318204:
    // 0x318204: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x318204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x318208: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x318208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31820c: 0x2442b528  addiu       $v0, $v0, -0x4AD8
    ctx->pc = 0x31820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948136));
    // 0x318210: 0x260313a0  addiu       $v1, $s0, 0x13A0
    ctx->pc = 0x318210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5024));
    // 0x318214: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x318214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x318218: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x318218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x31821c: 0x0  nop
    ctx->pc = 0x31821cu;
    // NOP
label_318220:
    // 0x318220: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x318220u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318224: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x318224u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318228: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x318228u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31822c: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x31822cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318230: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x318230u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318234: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x318234u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31823c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31823Cu;
    {
        const bool branch_taken_0x31823c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x318240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31823Cu;
        // 0x318240: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31823c) {
            ctx->pc = 0x318220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318220;
        }
    }
    ctx->pc = 0x318244u;
    // 0x318244: 0xfa202f80  sqc2        $vf0, 0x2F80($s1)
    ctx->pc = 0x318244u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318248: 0xfa202fb0  sqc2        $vf0, 0x2FB0($s1)
    ctx->pc = 0x318248u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31824c: 0xfa202fd0  sqc2        $vf0, 0x2FD0($s1)
    ctx->pc = 0x31824cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318250: 0xfa202fe0  sqc2        $vf0, 0x2FE0($s1)
    ctx->pc = 0x318250u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318254: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x318254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x318258: 0x26223000  addiu       $v0, $s1, 0x3000
    ctx->pc = 0x318258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
    // 0x31825c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_318260:
    // 0x318260: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x318260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x318264: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x318268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31826c: 0x0  nop
    ctx->pc = 0x31826cu;
    // NOP
label_318270:
    // 0x318270: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x318270u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x318274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x318278: 0x0  nop
    ctx->pc = 0x318278u;
    // NOP
    // 0x31827c: 0x0  nop
    ctx->pc = 0x31827cu;
    // NOP
    // 0x318280: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x318280u;
    {
        const bool branch_taken_0x318280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x318284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318280u;
        // 0x318284: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318280) {
            ctx->pc = 0x318270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318270;
        }
    }
    ctx->pc = 0x318288u;
    // 0x318288: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x318288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31828c: 0x1466fff4  bne         $v1, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x31828Cu;
    {
        const bool branch_taken_0x31828c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x318290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31828Cu;
        // 0x318290: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31828c) {
            ctx->pc = 0x318260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318260;
        }
    }
    ctx->pc = 0x318294u;
    // 0x318294: 0xfa2030c0  sqc2        $vf0, 0x30C0($s1)
    ctx->pc = 0x318294u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x318298: 0xfa2030d0  sqc2        $vf0, 0x30D0($s1)
    ctx->pc = 0x318298u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12496), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31829c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31829cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3182a0: 0xa22004d0  sb          $zero, 0x4D0($s1)
    ctx->pc = 0x3182a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1232), (uint8_t)GPR_U32(ctx, 0));
    // 0x3182a4: 0xa2201390  sb          $zero, 0x1390($s1)
    ctx->pc = 0x3182a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5008), (uint8_t)GPR_U32(ctx, 0));
    // 0x3182a8: 0xa2202fa0  sb          $zero, 0x2FA0($s1)
    ctx->pc = 0x3182a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12192), (uint8_t)GPR_U32(ctx, 0));
    // 0x3182ac: 0xa22004e0  sb          $zero, 0x4E0($s1)
    ctx->pc = 0x3182acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1248), (uint8_t)GPR_U32(ctx, 0));
    // 0x3182b0: 0xa2202ff0  sb          $zero, 0x2FF0($s1)
    ctx->pc = 0x3182b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12272), (uint8_t)GPR_U32(ctx, 0));
    // 0x3182b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3182B4u;
    {
        const bool branch_taken_0x3182b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3182B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182B4u;
        // 0x3182b8: 0xae2030a4  sw          $zero, 0x30A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182b4) {
            ctx->pc = 0x3182C0u;
            goto label_3182c0;
        }
    }
    ctx->pc = 0x3182BCu;
label_3182bc:
    // 0x3182bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3182bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3182c0:
    // 0x3182c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3182c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3182c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3182c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3182c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3182c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3182cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3182CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182CCu;
        // 0x3182d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3182CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3182D4u;
    // 0x3182d4: 0x0  nop
    ctx->pc = 0x3182d4u;
    // NOP
    ctx->pc = 0x3182d8u;
}
