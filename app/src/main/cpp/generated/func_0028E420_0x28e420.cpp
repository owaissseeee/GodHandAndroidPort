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

// Function: func_0028E420
// Address: 0x28e420 - 0x28e580
void func_0028E420_0x28e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028E420_0x28e420");
#endif

    switch (ctx->pc) {
        case 0x28e450u: goto label_28e450;
        case 0x28e494u: goto label_28e494;
        case 0x28e4a8u: goto label_28e4a8;
        case 0x28e4c8u: goto label_28e4c8;
        case 0x28e4d0u: goto label_28e4d0;
        case 0x28e4d8u: goto label_28e4d8;
        case 0x28e4e0u: goto label_28e4e0;
        case 0x28e4ecu: goto label_28e4ec;
        case 0x28e4f4u: goto label_28e4f4;
        case 0x28e500u: goto label_28e500;
        case 0x28e514u: goto label_28e514;
        case 0x28e53cu: goto label_28e53c;
        default: break;
    }

    ctx->pc = 0x28e420u;

    // 0x28e420: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x28e420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x28e424: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28e428: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x28e428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x28e42c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x28e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x28e430: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28e430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28e434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e43c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x28e43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x28e440: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x28E440u;
    {
        const bool branch_taken_0x28e440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E440u;
        // 0x28e444: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e440) {
            ctx->pc = 0x28E568u;
            goto label_28e568;
        }
    }
    ctx->pc = 0x28E448u;
    // 0x28e448: 0xc0a3960  jal         func_28E580
    ctx->pc = 0x28E448u;
    SET_GPR_U32(ctx, 31, 0x28E450u);
    ctx->pc = 0x28E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E580u, 0x28E448u, 0x28E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E450u;
label_28e450:
    // 0x28e450: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28e450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28e454: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E454u;
    {
        const bool branch_taken_0x28e454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E454u;
        // 0x28e458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e454) {
            ctx->pc = 0x28E46Cu;
            goto label_28e46c;
        }
    }
    ctx->pc = 0x28E45Cu;
    // 0x28e45c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28E45Cu;
    {
        const bool branch_taken_0x28e45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e45c) {
            ctx->pc = 0x28E4A0u;
            goto label_28e4a0;
        }
    }
    ctx->pc = 0x28E464u;
    // 0x28e464: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28E464u;
    {
        const bool branch_taken_0x28e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e464) {
            ctx->pc = 0x28E4D0u;
            goto label_28e4d0;
        }
    }
    ctx->pc = 0x28E46Cu;
label_28e46c:
    // 0x28e46c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28e470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e474: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e47c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x28e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e488: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e48c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28E48Cu;
    SET_GPR_U32(ctx, 31, 0x28E494u);
    ctx->pc = 0x28E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E48Cu;
    // 0x28e490: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28E48Cu, 0x28E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E494u;
label_28e494:
    // 0x28e494: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28e494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28e498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28e49c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28e49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_28e4a0:
    // 0x28e4a0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x28E4A0u;
    SET_GPR_U32(ctx, 31, 0x28E4A8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28E4A0u, 0x28E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4A8u;
label_28e4a8:
    // 0x28e4a8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x28e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4b0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x28e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x28e4b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28e4b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28e4b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28e4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e4bc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x28e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28e4c0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x28E4C0u;
    SET_GPR_U32(ctx, 31, 0x28E4C8u);
    ctx->pc = 0x28E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4C0u;
    // 0x28e4c4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x28E4C0u, 0x28E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4C8u;
label_28e4c8:
    // 0x28e4c8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28E4C8u;
    SET_GPR_U32(ctx, 31, 0x28E4D0u);
    ctx->pc = 0x28E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4C8u;
    // 0x28e4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28E4C8u, 0x28E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4D0u;
label_28e4d0:
    // 0x28e4d0: 0xc053ed2  jal         func_14FB48
    ctx->pc = 0x28E4D0u;
    SET_GPR_U32(ctx, 31, 0x28E4D8u);
    ctx->pc = 0x28E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4D0u;
    // 0x28e4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x28E4D0u, 0x28E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4D8u;
label_28e4d8:
    // 0x28e4d8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x28E4D8u;
    SET_GPR_U32(ctx, 31, 0x28E4E0u);
    ctx->pc = 0x28E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4D8u;
    // 0x28e4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x28E4D8u, 0x28E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4E0u;
label_28e4e0:
    // 0x28e4e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4e4: 0xc054a88  jal         func_152A20
    ctx->pc = 0x28E4E4u;
    SET_GPR_U32(ctx, 31, 0x28E4ECu);
    ctx->pc = 0x28E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4E4u;
    // 0x28e4e8: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x28E4E4u, 0x28E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4ECu;
label_28e4ec:
    // 0x28e4ec: 0xc05280e  jal         func_14A038
    ctx->pc = 0x28E4ECu;
    SET_GPR_U32(ctx, 31, 0x28E4F4u);
    ctx->pc = 0x28E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4ECu;
    // 0x28e4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x28E4ECu, 0x28E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4F4u;
label_28e4f4:
    // 0x28e4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4f8: 0xc0aa1fa  jal         func_2A87E8
    ctx->pc = 0x28E4F8u;
    SET_GPR_U32(ctx, 31, 0x28E500u);
    ctx->pc = 0x28E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4F8u;
    // 0x28e4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x28E4F8u, 0x28E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E500u;
label_28e500:
    // 0x28e500: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x28e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x28e504: 0x8e051550  lw          $a1, 0x1550($s0)
    ctx->pc = 0x28e504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5456)));
    // 0x28e508: 0x2451ee00  addiu       $s1, $v0, -0x1200
    ctx->pc = 0x28e508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x28e50c: 0xc0b2f3c  jal         func_2CBCF0
    ctx->pc = 0x28E50Cu;
    SET_GPR_U32(ctx, 31, 0x28E514u);
    ctx->pc = 0x28E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E50Cu;
    // 0x28e510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBCF0u, 0x28E50Cu, 0x28E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E514u;
label_28e514:
    // 0x28e514: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28E514u;
    {
        const bool branch_taken_0x28e514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E514u;
        // 0x28e518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e514) {
            ctx->pc = 0x28E540u;
            goto label_28e540;
        }
    }
    ctx->pc = 0x28E51Cu;
    // 0x28e51c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e520: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x28e520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x28e524: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28e524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e52c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e52cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e530: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28e530u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e534: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28E534u;
    SET_GPR_U32(ctx, 31, 0x28E53Cu);
    ctx->pc = 0x28E538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E534u;
    // 0x28e538: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28E534u, 0x28E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E53Cu;
label_28e53c:
    // 0x28e53c: 0xae021550  sw          $v0, 0x1550($s0)
    ctx->pc = 0x28e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5456), GPR_U32(ctx, 2));
label_28e540:
    // 0x28e540: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28e544: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x28e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x28e548: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E548u;
    {
        const bool branch_taken_0x28e548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e548) {
            ctx->pc = 0x28E54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E548u;
            // 0x28e54c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E56Cu;
            goto label_28e56c;
        }
    }
    ctx->pc = 0x28E550u;
    // 0x28e550: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e554: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x28e554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x28e558: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e55c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28e55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28e560: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28e560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e564: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28e564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28e568:
    // 0x28e568: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28e568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e56c:
    // 0x28e56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e574: 0x3e00008  jr          $ra
    ctx->pc = 0x28E574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E574u;
        // 0x28e578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E57Cu;
    // 0x28e57c: 0x0  nop
    ctx->pc = 0x28e57cu;
    // NOP
    ctx->pc = 0x28e580u;
}
