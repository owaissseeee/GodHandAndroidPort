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

// Function: _$_22_IO_ostream_withassign
// Address: 0x389880 - 0x389960
void ps2____22_IO_ostream_withassign_0x389880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____22_IO_ostream_withassign_0x389880");
#endif

    switch (ctx->pc) {
        case 0x389934u: goto label_389934;
        case 0x389948u: goto label_389948;
        default: break;
    }

    ctx->pc = 0x389880u;

    // 0x389880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x389880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x389884: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x389884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x389888: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x389888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x38988c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x38988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x389890: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x389890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x389894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x389898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38989c: 0x2444d138  addiu       $a0, $v0, -0x2EC8
    ctx->pc = 0x38989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955320));
    // 0x3898a0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3898a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3898a4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3898a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3898a8: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3898A8u;
    {
        const bool branch_taken_0x3898a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3898ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898A8u;
        // 0x3898ac: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898a8) {
            ctx->pc = 0x3898DCu;
            goto label_3898dc;
        }
    }
    ctx->pc = 0x3898B0u;
    // 0x3898b0: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x3898b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3898b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3898b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3898b8: 0xdc46d138  ld          $a2, -0x2EC8($v0)
    ctx->pc = 0x3898b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294955320)));
    // 0x3898bc: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x3898bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3898c0: 0x24e2fff8  addiu       $v0, $a3, -0x8
    ctx->pc = 0x3898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x3898c4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3898c8: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x3898c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x3898cc: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x3898ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x3898d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3898d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3898d4: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x3898d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x3898d8: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x3898d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_3898dc:
    // 0x3898dc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3898dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3898e0: 0x2524fff8  addiu       $a0, $t1, -0x8
    ctx->pc = 0x3898e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x3898e4: 0x24e2d178  addiu       $v0, $a3, -0x2E88
    ctx->pc = 0x3898e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955384));
    // 0x3898e8: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x3898e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3898ec: 0xad220028  sw          $v0, 0x28($t1)
    ctx->pc = 0x3898ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
    // 0x3898f0: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x3898f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x3898f4: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x3898f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3898f8: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x3898f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3898fc: 0xdce5d178  ld          $a1, -0x2E88($a3)
    ctx->pc = 0x3898fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294955384)));
    // 0x389900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x389900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x389904: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x389904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x389908: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x389908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x38990c: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x38990cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x389910: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x389910u;
    {
        const bool branch_taken_0x389910 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x389914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389910u;
        // 0x389914: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389910) {
            ctx->pc = 0x389934u;
            goto label_389934;
        }
    }
    ctx->pc = 0x389918u;
    // 0x389918: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x389918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38991c: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x38991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x389920: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x389920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x389924: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389924u;
    {
        const bool branch_taken_0x389924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389924u;
        // 0x389928: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389924) {
            ctx->pc = 0x389934u;
            goto label_389934;
        }
    }
    ctx->pc = 0x38992Cu;
    // 0x38992c: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x38992Cu;
    SET_GPR_U32(ctx, 31, 0x389934u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x38992Cu, 0x389934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389934u;
label_389934:
    // 0x389934: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x389934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x389938: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389938u;
    {
        const bool branch_taken_0x389938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389938u;
        // 0x38993c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389938) {
            ctx->pc = 0x38994Cu;
            goto label_38994c;
        }
    }
    ctx->pc = 0x389940u;
    // 0x389940: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x389940u;
    SET_GPR_U32(ctx, 31, 0x389948u);
    ctx->pc = 0x389944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389940u;
    // 0x389944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x389940u, 0x389948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389948u;
label_389948:
    // 0x389948: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x389948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38994c:
    // 0x38994c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x38994cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x389950: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x389950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389954: 0x3e00008  jr          $ra
    ctx->pc = 0x389954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389954u;
        // 0x389958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38995Cu;
    // 0x38995c: 0x0  nop
    ctx->pc = 0x38995cu;
    // NOP
    ctx->pc = 0x389960u;
}
