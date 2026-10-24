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

// Function: _pictureDisplayExtension
// Address: 0x3a1100 - 0x3a11f8
void _pictureDisplayExtension_0x3a1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureDisplayExtension_0x3a1100");
#endif

    switch (ctx->pc) {
        case 0x3a1180u: goto label_3a1180;
        case 0x3a1188u: goto label_3a1188;
        case 0x3a11a0u: goto label_3a11a0;
        case 0x3a11b0u: goto label_3a11b0;
        case 0x3a11c4u: goto label_3a11c4;
        default: break;
    }

    ctx->pc = 0x3a1100u;

    // 0x3a1100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a1104: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a1108: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a110c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a110cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1110: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3a1110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3a1114: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3a1114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3a1118: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3a1118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3a111c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a1120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1124: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x3a1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3a1128: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1128u;
    {
        const bool branch_taken_0x3a1128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1128) {
            ctx->pc = 0x3A112Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1128u;
            // 0x3a112c: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A114Cu;
            goto label_3a114c;
        }
    }
    ctx->pc = 0x3A1130u;
    // 0x3a1130: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x3a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x3a1134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1134u;
    {
        const bool branch_taken_0x3a1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1134u;
        // 0x3a1138: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1134) {
            ctx->pc = 0x3A1158u;
            goto label_3a1158;
        }
    }
    ctx->pc = 0x3A113Cu;
    // 0x3a113c: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x3a113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x3a1140: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a1144: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1144u;
    {
        const bool branch_taken_0x3a1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1144u;
        // 0x3a1148: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1144) {
            ctx->pc = 0x3A1168u;
            goto label_3a1168;
        }
    }
    ctx->pc = 0x3A114Cu;
label_3a114c:
    // 0x3a114c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a1150: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1150u;
    {
        const bool branch_taken_0x3a1150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a1150) {
            ctx->pc = 0x3A1154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1150u;
            // 0x3a1154: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1160u;
            goto label_3a1160;
        }
    }
    ctx->pc = 0x3A1158u;
label_3a1158:
    // 0x3a1158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1158u;
    {
        const bool branch_taken_0x3a1158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1158u;
        // 0x3a115c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1158) {
            ctx->pc = 0x3A1168u;
            goto label_3a1168;
        }
    }
    ctx->pc = 0x3A1160u;
label_3a1160:
    // 0x3a1160: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3a1160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1164: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x3a1164u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3a1168:
    // 0x3a1168: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A1168u;
    {
        const bool branch_taken_0x3a1168 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x3A116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1168u;
        // 0x3a116c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1168) {
            ctx->pc = 0x3A11D0u;
            goto label_3a11d0;
        }
    }
    ctx->pc = 0x3A1170u;
    // 0x3a1170: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x3a1170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x3a1174: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x3a1174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x3a1178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a117c: 0x0  nop
    ctx->pc = 0x3a117cu;
    // NOP
label_3a1180:
    // 0x3a1180: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1180u;
    SET_GPR_U32(ctx, 31, 0x3A1188u);
    ctx->pc = 0x3A1184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1180u;
    // 0x3a1184: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1180u, 0x3A1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1188u;
label_3a1188:
    // 0x3a1188: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x3a1188u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3a118c: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x3a118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x3a1190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1194: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a1194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3a1198: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1198u;
    SET_GPR_U32(ctx, 31, 0x3A11A0u);
    ctx->pc = 0x3A119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1198u;
    // 0x3a119c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1198u, 0x3A11A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A11A0u;
label_3a11a0:
    // 0x3a11a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a11a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a11a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a11a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a11a8: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A11A8u;
    SET_GPR_U32(ctx, 31, 0x3A11B0u);
    ctx->pc = 0x3A11ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A11A8u;
    // 0x3a11ac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A11A8u, 0x3A11B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A11B0u;
label_3a11b0:
    // 0x3a11b0: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x3a11b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3a11b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a11b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a11b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a11bc: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A11BCu;
    SET_GPR_U32(ctx, 31, 0x3A11C4u);
    ctx->pc = 0x3A11C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A11BCu;
    // 0x3a11c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A11BCu, 0x3A11C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A11C4u;
label_3a11c4:
    // 0x3a11c4: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x3a11c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3a11c8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3A11C8u;
    {
        const bool branch_taken_0x3a11c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11C8u;
        // 0x3a11cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a11c8) {
            ctx->pc = 0x3A1180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1180;
        }
    }
    ctx->pc = 0x3A11D0u;
label_3a11d0:
    // 0x3a11d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a11d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a11d4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3a11d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a11d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3a11d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a11dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3a11dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a11e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a11e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a11e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a11e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a11e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a11e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a11ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A11ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11ECu;
        // 0x3a11f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A11ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A11F4u;
    // 0x3a11f4: 0x0  nop
    ctx->pc = 0x3a11f4u;
    // NOP
    ctx->pc = 0x3a11f8u;
}
