#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: StateWait__9EnemyShipRQ29EnemyShip4Ship
// Address: 0x79f8c0 - 0x79fa80
void StateWait__9EnemyShipRQ29EnemyShip4Ship_0x79f8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StateWait__9EnemyShipRQ29EnemyShip4Ship_0x79f8c0");
#endif

    switch (ctx->pc) {
        case 0x79f914u: goto label_79f914;
        case 0x79f954u: goto label_79f954;
        case 0x79f984u: goto label_79f984;
        case 0x79f9b8u: goto label_79f9b8;
        case 0x79f9e4u: goto label_79f9e4;
        default: break;
    }

    ctx->pc = 0x79f8c0u;

    // 0x79f8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79f8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79f8c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79f8c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79f8cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79f8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79f8d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79f8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79f8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79f8d8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x79f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x79f8dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79f8e0: 0x1c400061  bgtz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x79F8E0u;
    {
        const bool branch_taken_0x79f8e0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F8E0u;
        // 0x79f8e4: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f8e0) {
            ctx->pc = 0x79FA68u;
            goto label_79fa68;
        }
    }
    ctx->pc = 0x79F8E8u;
    // 0x79f8e8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x79f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x79f8ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79f8f0: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x79f8f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79f8f4: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x79F8F4u;
    {
        const bool branch_taken_0x79f8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F8F4u;
        // 0x79f8f8: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f8f4) {
            ctx->pc = 0x79FA58u;
            goto label_79fa58;
        }
    }
    ctx->pc = 0x79F8FCu;
    // 0x79f8fc: 0x3c01c20c  lui         $at, 0xC20C
    ctx->pc = 0x79f8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49676 << 16));
    // 0x79f900: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79f900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79f904: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x79f904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x79f908: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79f908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79f90c: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79F90Cu;
    SET_GPR_U32(ctx, 31, 0x79F914u);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79F90Cu, 0x79F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F914u;
label_79f914:
    // 0x79f914: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x79f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x79f918: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x79f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x79f91c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x79f91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x79f920: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79f920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79f924: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x79f924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x79f928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79f928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79f92c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79F92Cu;
    {
        const bool branch_taken_0x79f92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F92Cu;
        // 0x79f930: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f92c) {
            ctx->pc = 0x79F93Cu;
            goto label_79f93c;
        }
    }
    ctx->pc = 0x79F934u;
    // 0x79f934: 0x3c01c188  lui         $at, 0xC188
    ctx->pc = 0x79f934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49544 << 16));
    // 0x79f938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79f938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79f93c:
    // 0x79f93c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79f940: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x79f940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x79f944: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x79f944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79f948: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79f948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79f94c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79F94Cu;
    SET_GPR_U32(ctx, 31, 0x79F954u);
    ctx->pc = 0x79F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F94Cu;
    // 0x79f950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79F94Cu, 0x79F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F954u;
label_79f954:
    // 0x79f954: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x79f954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79f958: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79F958u;
    {
        const bool branch_taken_0x79f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79f958) {
            ctx->pc = 0x79F97Cu;
            goto label_79f97c;
        }
    }
    ctx->pc = 0x79F960u;
    // 0x79f960: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x79f960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
    // 0x79f964: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x79f964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x79f968: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79f968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79f96c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x79f96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x79f970: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79f970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79f974: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79F974u;
    {
        const bool branch_taken_0x79f974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79f974) {
            ctx->pc = 0x79F9DCu;
            goto label_79f9dc;
        }
    }
    ctx->pc = 0x79F97Cu;
label_79f97c:
    // 0x79f97c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79F97Cu;
    SET_GPR_U32(ctx, 31, 0x79F984u);
    ctx->pc = 0x79F980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F97Cu;
    // 0x79f980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79F97Cu, 0x79F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F984u;
label_79f984:
    // 0x79f984: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79f984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79f988: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79F988u;
    {
        const bool branch_taken_0x79f988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x79f988) {
            ctx->pc = 0x79F9B0u;
            goto label_79f9b0;
        }
    }
    ctx->pc = 0x79F990u;
    // 0x79f990: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79f990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79f994: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79f994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79f998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79f998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79f99c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79f99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79f9a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79f9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79f9a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79f9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79f9a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79F9A8u;
    {
        const bool branch_taken_0x79f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79f9a8) {
            ctx->pc = 0x79F9DCu;
            goto label_79f9dc;
        }
    }
    ctx->pc = 0x79F9B0u;
label_79f9b0:
    // 0x79f9b0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79F9B0u;
    SET_GPR_U32(ctx, 31, 0x79F9B8u);
    ctx->pc = 0x79F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F9B0u;
    // 0x79f9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79F9B0u, 0x79F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F9B8u;
label_79f9b8:
    // 0x79f9b8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79f9b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79f9bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79F9BCu;
    {
        const bool branch_taken_0x79f9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F9BCu;
        // 0x79f9c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f9bc) {
            ctx->pc = 0x79F9ECu;
            goto label_79f9ec;
        }
    }
    ctx->pc = 0x79F9C4u;
    // 0x79f9c4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x79f9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x79f9c8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79f9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x79f9cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79f9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79f9d0: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x79f9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x79f9d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79f9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79f9d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79f9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_79f9dc:
    // 0x79f9dc: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79F9DCu;
    SET_GPR_U32(ctx, 31, 0x79F9E4u);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79F9DCu, 0x79F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F9E4u;
label_79f9e4:
    // 0x79f9e4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x79f9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x79f9e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79f9ec:
    // 0x79f9ec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79f9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79f9f4: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x79f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79f9f8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x79f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f9fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79f9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79fa00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x79fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x79fa04: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x79fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x79fa08: 0xa2040080  sb          $a0, 0x80($s0)
    ctx->pc = 0x79fa08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x79fa0c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x79fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x79fa10: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x79fa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x79fa14: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x79fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x79fa18: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x79FA18u;
    {
        const bool branch_taken_0x79fa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x79FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FA18u;
        // 0x79fa1c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fa18) {
            ctx->pc = 0x79FA28u;
            goto label_79fa28;
        }
    }
    ctx->pc = 0x79FA20u;
    // 0x79fa20: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79FA20u;
    {
        const bool branch_taken_0x79fa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79fa20) {
            ctx->pc = 0x79FA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79FA20u;
            // 0x79fa24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79FA6Cu;
            goto label_79fa6c;
        }
    }
    ctx->pc = 0x79FA28u;
label_79fa28:
    // 0x79fa28: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x79fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x79fa2c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79fa30: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x79fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79fa34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79fa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79fa38: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79FA38u;
    {
        const bool branch_taken_0x79fa38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FA38u;
        // 0x79fa3c: 0x8e050084  lw          $a1, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fa38) {
            ctx->pc = 0x79FA68u;
            goto label_79fa68;
        }
    }
    ctx->pc = 0x79FA40u;
    // 0x79fa40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79fa44: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x79fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x79fa48: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x79fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x79fa4c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x79fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x79fa50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79FA50u;
    {
        const bool branch_taken_0x79fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FA50u;
        // 0x79fa54: 0xa0a00091  sb          $zero, 0x91($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 145), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fa50) {
            ctx->pc = 0x79FA68u;
            goto label_79fa68;
        }
    }
    ctx->pc = 0x79FA58u;
label_79fa58:
    // 0x79fa58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79fa5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79fa60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x79fa64: 0xa2030078  sb          $v1, 0x78($s0)
    ctx->pc = 0x79fa64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 3));
label_79fa68:
    // 0x79fa68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79fa68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79fa6c:
    // 0x79fa6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79fa6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79fa70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79fa70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79fa74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79fa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79fa78: 0x3e00008  jr          $ra
    ctx->pc = 0x79FA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FA78u;
        // 0x79fa7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79FA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79FA80u;
}
} // namespace gh_r501
