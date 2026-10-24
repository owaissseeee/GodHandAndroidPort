#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_Dead_man__5cR022
// Address: 0x79a530 - 0x79a6e8
void move_Dead_man__5cR022_0x79a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Dead_man__5cR022_0x79a530");
#endif

    switch (ctx->pc) {
        case 0x79a59cu: goto label_79a59c;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a624u: goto label_79a624;
        case 0x79a698u: goto label_79a698;
        case 0x79a6b4u: goto label_79a6b4;
        default: break;
    }

    ctx->pc = 0x79a530u;

    // 0x79a530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a534: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a538: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a53c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a548: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a54c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79a54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a550: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x79A550u;
    {
        const bool branch_taken_0x79a550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A550u;
        // 0x79a554: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a550) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A558u;
    // 0x79a558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a55c: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
    // 0x79a560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a564: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a568: 0x800008  jr          $a0
    ctx->pc = 0x79A568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A570u: goto label_79a570;
            case 0x79A5A8u: goto label_79a5a8;
            case 0x79A5E8u: goto label_79a5e8;
            case 0x79A62Cu: goto label_79a62c;
            case 0x79A63Cu: goto label_79a63c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A568u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A570u;
label_79a570:
    // 0x79a570: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x79a574: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a578: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a580: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x79a580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x79a584: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79a588: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a58c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a594: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A594u;
    SET_GPR_U32(ctx, 31, 0x79A59Cu);
    ctx->pc = 0x79A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A594u;
    // 0x79a598: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A594u, 0x79A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A59Cu;
label_79a59c:
    // 0x79a59c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x79a59cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a5a4: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x79a5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_79a5a8:
    // 0x79a5a8: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x79a5ac: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79a5b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a5b4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a5b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a5b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a5bc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a5c0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x79a5c4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a5c8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x79a5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a5cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a5d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79a5d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a5d4: 0x0  nop
    ctx->pc = 0x79a5d4u;
    // NOP
    // 0x79a5d8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x79A5D8u;
    {
        const bool branch_taken_0x79a5d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D8u;
        // 0x79a5dc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5d8) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A5E0u;
    // 0x79a5e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79A5E0u;
    {
        const bool branch_taken_0x79a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E0u;
        // 0x79a5e4: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5e0) {
            ctx->pc = 0x79A62Cu;
            goto label_79a62c;
        }
    }
    ctx->pc = 0x79A5E8u;
label_79a5e8:
    // 0x79a5e8: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x79a5ec: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79a5f0: 0x24729b70  addiu       $s2, $v1, -0x6490
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x79a5f4: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x79a5f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x79a600: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x79a600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
    // 0x79a604: 0xc07f174  jal         func_1FC5D0
    ctx->pc = 0x79A604u;
    SET_GPR_U32(ctx, 31, 0x79A60Cu);
    ctx->pc = 0x79A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A604u;
    // 0x79a608: 0x8e300088  lw          $s0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5D0u, 0x79A604u, 0x79A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A60Cu;
label_79a60c:
    // 0x79a60c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a610: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a614: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A614u;
    {
        const bool branch_taken_0x79a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A614u;
        // 0x79a618: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a614) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A61Cu;
    // 0x79a61c: 0xc07f174  jal         func_1FC5D0
    ctx->pc = 0x79A61Cu;
    SET_GPR_U32(ctx, 31, 0x79A624u);
    ctx->pc = 0x79A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A61Cu;
    // 0x79a620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5D0u, 0x79A61Cu, 0x79A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A624u;
label_79a624:
    // 0x79a624: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x79a628: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_79a62c:
    // 0x79a62c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x79a62cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a634: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A634u;
    {
        const bool branch_taken_0x79a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A634u;
        // 0x79a638: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a634) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A63Cu;
label_79a63c:
    // 0x79a63c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79a63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a640: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79a640u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a648: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79a648u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a64c:
    // 0x79a64c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a650:
    // 0x79a650: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79a654: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79a654u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79a658: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a65c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x79A65Cu;
    {
        const bool branch_taken_0x79a65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A65Cu;
        // 0x79a660: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a65c) {
            ctx->pc = 0x79A6CCu;
            goto label_79a6cc;
        }
    }
    ctx->pc = 0x79A664u;
    // 0x79a664: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a668: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A668u;
    {
        const bool branch_taken_0x79a668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A668u;
        // 0x79a66c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a668) {
            ctx->pc = 0x79A6D0u;
            goto label_79a6d0;
        }
    }
    ctx->pc = 0x79A670u;
    // 0x79a670: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A670u;
    {
        const bool branch_taken_0x79a670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A670u;
        // 0x79a674: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a670) {
            ctx->pc = 0x79A6D0u;
            goto label_79a6d0;
        }
    }
    ctx->pc = 0x79A678u;
    // 0x79a678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a67c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a680: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79a684: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a688: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a68c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a68cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a690: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A690u;
    SET_GPR_U32(ctx, 31, 0x79A698u);
    ctx->pc = 0x79A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A690u;
    // 0x79a694: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A690u, 0x79A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A698u;
label_79a698:
    // 0x79a698: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x79a69c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a6a0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79a6a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a6a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a6ac: 0xc07f174  jal         func_1FC5D0
    ctx->pc = 0x79A6ACu;
    SET_GPR_U32(ctx, 31, 0x79A6B4u);
    ctx->pc = 0x79A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6ACu;
    // 0x79a6b0: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5D0u, 0x79A6ACu, 0x79A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6B4u;
label_79a6b4:
    // 0x79a6b4: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x79a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x79a6b8: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a6bc: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79a6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a6c0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79a6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a6c8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79a6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a6cc:
    // 0x79a6cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a6d0:
    // 0x79a6d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a6d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a6d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6DCu;
        // 0x79a6e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6E4u;
    // 0x79a6e4: 0x0  nop
    ctx->pc = 0x79a6e4u;
    // NOP
    ctx->pc = 0x79a6e8u;
}
} // namespace gh_r022
