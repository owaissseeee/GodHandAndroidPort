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

// Function: MPV_BsearchDelim
// Address: 0x369270 - 0x369370
void MPV_BsearchDelim_0x369270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPV_BsearchDelim_0x369270");
#endif

    switch (ctx->pc) {
        case 0x3692b0u: goto label_3692b0;
        case 0x369320u: goto label_369320;
        default: break;
    }

    ctx->pc = 0x369270u;

    // 0x369270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x369270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x369274: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x369274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36927c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36927cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x369284: 0x2058823  subu        $s1, $s0, $a1
    ctx->pc = 0x369284u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x369288: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x369288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x36928c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x369290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369294: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x369294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369298: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x369298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36929c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x36929Cu;
    {
        const bool branch_taken_0x36929c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3692A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36929Cu;
        // 0x3692a0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36929c) {
            ctx->pc = 0x36934Cu;
            goto label_36934c;
        }
    }
    ctx->pc = 0x3692A4u;
    // 0x3692a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3692a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3692a8: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x3692a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3692ac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3692acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3692b0:
    // 0x3692b0: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x3692B0u;
    {
        const bool branch_taken_0x3692b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x3692B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692B0u;
        // 0x3692b4: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692b0) {
            ctx->pc = 0x3692E0u;
            goto label_3692e0;
        }
    }
    ctx->pc = 0x3692B8u;
    // 0x3692b8: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3692B8u;
    {
        const bool branch_taken_0x3692b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3692b8) {
            ctx->pc = 0x3692BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3692B8u;
            // 0x3692bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369340u;
            goto label_369340;
        }
    }
    ctx->pc = 0x3692C0u;
    // 0x3692c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3692c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3692c4: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3692C4u;
    {
        const bool branch_taken_0x3692c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3692c4) {
            ctx->pc = 0x3692F0u;
            goto label_3692f0;
        }
    }
    ctx->pc = 0x3692CCu;
    // 0x3692cc: 0x10740010  beq         $v1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x3692CCu;
    {
        const bool branch_taken_0x3692cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x3692cc) {
            ctx->pc = 0x369310u;
            goto label_369310;
        }
    }
    ctx->pc = 0x3692D4u;
    // 0x3692d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3692D4u;
    {
        const bool branch_taken_0x3692d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3692D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692D4u;
        // 0x3692d8: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692d4) {
            ctx->pc = 0x369344u;
            goto label_369344;
        }
    }
    ctx->pc = 0x3692DCu;
    // 0x3692dc: 0x0  nop
    ctx->pc = 0x3692dcu;
    // NOP
label_3692e0:
    // 0x3692e0: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3692E0u;
    {
        const bool branch_taken_0x3692e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3692e0) {
            ctx->pc = 0x3692E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3692E0u;
            // 0x3692e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369340u;
            goto label_369340;
        }
    }
    ctx->pc = 0x3692E8u;
    // 0x3692e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3692E8u;
    {
        const bool branch_taken_0x3692e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3692ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692E8u;
        // 0x3692ec: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692e8) {
            ctx->pc = 0x369344u;
            goto label_369344;
        }
    }
    ctx->pc = 0x3692F0u;
label_3692f0:
    // 0x3692f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3692F0u;
    {
        const bool branch_taken_0x3692f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3692f0) {
            ctx->pc = 0x369300u;
            goto label_369300;
        }
    }
    ctx->pc = 0x3692F8u;
    // 0x3692f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3692F8u;
    {
        const bool branch_taken_0x3692f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3692FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692F8u;
        // 0x3692fc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692f8) {
            ctx->pc = 0x369340u;
            goto label_369340;
        }
    }
    ctx->pc = 0x369300u;
label_369300:
    // 0x369300: 0x10520010  beq         $v0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x369300u;
    {
        const bool branch_taken_0x369300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x369304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369300u;
        // 0x369304: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369300) {
            ctx->pc = 0x369344u;
            goto label_369344;
        }
    }
    ctx->pc = 0x369308u;
    // 0x369308: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x369308u;
    {
        const bool branch_taken_0x369308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369308u;
        // 0x36930c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369308) {
            ctx->pc = 0x369344u;
            goto label_369344;
        }
    }
    ctx->pc = 0x369310u;
label_369310:
    // 0x369310: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x369310u;
    {
        const bool branch_taken_0x369310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369310) {
            ctx->pc = 0x369314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369310u;
            // 0x369314: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x369338u;
            goto label_369338;
        }
    }
    ctx->pc = 0x369318u;
    // 0x369318: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x369318u;
    SET_GPR_U32(ctx, 31, 0x369320u);
    ctx->pc = 0x36931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369318u;
    // 0x36931c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x369318u, 0x369320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369320u;
label_369320:
    // 0x369320: 0x2621824  and         $v1, $s3, $v0
    ctx->pc = 0x369320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x369324: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x369324u;
    {
        const bool branch_taken_0x369324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369324u;
        // 0x369328: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369324) {
            ctx->pc = 0x369350u;
            goto label_369350;
        }
    }
    ctx->pc = 0x36932Cu;
    // 0x36932c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36932Cu;
    {
        const bool branch_taken_0x36932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36932Cu;
        // 0x369330: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36932c) {
            ctx->pc = 0x369340u;
            goto label_369340;
        }
    }
    ctx->pc = 0x369334u;
    // 0x369334: 0x0  nop
    ctx->pc = 0x369334u;
    // NOP
label_369338:
    // 0x369338: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x369338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36933c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x36933cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_369340:
    // 0x369340: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x369340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_369344:
    // 0x369344: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x369344u;
    {
        const bool branch_taken_0x369344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369344u;
        // 0x369348: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369344) {
            ctx->pc = 0x3692B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3692b0;
        }
    }
    ctx->pc = 0x36934Cu;
label_36934c:
    // 0x36934c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36934cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_369350:
    // 0x369350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36935c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36935cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x369360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369364: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x369364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x369368: 0x3e00008  jr          $ra
    ctx->pc = 0x369368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369368u;
        // 0x36936c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369370u;
}
