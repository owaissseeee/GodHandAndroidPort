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

// Function: sceSifRebootIop
// Address: 0x3b6290 - 0x3b63a0
void sceSifRebootIop_0x3b6290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifRebootIop_0x3b6290");
#endif

    switch (ctx->pc) {
        case 0x3b62b8u: goto label_3b62b8;
        case 0x3b62fcu: goto label_3b62fc;
        case 0x3b630cu: goto label_3b630c;
        case 0x3b6314u: goto label_3b6314;
        case 0x3b6328u: goto label_3b6328;
        case 0x3b6360u: goto label_3b6360;
        case 0x3b638cu: goto label_3b638c;
        default: break;
    }

    ctx->pc = 0x3b6290u;

    // 0x3b6290: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b6290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b6294: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b6294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b6298: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x3b6298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x3b629c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3b629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3b62a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b62a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b62a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b62a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b62a8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3b62a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b62ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B62ACu;
    {
        const bool branch_taken_0x3b62ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62ACu;
        // 0x3b62b0: 0x24510340  addiu       $s1, $v0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62ac) {
            ctx->pc = 0x3B62DCu;
            goto label_3b62dc;
        }
    }
    ctx->pc = 0x3B62B4u;
    // 0x3b62b4: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x3b62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_3b62b8:
    // 0x3b62b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b62bc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3b62bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b62c0: 0x0  nop
    ctx->pc = 0x3b62c0u;
    // NOP
    // 0x3b62c4: 0x0  nop
    ctx->pc = 0x3b62c4u;
    // NOP
    // 0x3b62c8: 0x0  nop
    ctx->pc = 0x3b62c8u;
    // NOP
    // 0x3b62cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B62CCu;
    {
        const bool branch_taken_0x3b62cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b62cc) {
            ctx->pc = 0x3B62B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b62b8;
        }
    }
    ctx->pc = 0x3B62D4u;
    // 0x3b62d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B62D4u;
    {
        const bool branch_taken_0x3b62d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62D4u;
        // 0x3b62d8: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62d4) {
            ctx->pc = 0x3B62E4u;
            goto label_3b62e4;
        }
    }
    ctx->pc = 0x3B62DCu;
label_3b62dc:
    // 0x3b62dc: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x3b62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x3b62e0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x3b62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b62e4:
    // 0x3b62e4: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x3b62e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x3b62e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B62E8u;
    {
        const bool branch_taken_0x3b62e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62E8u;
        // 0x3b62ec: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62e8) {
            ctx->pc = 0x3B6304u;
            goto label_3b6304;
        }
    }
    ctx->pc = 0x3B62F0u;
    // 0x3b62f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b62f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b62f4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3B62F4u;
    SET_GPR_U32(ctx, 31, 0x3B62FCu);
    ctx->pc = 0x3B62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B62F4u;
    // 0x3b62f8: 0x24840350  addiu       $a0, $a0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3B62F4u, 0x3B62FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B62FCu;
label_3b62fc:
    // 0x3b62fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B62FCu;
    {
        const bool branch_taken_0x3b62fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62FCu;
        // 0x3b6300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62fc) {
            ctx->pc = 0x3B638Cu;
            goto label_3b638c;
        }
    }
    ctx->pc = 0x3B6304u;
label_3b6304:
    // 0x3b6304: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x3B6304u;
    SET_GPR_U32(ctx, 31, 0x3B630Cu);
    ctx->pc = 0x3B6308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6304u;
    // 0x3b6308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x3B6304u, 0x3B630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B630Cu;
label_3b630c:
    // 0x3b630c: 0xc0ecaa8  jal         func_3B2AA0
    ctx->pc = 0x3B630Cu;
    SET_GPR_U32(ctx, 31, 0x3B6314u);
    ctx->pc = 0x3B2AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2AA0u, 0x3B630Cu, 0x3B6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6314u;
label_3b6314:
    // 0x3b6314: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b6314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b6318: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3b6318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b631c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B631Cu;
    {
        const bool branch_taken_0x3b631c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B631Cu;
        // 0x3b6320: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b631c) {
            ctx->pc = 0x3B634Cu;
            goto label_3b634c;
        }
    }
    ctx->pc = 0x3B6324u;
    // 0x3b6324: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x3b6324u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3b6328:
    // 0x3b6328: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3b6328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b632c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b632cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b6330: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b6330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b6334: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3b6334u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b6338: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b6338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b633c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B633Cu;
    {
        const bool branch_taken_0x3b633c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b633c) {
            ctx->pc = 0x3B6328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6328;
        }
    }
    ctx->pc = 0x3B6344u;
    // 0x3b6344: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6344u;
    {
        const bool branch_taken_0x3b6344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6344u;
        // 0x3b6348: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6344) {
            ctx->pc = 0x3B6354u;
            goto label_3b6354;
        }
    }
    ctx->pc = 0x3B634Cu;
label_3b634c:
    // 0x3b634c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x3b634cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b6350: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3b6350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6354:
    // 0x3b6354: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B6354u;
    {
        const bool branch_taken_0x3b6354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6354) {
            ctx->pc = 0x3B6358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6354u;
            // 0x3b6358: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6380u;
            goto label_3b6380;
        }
    }
    ctx->pc = 0x3B635Cu;
    // 0x3b635c: 0x0  nop
    ctx->pc = 0x3b635cu;
    // NOP
label_3b6360:
    // 0x3b6360: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3b6360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b6364: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b6364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b6368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b6368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b636c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3b636cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b6370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b6370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B6374u;
    {
        const bool branch_taken_0x3b6374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6374) {
            ctx->pc = 0x3B6360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6360;
        }
    }
    ctx->pc = 0x3B637Cu;
    // 0x3b637c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3b637cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3b6380:
    // 0x3b6380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b6380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6384: 0xc0ed83a  jal         func_3B60E8
    ctx->pc = 0x3B6384u;
    SET_GPR_U32(ctx, 31, 0x3B638Cu);
    ctx->pc = 0x3B6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6384u;
    // 0x3b6388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B60E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B60E8u, 0x3B6384u, 0x3B638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B638Cu;
label_3b638c:
    // 0x3b638c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b638cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b6390: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x3b6390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b6394: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3b6394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b6398: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6398u;
        // 0x3b639c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B63A0u;
}
