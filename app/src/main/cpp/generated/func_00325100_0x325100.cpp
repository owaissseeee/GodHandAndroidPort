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

// Function: func_00325100
// Address: 0x325100 - 0x325240
void func_00325100_0x325100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325100_0x325100");
#endif

    switch (ctx->pc) {
        case 0x325168u: goto label_325168;
        case 0x32517cu: goto label_32517c;
        case 0x325198u: goto label_325198;
        case 0x3251a8u: goto label_3251a8;
        case 0x3251bcu: goto label_3251bc;
        case 0x3251d0u: goto label_3251d0;
        case 0x3251e8u: goto label_3251e8;
        case 0x3251f4u: goto label_3251f4;
        default: break;
    }

    ctx->pc = 0x325100u;

    // 0x325100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x325104: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32510c: 0x24468198  addiu       $a2, $v0, -0x7E68
    ctx->pc = 0x32510cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934936));
    // 0x325110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325118: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x325118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32511c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x325120: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x325120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x325124: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x325124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x325128: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x325128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x32512c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x325130: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x325130u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3C8198u));
    // 0x325134: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x325134u;
    {
        const bool branch_taken_0x325134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325134u;
        // 0x325138: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325134) {
            ctx->pc = 0x325200u;
            goto label_325200;
        }
    }
    ctx->pc = 0x32513Cu;
    // 0x32513c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325140: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325144: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x325144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x325148: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x325148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x32514c: 0x24548120  addiu       $s4, $v0, -0x7EE0
    ctx->pc = 0x32514cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x325150: 0x247380f4  addiu       $s3, $v1, -0x7F0C
    ctx->pc = 0x325150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934772));
    // 0x325154: 0x249280e4  addiu       $s2, $a0, -0x7F1C
    ctx->pc = 0x325154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934756));
    // 0x325158: 0x24b781c8  addiu       $s7, $a1, -0x7E38
    ctx->pc = 0x325158u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934984));
    // 0x32515c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x32515cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325160: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x325160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325164: 0x3c15003d  lui         $s5, 0x3D
    ctx->pc = 0x325164u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
label_325168:
    // 0x325168: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x325168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32516c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x32516cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x325170: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x325170u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x325174: 0xc0cef6a  jal         func_33BDA8
    ctx->pc = 0x325174u;
    SET_GPR_U32(ctx, 31, 0x32517Cu);
    ctx->pc = 0x325178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325174u;
    // 0x325178: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDA8u, 0x325174u, 0x32517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32517Cu;
label_32517c:
    // 0x32517c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x32517cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x325180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325184: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x325184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x325188: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x325188u;
    {
        const bool branch_taken_0x325188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x325188) {
            ctx->pc = 0x325198u;
            goto label_325198;
        }
    }
    ctx->pc = 0x325190u;
    // 0x325190: 0xc0c94b8  jal         func_3252E0
    ctx->pc = 0x325190u;
    SET_GPR_U32(ctx, 31, 0x325198u);
    ctx->pc = 0x325194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325190u;
    // 0x325194: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252E0u, 0x325190u, 0x325198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325198u;
label_325198:
    // 0x325198: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x325198u;
    {
        const bool branch_taken_0x325198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x325198) {
            ctx->pc = 0x3251F4u;
            goto label_3251f4;
        }
    }
    ctx->pc = 0x3251A0u;
    // 0x3251a0: 0xc0c9584  jal         func_325610
    ctx->pc = 0x3251A0u;
    SET_GPR_U32(ctx, 31, 0x3251A8u);
    ctx->pc = 0x325610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325610u, 0x3251A0u, 0x3251A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251A8u;
label_3251a8:
    // 0x3251a8: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3251A8u;
    {
        const bool branch_taken_0x3251a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3251ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251A8u;
        // 0x3251ac: 0x26b08150  addiu       $s0, $s5, -0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251a8) {
            ctx->pc = 0x3251D0u;
            goto label_3251d0;
        }
    }
    ctx->pc = 0x3251B0u;
    // 0x3251b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3251b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3251b4: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x3251B4u;
    SET_GPR_U32(ctx, 31, 0x3251BCu);
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x3251B4u, 0x3251BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251BCu;
label_3251bc:
    // 0x3251bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3251bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3251c0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3251C0u;
    {
        const bool branch_taken_0x3251c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3251c0) {
            ctx->pc = 0x3251D0u;
            goto label_3251d0;
        }
    }
    ctx->pc = 0x3251C8u;
    // 0x3251c8: 0xc0c94a4  jal         func_325290
    ctx->pc = 0x3251C8u;
    SET_GPR_U32(ctx, 31, 0x3251D0u);
    ctx->pc = 0x3251CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251C8u;
    // 0x3251cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325290u, 0x3251C8u, 0x3251D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251D0u;
label_3251d0:
    // 0x3251d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3251d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3251d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3251d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3251d8: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3251D8u;
    {
        const bool branch_taken_0x3251d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3251d8) {
            ctx->pc = 0x3251ECu;
            goto label_3251ec;
        }
    }
    ctx->pc = 0x3251E0u;
    // 0x3251e0: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x3251E0u;
    SET_GPR_U32(ctx, 31, 0x3251E8u);
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x3251E0u, 0x3251E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251E8u;
label_3251e8:
    // 0x3251e8: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x3251e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_3251ec:
    // 0x3251ec: 0xc0c94b8  jal         func_3252E0
    ctx->pc = 0x3251ECu;
    SET_GPR_U32(ctx, 31, 0x3251F4u);
    ctx->pc = 0x3252E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252E0u, 0x3251ECu, 0x3251F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251F4u;
label_3251f4:
    // 0x3251f4: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3251f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3251f8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3251F8u;
    {
        const bool branch_taken_0x3251f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3251FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251F8u;
        // 0x3251fc: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251f8) {
            ctx->pc = 0x325168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325168;
        }
    }
    ctx->pc = 0x325200u;
label_325200:
    // 0x325200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32520c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32520cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325210: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x325210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
    // 0x325214: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x325214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325218: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x325218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32521c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x32521cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325220: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x325220u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325224: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x325224u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x325228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32522c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x32522cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x325230: 0x80ebeb8  j           func_3AFAE0
    ctx->pc = 0x325230u;
    ctx->pc = 0x325234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325230u;
    // 0x325234: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAE0u, 0x325230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325238u;
    // 0x325238: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x325238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32523c: 0x0  nop
    ctx->pc = 0x32523cu;
    // NOP
    ctx->pc = 0x325240u;
}
