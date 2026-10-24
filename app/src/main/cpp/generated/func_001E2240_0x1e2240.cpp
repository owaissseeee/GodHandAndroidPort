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

// Function: func_001E2240
// Address: 0x1e2240 - 0x1e24a0
void func_001E2240_0x1e2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E2240_0x1e2240");
#endif

    switch (ctx->pc) {
        case 0x1e22bcu: goto label_1e22bc;
        case 0x1e22d0u: goto label_1e22d0;
        case 0x1e22e0u: goto label_1e22e0;
        case 0x1e22f8u: goto label_1e22f8;
        case 0x1e235cu: goto label_1e235c;
        case 0x1e2378u: goto label_1e2378;
        case 0x1e2380u: goto label_1e2380;
        case 0x1e23a8u: goto label_1e23a8;
        case 0x1e23b8u: goto label_1e23b8;
        case 0x1e23f8u: goto label_1e23f8;
        case 0x1e246cu: goto label_1e246c;
        default: break;
    }

    ctx->pc = 0x1e2240u;

    // 0x1e2240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e2248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e224c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e224cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2254: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2258: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1e2258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e225c: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1E225Cu;
    {
        const bool branch_taken_0x1e225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E225Cu;
        // 0x1e2260: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e225c) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E2264u;
    // 0x1e2264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e2268: 0x2442b7d0  addiu       $v0, $v0, -0x4830
    ctx->pc = 0x1e2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948816));
    // 0x1e226c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2270: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2274: 0x800008  jr          $a0
    ctx->pc = 0x1E2274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E227Cu: goto label_1e227c;
            case 0x1E229Cu: goto label_1e229c;
            case 0x1E2300u: goto label_1e2300;
            case 0x1E23C0u: goto label_1e23c0;
            case 0x1E23ECu: goto label_1e23ec;
            case 0x1E2440u: goto label_1e2440;
            case 0x1E247Cu: goto label_1e247c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2274u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E227Cu;
label_1e227c:
    // 0x1e227c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2280: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1e2280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e2284: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x1e2284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1e2288: 0xae230490  sw          $v1, 0x490($s1)
    ctx->pc = 0x1e2288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 3));
    // 0x1e228c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2290: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1e2290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1e2294: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1E2294u;
    {
        const bool branch_taken_0x1e2294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2294u;
        // 0x1e2298: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2294) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E229Cu;
label_1e229c:
    // 0x1e229c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1e22a0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e22a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e22a4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e22a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1e22a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e22ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e22acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e22b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e22b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22b4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1E22B4u;
    SET_GPR_U32(ctx, 31, 0x1E22BCu);
    ctx->pc = 0x1E22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22B4u;
    // 0x1e22b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1E22B4u, 0x1E22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22BCu;
label_1e22bc:
    // 0x1e22bc: 0x96250494  lhu         $a1, 0x494($s1)
    ctx->pc = 0x1e22bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1e22c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e22c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e22c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e22c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22c8: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E22C8u;
    SET_GPR_U32(ctx, 31, 0x1E22D0u);
    ctx->pc = 0x1E22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22C8u;
    // 0x1e22cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E22C8u, 0x1E22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22D0u;
label_1e22d0:
    // 0x1e22d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e22d8: 0xc078f02  jal         func_1E3C08
    ctx->pc = 0x1E22D8u;
    SET_GPR_U32(ctx, 31, 0x1E22E0u);
    ctx->pc = 0x1E22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22D8u;
    // 0x1e22dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3C08u, 0x1E22D8u, 0x1E22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22E0u;
label_1e22e0:
    // 0x1e22e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e22e4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1e22e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e22e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e22e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e22ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e22ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22f0: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1E22F0u;
    SET_GPR_U32(ctx, 31, 0x1E22F8u);
    ctx->pc = 0x1E22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22F0u;
    // 0x1e22f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1E22F0u, 0x1E22F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22F8u;
label_1e22f8:
    // 0x1e22f8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1E22F8u;
    {
        const bool branch_taken_0x1e22f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22F8u;
        // 0x1e22fc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22f8) {
            ctx->pc = 0x1E2470u;
            goto label_1e2470;
        }
    }
    ctx->pc = 0x1E2300u;
label_1e2300:
    // 0x1e2300: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e2304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2304u;
    {
        const bool branch_taken_0x1e2304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2304u;
        // 0x1e2308: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2304) {
            ctx->pc = 0x1E2318u;
            goto label_1e2318;
        }
    }
    ctx->pc = 0x1E230Cu;
    // 0x1e230c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e230cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2310u;
    {
        const bool branch_taken_0x1e2310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2310u;
        // 0x1e2314: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2310) {
            ctx->pc = 0x1E231Cu;
            goto label_1e231c;
        }
    }
    ctx->pc = 0x1E2318u;
label_1e2318:
    // 0x1e2318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e231c:
    // 0x1e231c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2320: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E2320u;
    {
        const bool branch_taken_0x1e2320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2320u;
        // 0x1e2324: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2320) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E2328u;
    // 0x1e2328: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1e2328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1e232c: 0x8c459b70  lw          $a1, -0x6490($v0)
    ctx->pc = 0x1e232cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x1e2330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2334: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1e2334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1e2338: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1e2338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e233c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E233Cu;
    {
        const bool branch_taken_0x1e233c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e233c) {
            ctx->pc = 0x1E2340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E233Cu;
            // 0x1e2340: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2364u;
            goto label_1e2364;
        }
    }
    ctx->pc = 0x1E2344u;
    // 0x1e2344: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1e2344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e2348: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e234c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x1e234cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x1e2350: 0x262404d0  addiu       $a0, $s1, 0x4D0
    ctx->pc = 0x1e2350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
    // 0x1e2354: 0xc079e42  jal         func_1E7908
    ctx->pc = 0x1E2354u;
    SET_GPR_U32(ctx, 31, 0x1E235Cu);
    ctx->pc = 0x1E2358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2354u;
    // 0x1e2358: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7908u, 0x1E2354u, 0x1E235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E235Cu;
label_1e235c:
    // 0x1e235c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2364:
    // 0x1e2364: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1e2364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1e2368: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1e2368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e236c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e236cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2370: 0xc07f0fa  jal         func_1FC3E8
    ctx->pc = 0x1E2370u;
    SET_GPR_U32(ctx, 31, 0x1E2378u);
    ctx->pc = 0x1E2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2370u;
    // 0x1e2374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3E8u, 0x1E2370u, 0x1E2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2378u;
label_1e2378:
    // 0x1e2378: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x1E2378u;
    SET_GPR_U32(ctx, 31, 0x1E2380u);
    ctx->pc = 0x1E237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2378u;
    // 0x1e237c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x1E2378u, 0x1E2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2380u;
label_1e2380:
    // 0x1e2380: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e2380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1e2384: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1e2384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e2388: 0x8c65d6e8  lw          $a1, -0x2918($v1)
    ctx->pc = 0x1e2388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x1e238c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1e238cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1e2390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2398: 0xaca21a10  sw          $v0, 0x1A10($a1)
    ctx->pc = 0x1e2398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6672), GPR_U32(ctx, 2));
    // 0x1e239c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e239cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e23a0: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E23A0u;
    SET_GPR_U32(ctx, 31, 0x1E23A8u);
    ctx->pc = 0x1E23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E23A0u;
    // 0x1e23a4: 0x96250494  lhu         $a1, 0x494($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E23A0u, 0x1E23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23A8u;
label_1e23a8:
    // 0x1e23a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e23a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e23ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e23acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e23b0: 0xc078f02  jal         func_1E3C08
    ctx->pc = 0x1E23B0u;
    SET_GPR_U32(ctx, 31, 0x1E23B8u);
    ctx->pc = 0x1E23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E23B0u;
    // 0x1e23b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3C08u, 0x1E23B0u, 0x1E23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23B8u;
label_1e23b8:
    // 0x1e23b8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1E23B8u;
    {
        const bool branch_taken_0x1e23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B8u;
        // 0x1e23bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23b8) {
            ctx->pc = 0x1E248Cu;
            goto label_1e248c;
        }
    }
    ctx->pc = 0x1E23C0u;
label_1e23c0:
    // 0x1e23c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e23c4: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e23c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e23c8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e23c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e23cc: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1e23ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x1e23d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e23d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e23d4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E23D4u;
    {
        const bool branch_taken_0x1e23d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23D4u;
        // 0x1e23d8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23d4) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E23DCu;
    // 0x1e23dc: 0x262404d0  addiu       $a0, $s1, 0x4D0
    ctx->pc = 0x1e23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
    // 0x1e23e0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1e23e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1E23E4u;
    {
        const bool branch_taken_0x1e23e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23E4u;
        // 0x1e23e8: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23e4) {
            ctx->pc = 0x1E2460u;
            goto label_1e2460;
        }
    }
    ctx->pc = 0x1E23ECu;
label_1e23ec:
    // 0x1e23ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1e23f0: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x1E23F0u;
    SET_GPR_U32(ctx, 31, 0x1E23F8u);
    ctx->pc = 0x1E23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E23F0u;
    // 0x1e23f4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x1E23F0u, 0x1E23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23F8u;
label_1e23f8:
    // 0x1e23f8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1e23f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e23fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E23FCu;
    {
        const bool branch_taken_0x1e23fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23FCu;
        // 0x1e2400: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23fc) {
            ctx->pc = 0x1E2438u;
            goto label_1e2438;
        }
    }
    ctx->pc = 0x1E2404u;
    // 0x1e2404: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e2404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e2408: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2408u;
    {
        const bool branch_taken_0x1e2408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2408u;
        // 0x1e240c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2408) {
            ctx->pc = 0x1E241Cu;
            goto label_1e241c;
        }
    }
    ctx->pc = 0x1E2410u;
    // 0x1e2410: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e2410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2414u;
    {
        const bool branch_taken_0x1e2414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2414u;
        // 0x1e2418: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2414) {
            ctx->pc = 0x1E2420u;
            goto label_1e2420;
        }
    }
    ctx->pc = 0x1E241Cu;
label_1e241c:
    // 0x1e241c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2420:
    // 0x1e2420: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e2420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2424: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2424u;
    {
        const bool branch_taken_0x1e2424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2424u;
        // 0x1e2428: 0x262404d0  addiu       $a0, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2424) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E242Cu;
    // 0x1e242c: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x1e2430: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E2430u;
    {
        const bool branch_taken_0x1e2430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2430u;
        // 0x1e2434: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2430) {
            ctx->pc = 0x1E2464u;
            goto label_1e2464;
        }
    }
    ctx->pc = 0x1E2438u;
label_1e2438:
    // 0x1e2438: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E2438u;
    {
        const bool branch_taken_0x1e2438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2438u;
        // 0x1e243c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2438) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E2440u;
label_1e2440:
    // 0x1e2440: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e2440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e2444: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e2444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e2448: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e2448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e244c: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1e244cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x1e2450: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e2454: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E2454u;
    {
        const bool branch_taken_0x1e2454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2454u;
        // 0x1e2458: 0x262404d0  addiu       $a0, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2454) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E245Cu;
    // 0x1e245c: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x1e245cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
label_1e2460:
    // 0x1e2460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2464:
    // 0x1e2464: 0xc079e42  jal         func_1E7908
    ctx->pc = 0x1E2464u;
    SET_GPR_U32(ctx, 31, 0x1E246Cu);
    ctx->pc = 0x1E7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7908u, 0x1E2464u, 0x1E246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E246Cu;
label_1e246c:
    // 0x1e246c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e2470:
    // 0x1e2470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2474u;
    {
        const bool branch_taken_0x1e2474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2474u;
        // 0x1e2478: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2474) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E247Cu;
label_1e247c:
    // 0x1e247c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e247cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e2480: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e2480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e2484: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e2484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e2488:
    // 0x1e2488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e2488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e248c:
    // 0x1e248c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e248cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2494: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2494u;
        // 0x1e2498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E249Cu;
    // 0x1e249c: 0x0  nop
    ctx->pc = 0x1e249cu;
    // NOP
    ctx->pc = 0x1e24a0u;
}
