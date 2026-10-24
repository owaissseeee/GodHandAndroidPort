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

// Function: func_0034F930
// Address: 0x34f930 - 0x34fa28
void func_0034F930_0x34f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F930_0x34f930");
#endif

    switch (ctx->pc) {
        case 0x34f950u: goto label_34f950;
        case 0x34f960u: goto label_34f960;
        case 0x34f970u: goto label_34f970;
        case 0x34f98cu: goto label_34f98c;
        case 0x34f9a0u: goto label_34f9a0;
        case 0x34f9acu: goto label_34f9ac;
        case 0x34f9bcu: goto label_34f9bc;
        case 0x34f9ccu: goto label_34f9cc;
        case 0x34f9ecu: goto label_34f9ec;
        default: break;
    }

    ctx->pc = 0x34f930u;

    // 0x34f930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f934: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34f934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34f938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34f93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34f944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34f948: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34F948u;
    SET_GPR_U32(ctx, 31, 0x34F950u);
    ctx->pc = 0x34F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F948u;
    // 0x34f94c: 0x8e111f7c  lw          $s1, 0x1F7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34F948u, 0x34F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F950u;
label_34f950:
    // 0x34f950: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x34F950u;
    {
        const bool branch_taken_0x34f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F950u;
        // 0x34f954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f950) {
            ctx->pc = 0x34F9A0u;
            goto label_34f9a0;
        }
    }
    ctx->pc = 0x34F958u;
    // 0x34f958: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34F958u;
    SET_GPR_U32(ctx, 31, 0x34F960u);
    ctx->pc = 0x34F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F958u;
    // 0x34f95c: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34F958u, 0x34F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F960u;
label_34f960:
    // 0x34f960: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x34F960u;
    {
        const bool branch_taken_0x34f960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F960u;
        // 0x34f964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f960) {
            ctx->pc = 0x34F9A0u;
            goto label_34f9a0;
        }
    }
    ctx->pc = 0x34F968u;
    // 0x34f968: 0xc0d31fc  jal         func_34C7F0
    ctx->pc = 0x34F968u;
    SET_GPR_U32(ctx, 31, 0x34F970u);
    ctx->pc = 0x34F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F968u;
    // 0x34f96c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7F0u, 0x34F968u, 0x34F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F970u;
label_34f970:
    // 0x34f970: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34F970u;
    {
        const bool branch_taken_0x34f970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F970u;
        // 0x34f974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f970) {
            ctx->pc = 0x34F9A4u;
            goto label_34f9a4;
        }
    }
    ctx->pc = 0x34F978u;
    // 0x34f978: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x34f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x34f97c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34F97Cu;
    {
        const bool branch_taken_0x34f97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f97c) {
            ctx->pc = 0x34F9A4u;
            goto label_34f9a4;
        }
    }
    ctx->pc = 0x34F984u;
    // 0x34f984: 0xc0d70ce  jal         func_35C338
    ctx->pc = 0x34F984u;
    SET_GPR_U32(ctx, 31, 0x34F98Cu);
    ctx->pc = 0x34F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F984u;
    // 0x34f988: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C338u, 0x34F984u, 0x34F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F98Cu;
label_34f98c:
    // 0x34f98c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F98Cu;
    {
        const bool branch_taken_0x34f98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F98Cu;
        // 0x34f990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f98c) {
            ctx->pc = 0x34F9A0u;
            goto label_34f9a0;
        }
    }
    ctx->pc = 0x34F994u;
    // 0x34f994: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34f998: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x34F998u;
    SET_GPR_U32(ctx, 31, 0x34F9A0u);
    ctx->pc = 0x34F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F998u;
    // 0x34f99c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x34F998u, 0x34F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9A0u;
label_34f9a0:
    // 0x34f9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34f9a4:
    // 0x34f9a4: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34F9A4u;
    SET_GPR_U32(ctx, 31, 0x34F9ACu);
    ctx->pc = 0x34F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F9A4u;
    // 0x34f9a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34F9A4u, 0x34F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9ACu;
label_34f9ac:
    // 0x34f9ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x34F9ACu;
    {
        const bool branch_taken_0x34f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9ACu;
        // 0x34f9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9ac) {
            ctx->pc = 0x34FA10u;
            goto label_34fa10;
        }
    }
    ctx->pc = 0x34F9B4u;
    // 0x34f9b4: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34F9B4u;
    SET_GPR_U32(ctx, 31, 0x34F9BCu);
    ctx->pc = 0x34F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F9B4u;
    // 0x34f9b8: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34F9B4u, 0x34F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9BCu;
label_34f9bc:
    // 0x34f9bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34F9BCu;
    {
        const bool branch_taken_0x34f9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9BCu;
        // 0x34f9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9bc) {
            ctx->pc = 0x34FA10u;
            goto label_34fa10;
        }
    }
    ctx->pc = 0x34F9C4u;
    // 0x34f9c4: 0xc0d31fc  jal         func_34C7F0
    ctx->pc = 0x34F9C4u;
    SET_GPR_U32(ctx, 31, 0x34F9CCu);
    ctx->pc = 0x34F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F9C4u;
    // 0x34f9c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7F0u, 0x34F9C4u, 0x34F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9CCu;
label_34f9cc:
    // 0x34f9cc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x34F9CCu;
    {
        const bool branch_taken_0x34f9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f9cc) {
            ctx->pc = 0x34F9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F9CCu;
            // 0x34f9d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FA14u;
            goto label_34fa14;
        }
    }
    ctx->pc = 0x34F9D4u;
    // 0x34f9d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x34f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x34f9d8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x34F9D8u;
    {
        const bool branch_taken_0x34f9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f9d8) {
            ctx->pc = 0x34F9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F9D8u;
            // 0x34f9dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FA14u;
            goto label_34fa14;
        }
    }
    ctx->pc = 0x34F9E0u;
    // 0x34f9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f9e4: 0xc0d70ce  jal         func_35C338
    ctx->pc = 0x34F9E4u;
    SET_GPR_U32(ctx, 31, 0x34F9ECu);
    ctx->pc = 0x34F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F9E4u;
    // 0x34f9e8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C338u, 0x34F9E4u, 0x34F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9ECu;
label_34f9ec:
    // 0x34f9ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34F9ECu;
    {
        const bool branch_taken_0x34f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9ECu;
        // 0x34f9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9ec) {
            ctx->pc = 0x34FA10u;
            goto label_34fa10;
        }
    }
    ctx->pc = 0x34F9F4u;
    // 0x34f9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f9f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f9fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x34f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34fa00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34fa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fa04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34fa04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa08: 0x80d6800  j           func_35A000
    ctx->pc = 0x34FA08u;
    ctx->pc = 0x34FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA08u;
    // 0x34fa0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x34FA08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34FA10u;
label_34fa10:
    // 0x34fa10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34fa10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34fa14:
    // 0x34fa14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34fa14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fa18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34fa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x34FA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA1Cu;
        // 0x34fa20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FA24u;
    // 0x34fa24: 0x0  nop
    ctx->pc = 0x34fa24u;
    // NOP
    ctx->pc = 0x34fa28u;
}
