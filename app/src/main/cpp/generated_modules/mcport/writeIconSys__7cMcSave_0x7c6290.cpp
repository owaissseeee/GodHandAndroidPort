#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: writeIconSys__7cMcSave
// Address: 0x7c6290 - 0x7c6458
void writeIconSys__7cMcSave_0x7c6290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("writeIconSys__7cMcSave_0x7c6290");
#endif

    switch (ctx->pc) {
        case 0x7c62fcu: goto label_7c62fc;
        case 0x7c630cu: goto label_7c630c;
        case 0x7c6330u: goto label_7c6330;
        case 0x7c6344u: goto label_7c6344;
        case 0x7c636cu: goto label_7c636c;
        case 0x7c637cu: goto label_7c637c;
        case 0x7c63a0u: goto label_7c63a0;
        case 0x7c63b4u: goto label_7c63b4;
        case 0x7c63ccu: goto label_7c63cc;
        case 0x7c63dcu: goto label_7c63dc;
        case 0x7c63f8u: goto label_7c63f8;
        case 0x7c6410u: goto label_7c6410;
        case 0x7c6440u: goto label_7c6440;
        default: break;
    }

    ctx->pc = 0x7c6290u;

    // 0x7c6290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7c6290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7c6294: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7c6294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7c6298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7c6298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7c629c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c62a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7c62a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7c62a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c62a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c62a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c62a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c62ac: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x7c62acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x7c62b0: 0x1072001a  beq         $v1, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x7C62B0u;
    {
        const bool branch_taken_0x7c62b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C62B0u;
        // 0x7c62b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c62b0) {
            ctx->pc = 0x7C631Cu;
            goto label_7c631c;
        }
    }
    ctx->pc = 0x7C62B8u;
    // 0x7c62b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C62B8u;
    {
        const bool branch_taken_0x7c62b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C62B8u;
        // 0x7c62bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c62b8) {
            ctx->pc = 0x7C62D0u;
            goto label_7c62d0;
        }
    }
    ctx->pc = 0x7C62C0u;
    // 0x7c62c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C62C0u;
    {
        const bool branch_taken_0x7c62c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C62C0u;
        // 0x7c62c4: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c62c0) {
            ctx->pc = 0x7C62E8u;
            goto label_7c62e8;
        }
    }
    ctx->pc = 0x7C62C8u;
    // 0x7c62c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x7C62C8u;
    {
        const bool branch_taken_0x7c62c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C62C8u;
        // 0x7c62cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c62c8) {
            ctx->pc = 0x7C6438u;
            goto label_7c6438;
        }
    }
    ctx->pc = 0x7C62D0u;
label_7c62d0:
    // 0x7c62d0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7C62D0u;
    {
        const bool branch_taken_0x7c62d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C62D0u;
        // 0x7c62d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c62d0) {
            ctx->pc = 0x7C638Cu;
            goto label_7c638c;
        }
    }
    ctx->pc = 0x7C62D8u;
    // 0x7c62d8: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x7C62D8u;
    {
        const bool branch_taken_0x7c62d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C62DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C62D8u;
        // 0x7c62dc: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c62d8) {
            ctx->pc = 0x7C63ECu;
            goto label_7c63ec;
        }
    }
    ctx->pc = 0x7C62E0u;
    // 0x7c62e0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x7C62E0u;
    {
        const bool branch_taken_0x7c62e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C62E0u;
        // 0x7c62e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c62e0) {
            ctx->pc = 0x7C6438u;
            goto label_7c6438;
        }
    }
    ctx->pc = 0x7C62E8u;
label_7c62e8:
    // 0x7c62e8: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c62e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c62ec: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x7c62ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x7c62f0: 0x24a50bf0  addiu       $a1, $a1, 0xBF0
    ctx->pc = 0x7c62f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
    // 0x7c62f4: 0xc1f0cfc  jal         func_7C33F0
    ctx->pc = 0x7C62F4u;
    SET_GPR_U32(ctx, 31, 0x7C62FCu);
    ctx->pc = 0x7C62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C62F4u;
    // 0x7c62f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33F0u, 0x7C62F4u, 0x7C62FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C62FCu;
label_7c62fc:
    // 0x7c62fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c62fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6300: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c6300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c6304: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C6304u;
    SET_GPR_U32(ctx, 31, 0x7C630Cu);
    ctx->pc = 0x7C6308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6304u;
    // 0x7c6308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C6304u, 0x7C630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C630Cu;
label_7c630c:
    // 0x7c630c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x7C630Cu;
    {
        const bool branch_taken_0x7c630c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C630Cu;
        // 0x7c6310: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c630c) {
            ctx->pc = 0x7C6424u;
            goto label_7c6424;
        }
    }
    ctx->pc = 0x7C6314u;
    // 0x7c6314: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x7C6314u;
    {
        const bool branch_taken_0x7c6314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6314u;
        // 0x7c6318: 0xae1200f4  sw          $s2, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6314) {
            ctx->pc = 0x7C6434u;
            goto label_7c6434;
        }
    }
    ctx->pc = 0x7C631Cu;
label_7c631c:
    // 0x7c631c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c6320: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c6320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6324: 0x24511740  addiu       $s1, $v0, 0x1740
    ctx->pc = 0x7c6324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c6328: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C6328u;
    SET_GPR_U32(ctx, 31, 0x7C6330u);
    ctx->pc = 0x7C632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6328u;
    // 0x7c632c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C6328u, 0x7C6330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6330u;
label_7c6330:
    // 0x7c6330: 0x14520041  bne         $v0, $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x7C6330u;
    {
        const bool branch_taken_0x7c6330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6330u;
        // 0x7c6334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6330) {
            ctx->pc = 0x7C6438u;
            goto label_7c6438;
        }
    }
    ctx->pc = 0x7C6338u;
    // 0x7c6338: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c6338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c633c: 0xc1f1bd8  jal         func_7C6F60
    ctx->pc = 0x7C633Cu;
    SET_GPR_U32(ctx, 31, 0x7C6344u);
    ctx->pc = 0x7C6340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C633Cu;
    // 0x7c6340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6F60u, 0x7C633Cu, 0x7C6344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6344u;
label_7c6344:
    // 0x7c6344: 0x14520037  bne         $v0, $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x7C6344u;
    {
        const bool branch_taken_0x7c6344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6344u;
        // 0x7c6348: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6344) {
            ctx->pc = 0x7C6424u;
            goto label_7c6424;
        }
    }
    ctx->pc = 0x7C634Cu;
    // 0x7c634c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c6350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c6350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6354: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x7c6354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x7c6358: 0x240703c4  addiu       $a3, $zero, 0x3C4
    ctx->pc = 0x7c6358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x7c635c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c635cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6360: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x7c6360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x7c6364: 0xc1f0dc6  jal         func_7C3718
    ctx->pc = 0x7C6364u;
    SET_GPR_U32(ctx, 31, 0x7C636Cu);
    ctx->pc = 0x7C6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6364u;
    // 0x7c6368: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3718u, 0x7C6364u, 0x7C636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C636Cu;
label_7c636c:
    // 0x7c636c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6370: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c6370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6374: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C6374u;
    SET_GPR_U32(ctx, 31, 0x7C637Cu);
    ctx->pc = 0x7C6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6374u;
    // 0x7c6378: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C6374u, 0x7C637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C637Cu;
label_7c637c:
    // 0x7c637c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x7C637Cu;
    {
        const bool branch_taken_0x7c637c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C637Cu;
        // 0x7c6380: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c637c) {
            ctx->pc = 0x7C6420u;
            goto label_7c6420;
        }
    }
    ctx->pc = 0x7C6384u;
    // 0x7c6384: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x7C6384u;
    {
        const bool branch_taken_0x7c6384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6384u;
        // 0x7c6388: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6384) {
            ctx->pc = 0x7C6434u;
            goto label_7c6434;
        }
    }
    ctx->pc = 0x7C638Cu;
label_7c638c:
    // 0x7c638c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c6390: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c6390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6394: 0x24511740  addiu       $s1, $v0, 0x1740
    ctx->pc = 0x7c6394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c6398: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C6398u;
    SET_GPR_U32(ctx, 31, 0x7C63A0u);
    ctx->pc = 0x7C639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6398u;
    // 0x7c639c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C6398u, 0x7C63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C63A0u;
label_7c63a0:
    // 0x7c63a0: 0x14520025  bne         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x7C63A0u;
    {
        const bool branch_taken_0x7c63a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C63A0u;
        // 0x7c63a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c63a0) {
            ctx->pc = 0x7C6438u;
            goto label_7c6438;
        }
    }
    ctx->pc = 0x7C63A8u;
    // 0x7c63a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c63ac: 0xc1f1c4a  jal         func_7C7128
    ctx->pc = 0x7C63ACu;
    SET_GPR_U32(ctx, 31, 0x7C63B4u);
    ctx->pc = 0x7C63B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C63ACu;
    // 0x7c63b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7128u, 0x7C63ACu, 0x7C63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C63B4u;
label_7c63b4:
    // 0x7c63b4: 0x1452001b  bne         $v0, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x7C63B4u;
    {
        const bool branch_taken_0x7c63b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C63B4u;
        // 0x7c63b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c63b4) {
            ctx->pc = 0x7C6424u;
            goto label_7c6424;
        }
    }
    ctx->pc = 0x7C63BCu;
    // 0x7c63bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7c63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7c63c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c63c4: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C63C4u;
    SET_GPR_U32(ctx, 31, 0x7C63CCu);
    ctx->pc = 0x7C63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C63C4u;
    // 0x7c63c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C63C4u, 0x7C63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C63CCu;
label_7c63cc:
    // 0x7c63cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c63ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c63d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c63d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c63d4: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C63D4u;
    SET_GPR_U32(ctx, 31, 0x7C63DCu);
    ctx->pc = 0x7C63D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C63D4u;
    // 0x7c63d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C63D4u, 0x7C63DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C63DCu;
label_7c63dc:
    // 0x7c63dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C63DCu;
    {
        const bool branch_taken_0x7c63dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C63DCu;
        // 0x7c63e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c63dc) {
            ctx->pc = 0x7C6420u;
            goto label_7c6420;
        }
    }
    ctx->pc = 0x7C63E4u;
    // 0x7c63e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x7C63E4u;
    {
        const bool branch_taken_0x7c63e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C63E4u;
        // 0x7c63e8: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c63e4) {
            ctx->pc = 0x7C6434u;
            goto label_7c6434;
        }
    }
    ctx->pc = 0x7C63ECu;
label_7c63ec:
    // 0x7c63ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c63ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c63f0: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C63F0u;
    SET_GPR_U32(ctx, 31, 0x7C63F8u);
    ctx->pc = 0x7C63F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C63F0u;
    // 0x7c63f4: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C63F0u, 0x7C63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C63F8u;
label_7c63f8:
    // 0x7c63f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c63f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c63fc: 0x1632000e  bne         $s1, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x7C63FCu;
    {
        const bool branch_taken_0x7c63fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C63FCu;
        // 0x7c6400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c63fc) {
            ctx->pc = 0x7C6438u;
            goto label_7c6438;
        }
    }
    ctx->pc = 0x7C6404u;
    // 0x7c6404: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c6404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c6408: 0xc1f1c02  jal         func_7C7008
    ctx->pc = 0x7C6408u;
    SET_GPR_U32(ctx, 31, 0x7C6410u);
    ctx->pc = 0x7C640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6408u;
    // 0x7c640c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7008u, 0x7C6408u, 0x7C6410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6410u;
label_7c6410:
    // 0x7c6410: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C6410u;
    {
        const bool branch_taken_0x7c6410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x7C6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6410u;
        // 0x7c6414: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6410) {
            ctx->pc = 0x7C6424u;
            goto label_7c6424;
        }
    }
    ctx->pc = 0x7C6418u;
    // 0x7c6418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C6418u;
    {
        const bool branch_taken_0x7c6418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6418u;
        // 0x7c641c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6418) {
            ctx->pc = 0x7C6424u;
            goto label_7c6424;
        }
    }
    ctx->pc = 0x7C6420u;
label_7c6420:
    // 0x7c6420: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c6420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c6424:
    // 0x7c6424: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c6424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c6428: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x7c6428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x7c642c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C642Cu;
    {
        const bool branch_taken_0x7c642c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C642Cu;
        // 0x7c6430: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c642c) {
            ctx->pc = 0x7C6440u;
            goto label_7c6440;
        }
    }
    ctx->pc = 0x7C6434u;
label_7c6434:
    // 0x7c6434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c6434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c6438:
    // 0x7c6438: 0xc1f1ec8  jal         func_7C7B20
    ctx->pc = 0x7C6438u;
    SET_GPR_U32(ctx, 31, 0x7C6440u);
    ctx->pc = 0x7C643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6438u;
    // 0x7c643c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7B20u, 0x7C6438u, 0x7C6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6440u;
label_7c6440:
    // 0x7c6440: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7c6440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c6444: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7c6444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c6448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7c6448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c644c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c644cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c6450: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6450u;
        // 0x7c6454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6458u;
}
} // namespace gh_mcport
