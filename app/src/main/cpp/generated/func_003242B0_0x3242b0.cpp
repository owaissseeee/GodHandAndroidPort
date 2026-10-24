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

// Function: func_003242B0
// Address: 0x3242b0 - 0x3243c8
void func_003242B0_0x3242b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003242B0_0x3242b0");
#endif

    switch (ctx->pc) {
        case 0x3242ecu: goto label_3242ec;
        case 0x324314u: goto label_324314;
        case 0x32435cu: goto label_32435c;
        case 0x3243a4u: goto label_3243a4;
        default: break;
    }

    ctx->pc = 0x3242b0u;

    // 0x3242b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3242b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3242b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3242b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3242b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3242b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3242bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3242c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3242c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3242c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3242c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3242c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3242ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3242d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3242d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3242d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3242d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3242dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3242e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3242e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3242e4: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x3242E4u;
    SET_GPR_U32(ctx, 31, 0x3242ECu);
    ctx->pc = 0x3242E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3242E4u;
    // 0x3242e8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x3242E4u, 0x3242ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3242ECu;
label_3242ec:
    // 0x3242ec: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3242ECu;
    {
        const bool branch_taken_0x3242ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3242ec) {
            ctx->pc = 0x3242F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3242ECu;
            // 0x3242f0: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324300u;
            goto label_324300;
        }
    }
    ctx->pc = 0x3242F4u;
    // 0x3242f4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3242f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3242f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3242F8u;
    {
        const bool branch_taken_0x3242f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3242FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242F8u;
        // 0x3242fc: 0x248418b0  addiu       $a0, $a0, 0x18B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242f8) {
            ctx->pc = 0x324354u;
            goto label_324354;
        }
    }
    ctx->pc = 0x324300u;
label_324300:
    // 0x324300: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x324300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324304: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x324304u;
    {
        const bool branch_taken_0x324304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x324304) {
            ctx->pc = 0x324314u;
            goto label_324314;
        }
    }
    ctx->pc = 0x32430Cu;
    // 0x32430c: 0xc0c8fc6  jal         func_323F18
    ctx->pc = 0x32430Cu;
    SET_GPR_U32(ctx, 31, 0x324314u);
    ctx->pc = 0x324310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32430Cu;
    // 0x324310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F18u, 0x32430Cu, 0x324314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324314u;
label_324314:
    // 0x324314: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x324314u;
    {
        const bool branch_taken_0x324314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x324318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324314u;
        // 0x324318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324314) {
            ctx->pc = 0x324328u;
            goto label_324328;
        }
    }
    ctx->pc = 0x32431Cu;
    // 0x32431c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32431Cu;
    {
        const bool branch_taken_0x32431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32431Cu;
        // 0x324320: 0xae120014  sw          $s2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32431c) {
            ctx->pc = 0x324368u;
            goto label_324368;
        }
    }
    ctx->pc = 0x324324u;
    // 0x324324: 0x0  nop
    ctx->pc = 0x324324u;
    // NOP
label_324328:
    // 0x324328: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324328u;
    {
        const bool branch_taken_0x324328 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x324328) {
            ctx->pc = 0x324338u;
            goto label_324338;
        }
    }
    ctx->pc = 0x324330u;
    // 0x324330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x324330u;
    {
        const bool branch_taken_0x324330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324330u;
        // 0x324334: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324330) {
            ctx->pc = 0x324344u;
            goto label_324344;
        }
    }
    ctx->pc = 0x324338u;
label_324338:
    // 0x324338: 0x16330005  bne         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x324338u;
    {
        const bool branch_taken_0x324338 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x32433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324338u;
        // 0x32433c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324338) {
            ctx->pc = 0x324350u;
            goto label_324350;
        }
    }
    ctx->pc = 0x324340u;
    // 0x324340: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x324340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_324344:
    // 0x324344: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x324344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x324348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324348u;
    {
        const bool branch_taken_0x324348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324348u;
        // 0x32434c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324348) {
            ctx->pc = 0x324368u;
            goto label_324368;
        }
    }
    ctx->pc = 0x324350u;
label_324350:
    // 0x324350: 0x248418d8  addiu       $a0, $a0, 0x18D8
    ctx->pc = 0x324350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6360));
label_324354:
    // 0x324354: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x324354u;
    SET_GPR_U32(ctx, 31, 0x32435Cu);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x324354u, 0x32435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32435Cu;
label_32435c:
    // 0x32435c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32435Cu;
    {
        const bool branch_taken_0x32435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32435Cu;
        // 0x324360: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32435c) {
            ctx->pc = 0x3243A8u;
            goto label_3243a8;
        }
    }
    ctx->pc = 0x324364u;
    // 0x324364: 0x0  nop
    ctx->pc = 0x324364u;
    // NOP
label_324368:
    // 0x324368: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x324368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x32436c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32436Cu;
    {
        const bool branch_taken_0x32436c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x32436c) {
            ctx->pc = 0x324370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32436Cu;
            // 0x324370: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324380u;
            goto label_324380;
        }
    }
    ctx->pc = 0x324374u;
    // 0x324374: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x324374u;
    {
        const bool branch_taken_0x324374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324374u;
        // 0x324378: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324374) {
            ctx->pc = 0x32438Cu;
            goto label_32438c;
        }
    }
    ctx->pc = 0x32437Cu;
    // 0x32437c: 0x0  nop
    ctx->pc = 0x32437cu;
    // NOP
label_324380:
    // 0x324380: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x324380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x324384: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x324384u;
    {
        const bool branch_taken_0x324384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324384) {
            ctx->pc = 0x324388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324384u;
            // 0x324388: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32438Cu;
            goto label_32438c;
        }
    }
    ctx->pc = 0x32438Cu;
label_32438c:
    // 0x32438c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x32438cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324390: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x324390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324394: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x324394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x324398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32439c: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x32439Cu;
    SET_GPR_U32(ctx, 31, 0x3243A4u);
    ctx->pc = 0x3243A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32439Cu;
    // 0x3243a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x32439Cu, 0x3243A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3243A4u;
label_3243a4:
    // 0x3243a4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3243a8:
    // 0x3243a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3243a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3243ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3243acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3243b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3243b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3243b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3243b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3243b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3243b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3243bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3243BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243BCu;
        // 0x3243c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3243C4u;
    // 0x3243c4: 0x0  nop
    ctx->pc = 0x3243c4u;
    // NOP
    ctx->pc = 0x3243c8u;
}
