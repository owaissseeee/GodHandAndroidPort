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

// Function: func_003808A0
// Address: 0x3808a0 - 0x380ae8
void func_003808A0_0x3808a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003808A0_0x3808a0");
#endif

    switch (ctx->pc) {
        case 0x380904u: goto label_380904;
        case 0x380960u: goto label_380960;
        case 0x38096cu: goto label_38096c;
        case 0x380980u: goto label_380980;
        case 0x3809a4u: goto label_3809a4;
        case 0x3809c0u: goto label_3809c0;
        case 0x3809d8u: goto label_3809d8;
        case 0x3809e8u: goto label_3809e8;
        case 0x3809f4u: goto label_3809f4;
        case 0x380a18u: goto label_380a18;
        case 0x380a40u: goto label_380a40;
        case 0x380a48u: goto label_380a48;
        case 0x380a54u: goto label_380a54;
        case 0x380a60u: goto label_380a60;
        case 0x380a78u: goto label_380a78;
        case 0x380a88u: goto label_380a88;
        case 0x380a98u: goto label_380a98;
        case 0x380aa4u: goto label_380aa4;
        case 0x380ac8u: goto label_380ac8;
        default: break;
    }

    ctx->pc = 0x3808a0u;

    // 0x3808a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3808a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3808a4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x3808a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3808a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3808a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3808ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3808acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3808b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3808b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3808b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3808b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3808b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3808b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3808bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3808bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3808c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3808c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3808c4: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x3808c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3808c8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3808c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3808cc: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x3808ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x3808d0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x3808d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3808d4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3808d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3808d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3808D8u;
    {
        const bool branch_taken_0x3808d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3808DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808D8u;
        // 0x3808dc: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3808d8) {
            ctx->pc = 0x3808F8u;
            goto label_3808f8;
        }
    }
    ctx->pc = 0x3808E0u;
    // 0x3808e0: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x3808e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3808e4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3808e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3808e8: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x3808E8u;
    {
        const bool branch_taken_0x3808e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3808e8) {
            ctx->pc = 0x3808ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3808E8u;
            // 0x3808ec: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380A9Cu;
            goto label_380a9c;
        }
    }
    ctx->pc = 0x3808F0u;
    // 0x3808f0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3808F0u;
    {
        const bool branch_taken_0x3808f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3808f0) {
            ctx->pc = 0x380A9Cu;
            goto label_380a9c;
        }
    }
    ctx->pc = 0x3808F8u;
label_3808f8:
    // 0x3808f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3808f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3808fc: 0xc0e035a  jal         func_380D68
    ctx->pc = 0x3808FCu;
    SET_GPR_U32(ctx, 31, 0x380904u);
    ctx->pc = 0x380900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3808FCu;
    // 0x380900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380D68u, 0x3808FCu, 0x380904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380904u;
label_380904:
    // 0x380904: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x380904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x380908: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x380908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x38090c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38090Cu;
    {
        const bool branch_taken_0x38090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38090Cu;
        // 0x380910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38090c) {
            ctx->pc = 0x380920u;
            goto label_380920;
        }
    }
    ctx->pc = 0x380914u;
    // 0x380914: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x380914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380918: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x380918u;
    {
        const bool branch_taken_0x380918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380918u;
        // 0x38091c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380918) {
            ctx->pc = 0x380ACCu;
            goto label_380acc;
        }
    }
    ctx->pc = 0x380920u;
label_380920:
    // 0x380920: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x380920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x380924: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x380924u;
    {
        const bool branch_taken_0x380924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380924) {
            ctx->pc = 0x380928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380924u;
            // 0x380928: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38093Cu;
            goto label_38093c;
        }
    }
    ctx->pc = 0x38092Cu;
    // 0x38092c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x38092cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x380930: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x380930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x380934: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x380934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x380938: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x380938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_38093c:
    // 0x38093c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x38093cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x380940: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x380940u;
    {
        const bool branch_taken_0x380940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380940u;
        // 0x380944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380940) {
            ctx->pc = 0x380974u;
            goto label_380974;
        }
    }
    ctx->pc = 0x380948u;
    // 0x380948: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x380948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x38094c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x38094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x380950: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380950u;
    {
        const bool branch_taken_0x380950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380950) {
            ctx->pc = 0x380964u;
            goto label_380964;
        }
    }
    ctx->pc = 0x380958u;
    // 0x380958: 0xc0e0370  jal         func_380DC0
    ctx->pc = 0x380958u;
    SET_GPR_U32(ctx, 31, 0x380960u);
    ctx->pc = 0x38095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380958u;
    // 0x38095c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380DC0u, 0x380958u, 0x380960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380960u;
label_380960:
    // 0x380960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_380964:
    // 0x380964: 0xc0e02dc  jal         func_380B70
    ctx->pc = 0x380964u;
    SET_GPR_U32(ctx, 31, 0x38096Cu);
    ctx->pc = 0x380968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380964u;
    // 0x380968: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380B70u, 0x380964u, 0x38096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38096Cu;
label_38096c:
    // 0x38096c: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x38096Cu;
    {
        const bool branch_taken_0x38096c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38096Cu;
        // 0x380970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38096c) {
            ctx->pc = 0x380A9Cu;
            goto label_380a9c;
        }
    }
    ctx->pc = 0x380974u;
label_380974:
    // 0x380974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x380974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380978: 0xc0e03e0  jal         func_380F80
    ctx->pc = 0x380978u;
    SET_GPR_U32(ctx, 31, 0x380980u);
    ctx->pc = 0x38097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380978u;
    // 0x38097c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F80u, 0x380978u, 0x380980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380980u;
label_380980:
    // 0x380980: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x380980u;
    {
        const bool branch_taken_0x380980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380980) {
            ctx->pc = 0x380984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380980u;
            // 0x380984: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380988u;
            goto label_380988;
        }
    }
    ctx->pc = 0x380988u;
label_380988:
    // 0x380988: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x380988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x38098c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x38098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x380990: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380990u;
    {
        const bool branch_taken_0x380990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380990u;
        // 0x380994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380990) {
            ctx->pc = 0x3809A4u;
            goto label_3809a4;
        }
    }
    ctx->pc = 0x380998u;
    // 0x380998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x380998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38099c: 0xc0e03c4  jal         func_380F10
    ctx->pc = 0x38099Cu;
    SET_GPR_U32(ctx, 31, 0x3809A4u);
    ctx->pc = 0x3809A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38099Cu;
    // 0x3809a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F10u, 0x38099Cu, 0x3809A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809A4u;
label_3809a4:
    // 0x3809a4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x3809a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3809a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3809a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3809ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3809ACu;
    {
        const bool branch_taken_0x3809ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3809B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3809ACu;
        // 0x3809b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3809ac) {
            ctx->pc = 0x3809C0u;
            goto label_3809c0;
        }
    }
    ctx->pc = 0x3809B4u;
    // 0x3809b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3809b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3809b8: 0xc0e03a2  jal         func_380E88
    ctx->pc = 0x3809B8u;
    SET_GPR_U32(ctx, 31, 0x3809C0u);
    ctx->pc = 0x3809BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3809B8u;
    // 0x3809bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E88u, 0x3809B8u, 0x3809C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809C0u;
label_3809c0:
    // 0x3809c0: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x3809c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3809c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3809c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3809c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3809C8u;
    {
        const bool branch_taken_0x3809c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3809CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3809C8u;
        // 0x3809cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3809c8) {
            ctx->pc = 0x3809DCu;
            goto label_3809dc;
        }
    }
    ctx->pc = 0x3809D0u;
    // 0x3809d0: 0xc0e0384  jal         func_380E10
    ctx->pc = 0x3809D0u;
    SET_GPR_U32(ctx, 31, 0x3809D8u);
    ctx->pc = 0x3809D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3809D0u;
    // 0x3809d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E10u, 0x3809D0u, 0x3809D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809D8u;
label_3809d8:
    // 0x3809d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3809d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3809dc:
    // 0x3809dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3809dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3809e0: 0xc0e0404  jal         func_381010
    ctx->pc = 0x3809E0u;
    SET_GPR_U32(ctx, 31, 0x3809E8u);
    ctx->pc = 0x3809E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3809E0u;
    // 0x3809e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381010u, 0x3809E0u, 0x3809E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809E8u;
label_3809e8:
    // 0x3809e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3809e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3809ec: 0xc0e041c  jal         func_381070
    ctx->pc = 0x3809ECu;
    SET_GPR_U32(ctx, 31, 0x3809F4u);
    ctx->pc = 0x3809F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3809ECu;
    // 0x3809f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381070u, 0x3809ECu, 0x3809F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809F4u;
label_3809f4:
    // 0x3809f4: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x3809f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3809f8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x3809f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3809fc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3809fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380a00: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x380a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x380a04: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x380a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x380a08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x380A08u;
    {
        const bool branch_taken_0x380a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A08u;
        // 0x380a0c: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a08) {
            ctx->pc = 0x380A20u;
            goto label_380a20;
        }
    }
    ctx->pc = 0x380A10u;
    // 0x380a10: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x380A10u;
    SET_GPR_U32(ctx, 31, 0x380A18u);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x380A10u, 0x380A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A18u;
label_380a18:
    // 0x380a18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380A18u;
    {
        const bool branch_taken_0x380a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A18u;
        // 0x380a1c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a18) {
            ctx->pc = 0x380A28u;
            goto label_380a28;
        }
    }
    ctx->pc = 0x380A20u;
label_380a20:
    // 0x380a20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x380a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x380a24: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x380a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_380a28:
    // 0x380a28: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x380a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x380a2c: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x380A2Cu;
    {
        const bool branch_taken_0x380a2c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x380A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A2Cu;
        // 0x380a30: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a2c) {
            ctx->pc = 0x380A9Cu;
            goto label_380a9c;
        }
    }
    ctx->pc = 0x380A34u;
    // 0x380a34: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380a38: 0xc0ca858  jal         func_32A160
    ctx->pc = 0x380A38u;
    SET_GPR_U32(ctx, 31, 0x380A40u);
    ctx->pc = 0x380A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A38u;
    // 0x380a3c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A160u, 0x380A38u, 0x380A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A40u;
label_380a40:
    // 0x380a40: 0xc0cadb8  jal         func_32B6E0
    ctx->pc = 0x380A40u;
    SET_GPR_U32(ctx, 31, 0x380A48u);
    ctx->pc = 0x380A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A40u;
    // 0x380a44: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B6E0u, 0x380A40u, 0x380A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A48u;
label_380a48:
    // 0x380a48: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380a4c: 0xc0cab84  jal         func_32AE10
    ctx->pc = 0x380A4Cu;
    SET_GPR_U32(ctx, 31, 0x380A54u);
    ctx->pc = 0x380A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A4Cu;
    // 0x380a50: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AE10u, 0x380A4Cu, 0x380A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A54u;
label_380a54:
    // 0x380a54: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380a58: 0xc0cb430  jal         func_32D0C0
    ctx->pc = 0x380A58u;
    SET_GPR_U32(ctx, 31, 0x380A60u);
    ctx->pc = 0x380A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A58u;
    // 0x380a5c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0C0u, 0x380A58u, 0x380A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A60u;
label_380a60:
    // 0x380a60: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x380a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x380a64: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x380a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x380a68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x380A68u;
    {
        const bool branch_taken_0x380a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380a68) {
            ctx->pc = 0x380A9Cu;
            goto label_380a9c;
        }
    }
    ctx->pc = 0x380A70u;
    // 0x380a70: 0xc0cab44  jal         func_32AD10
    ctx->pc = 0x380A70u;
    SET_GPR_U32(ctx, 31, 0x380A78u);
    ctx->pc = 0x380A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A70u;
    // 0x380a74: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AD10u, 0x380A70u, 0x380A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A78u;
label_380a78:
    // 0x380a78: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380a80: 0xc0c9858  jal         func_326160
    ctx->pc = 0x380A80u;
    SET_GPR_U32(ctx, 31, 0x380A88u);
    ctx->pc = 0x380A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A80u;
    // 0x380a84: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326160u, 0x380A80u, 0x380A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A88u;
label_380a88:
    // 0x380a88: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380a90: 0xc0c986a  jal         func_3261A8
    ctx->pc = 0x380A90u;
    SET_GPR_U32(ctx, 31, 0x380A98u);
    ctx->pc = 0x380A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A90u;
    // 0x380a94: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3261A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3261A8u, 0x380A90u, 0x380A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A98u;
label_380a98:
    // 0x380a98: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x380a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_380a9c:
    // 0x380a9c: 0xc0e051e  jal         func_381478
    ctx->pc = 0x380A9Cu;
    SET_GPR_U32(ctx, 31, 0x380AA4u);
    ctx->pc = 0x380AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A9Cu;
    // 0x380aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381478u, 0x380A9Cu, 0x380AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380AA4u;
label_380aa4:
    // 0x380aa4: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x380aa4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x380aa8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x380aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x380aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ab0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x380ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x380ab4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x380ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x380ab8: 0x34e76060  ori         $a3, $a3, 0x6060
    ctx->pc = 0x380ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24672);
    // 0x380abc: 0x24c60078  addiu       $a2, $a2, 0x78
    ctx->pc = 0x380abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
    // 0x380ac0: 0xc0e019e  jal         func_380678
    ctx->pc = 0x380AC0u;
    SET_GPR_U32(ctx, 31, 0x380AC8u);
    ctx->pc = 0x380AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380AC0u;
    // 0x380ac4: 0x3408fff8  ori         $t0, $zero, 0xFFF8 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    ctx->in_delay_slot = false;
    ctx->pc = 0x380678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380678u, 0x380AC0u, 0x380AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380AC8u;
label_380ac8:
    // 0x380ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x380ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_380acc:
    // 0x380acc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x380accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x380ad0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x380ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x380ad4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x380ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380ad8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x380ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x380adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x380AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380AE0u;
        // 0x380ae4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380AE8u;
}
