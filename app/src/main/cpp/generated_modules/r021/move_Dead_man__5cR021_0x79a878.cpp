#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: move_Dead_man__5cR021
// Address: 0x79a878 - 0x79ab08
void move_Dead_man__5cR021_0x79a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Dead_man__5cR021_0x79a878");
#endif

    switch (ctx->pc) {
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a974u: goto label_79a974;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a99cu: goto label_79a99c;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa98u: goto label_79aa98;
        case 0x79aaa8u: goto label_79aaa8;
        default: break;
    }

    ctx->pc = 0x79a878u;

    // 0x79a878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a87c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a880: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a888: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a88c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a894: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79a894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a898: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79a898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a89c: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x79A89Cu;
    {
        const bool branch_taken_0x79a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A89Cu;
        // 0x79a8a0: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a89c) {
            ctx->pc = 0x79AA28u;
            goto label_79aa28;
        }
    }
    ctx->pc = 0x79A8A4u;
    // 0x79a8a4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a8a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a8ac: 0x2442bce0  addiu       $v0, $v0, -0x4320
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950112));
    // 0x79a8b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a8b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a8b8: 0x800008  jr          $a0
    ctx->pc = 0x79A8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A8C0u: goto label_79a8c0;
            case 0x79A900u: goto label_79a900;
            case 0x79A94Cu: goto label_79a94c;
            case 0x79A9D4u: goto label_79a9d4;
            case 0x79AA14u: goto label_79aa14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A8C0u;
label_79a8c0:
    // 0x79a8c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a8cc: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79a8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79a8d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a8d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a8d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8dc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A8DCu;
    SET_GPR_U32(ctx, 31, 0x79A8E4u);
    ctx->pc = 0x79A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8DCu;
    // 0x79a8e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A8DCu, 0x79A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8E4u;
label_79a8e4:
    // 0x79a8e4: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79a8e8: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x79a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x79a8ec: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x79a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x79a8f0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x79a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x79a8f4: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x79a8f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a8f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a8fc: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x79a8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_79a900:
    // 0x79a900: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x79a904: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79a908: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a90c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a910: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a914: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a918: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x79a91c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a920: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x79a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a924: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a928: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79a928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a92c: 0x0  nop
    ctx->pc = 0x79a92cu;
    // NOP
    // 0x79a930: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x79A930u;
    {
        const bool branch_taken_0x79a930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A930u;
        // 0x79a934: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a930) {
            ctx->pc = 0x79AA28u;
            goto label_79aa28;
        }
    }
    ctx->pc = 0x79A938u;
    // 0x79a938: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x79a938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x79a93c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x79a93cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a940: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a944: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x79A944u;
    {
        const bool branch_taken_0x79a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A944u;
        // 0x79a948: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a944) {
            ctx->pc = 0x79AA28u;
            goto label_79aa28;
        }
    }
    ctx->pc = 0x79A94Cu;
label_79a94c:
    // 0x79a94c: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79a950: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a954: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79a958: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x79a95c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x79a960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a964: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x79a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x79a968: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a96c: 0xc07efb4  jal         func_1FBED0
    ctx->pc = 0x79A96Cu;
    SET_GPR_U32(ctx, 31, 0x79A974u);
    ctx->pc = 0x79A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A96Cu;
    // 0x79a970: 0x8e300098  lw          $s0, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBED0u, 0x79A96Cu, 0x79A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A974u;
label_79a974:
    // 0x79a974: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a978: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a97c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x79A97Cu;
    {
        const bool branch_taken_0x79a97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a97c) {
            ctx->pc = 0x79A980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A97Cu;
            // 0x79a980: 0x267274a0  addiu       $s2, $s3, 0x74A0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA2Cu;
            goto label_79aa2c;
        }
    }
    ctx->pc = 0x79A984u;
    // 0x79a984: 0xc07efb4  jal         func_1FBED0
    ctx->pc = 0x79A984u;
    SET_GPR_U32(ctx, 31, 0x79A98Cu);
    ctx->pc = 0x79A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A984u;
    // 0x79a988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBED0u, 0x79A984u, 0x79A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A98Cu;
label_79a98c:
    // 0x79a98c: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x79a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79a990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a994: 0xc07efb4  jal         func_1FBED0
    ctx->pc = 0x79A994u;
    SET_GPR_U32(ctx, 31, 0x79A99Cu);
    ctx->pc = 0x79A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A994u;
    // 0x79a998: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBED0u, 0x79A994u, 0x79A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A99Cu;
label_79a99c:
    // 0x79a99c: 0x266374a0  addiu       $v1, $s3, 0x74A0
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
    // 0x79a9a0: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x79a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x79a9a4: 0x906405b7  lbu         $a0, 0x5B7($v1)
    ctx->pc = 0x79a9a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1463)));
    // 0x79a9a8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a9ac: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x79a9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a9b0: 0x24a5bd78  addiu       $a1, $a1, -0x4288
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950264));
    // 0x79a9b4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x79a9b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79a9b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a9bc: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x79a9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x79a9c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x79a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x79a9c4: 0x84830050  lh          $v1, 0x50($a0)
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x79a9c8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x79a9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a9cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79A9CCu;
    {
        const bool branch_taken_0x79a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9CCu;
        // 0x79a9d0: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9cc) {
            ctx->pc = 0x79AA28u;
            goto label_79aa28;
        }
    }
    ctx->pc = 0x79A9D4u;
label_79a9d4:
    // 0x79a9d4: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x79a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x79a9d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9dc: 0x8e2600f0  lw          $a2, 0xF0($s1)
    ctx->pc = 0x79a9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x79a9e0: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x79a9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x79a9e4: 0xc1e6caa  jal         func_79B2A8
    ctx->pc = 0x79A9E4u;
    SET_GPR_U32(ctx, 31, 0x79A9ECu);
    ctx->pc = 0x79A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9E4u;
    // 0x79a9e8: 0x24a50084  addiu       $a1, $a1, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2A8u, 0x79A9E4u, 0x79A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9ECu;
label_79a9ec:
    // 0x79a9ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79A9ECu;
    {
        const bool branch_taken_0x79a9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9ECu;
        // 0x79a9f0: 0x267274a0  addiu       $s2, $s3, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9ec) {
            ctx->pc = 0x79AA2Cu;
            goto label_79aa2c;
        }
    }
    ctx->pc = 0x79A9F4u;
    // 0x79a9f4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x79a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x79a9f8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x79a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x79a9fc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x79a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79aa00: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x79aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x79aa04: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x79aa04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79aa08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79aa0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79AA0Cu;
    {
        const bool branch_taken_0x79aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA0Cu;
        // 0x79aa10: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa0c) {
            ctx->pc = 0x79AA2Cu;
            goto label_79aa2c;
        }
    }
    ctx->pc = 0x79AA14u;
label_79aa14:
    // 0x79aa14: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79aa14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79aa18: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x79aa1c: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79aa1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79aa20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79aa24: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79aa24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79aa28:
    // 0x79aa28: 0x267274a0  addiu       $s2, $s3, 0x74A0
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
label_79aa2c:
    // 0x79aa2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x79aa30: 0xde4201a0  ld          $v0, 0x1A0($s2)
    ctx->pc = 0x79aa30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x79aa34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79aa38: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x79AA38u;
    {
        const bool branch_taken_0x79aa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA38u;
        // 0x79aa3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa38) {
            ctx->pc = 0x79AAECu;
            goto label_79aaec;
        }
    }
    ctx->pc = 0x79AA40u;
    // 0x79aa40: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79aa44: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x79aa44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79aa48: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x79AA48u;
    {
        const bool branch_taken_0x79aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aa48) {
            ctx->pc = 0x79AA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA48u;
            // 0x79aa4c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AAF0u;
            goto label_79aaf0;
        }
    }
    ctx->pc = 0x79AA50u;
    // 0x79aa50: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x79AA50u;
    {
        const bool branch_taken_0x79aa50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA50u;
        // 0x79aa54: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa50) {
            ctx->pc = 0x79AAECu;
            goto label_79aaec;
        }
    }
    ctx->pc = 0x79AA58u;
    // 0x79aa58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa5c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79aa60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aa64: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79aa64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aa68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79aa68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79aa6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa70: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AA70u;
    SET_GPR_U32(ctx, 31, 0x79AA78u);
    ctx->pc = 0x79AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA70u;
    // 0x79aa74: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AA70u, 0x79AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA78u;
label_79aa78:
    // 0x79aa78: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x79aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x79aa7c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x79aa7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x79aa80: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x79aa84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79aa88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79aa90: 0xc07efb4  jal         func_1FBED0
    ctx->pc = 0x79AA90u;
    SET_GPR_U32(ctx, 31, 0x79AA98u);
    ctx->pc = 0x79AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA90u;
    // 0x79aa94: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBED0u, 0x79AA90u, 0x79AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA98u;
label_79aa98:
    // 0x79aa98: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x79aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79aa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaa0: 0xc07efb4  jal         func_1FBED0
    ctx->pc = 0x79AAA0u;
    SET_GPR_U32(ctx, 31, 0x79AAA8u);
    ctx->pc = 0x79AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAA0u;
    // 0x79aaa4: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBED0u, 0x79AAA0u, 0x79AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAA8u;
label_79aaa8:
    // 0x79aaa8: 0x924505b7  lbu         $a1, 0x5B7($s2)
    ctx->pc = 0x79aaa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1463)));
    // 0x79aaac: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x79aab0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79aab4: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x79aab8: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x79aab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x79aabc: 0x2463bd78  addiu       $v1, $v1, -0x4288
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950264));
    // 0x79aac0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x79aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x79aac4: 0x84a40050  lh          $a0, 0x50($a1)
    ctx->pc = 0x79aac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x79aac8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x79aac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79aacc: 0x21823  negu        $v1, $v0
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79aad0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x79aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x79aad4: 0xacc30084  sw          $v1, 0x84($a2)
    ctx->pc = 0x79aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 3));
    // 0x79aad8: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79aad8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79aadc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79aadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79aae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79aae4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79aae4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x79aae8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79aae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79aaec:
    // 0x79aaec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79aaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79aaf0:
    // 0x79aaf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79aaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79aaf4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79aaf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aaf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aafc: 0x3e00008  jr          $ra
    ctx->pc = 0x79AAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAFCu;
        // 0x79ab00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB04u;
    // 0x79ab04: 0x0  nop
    ctx->pc = 0x79ab04u;
    // NOP
    ctx->pc = 0x79ab08u;
}
} // namespace gh_r021
