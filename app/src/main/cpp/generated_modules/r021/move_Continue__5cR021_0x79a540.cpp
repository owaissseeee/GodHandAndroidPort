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
// Function: move_Continue__5cR021
// Address: 0x79a540 - 0x79a878
void move_Continue__5cR021_0x79a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Continue__5cR021_0x79a540");
#endif

    switch (ctx->pc) {
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a63cu: goto label_79a63c;
        case 0x79a654u: goto label_79a654;
        case 0x79a680u: goto label_79a680;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6fcu: goto label_79a6fc;
        case 0x79a784u: goto label_79a784;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7e8u: goto label_79a7e8;
        default: break;
    }

    ctx->pc = 0x79a540u;

    // 0x79a540: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79a544: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79a548: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79a54c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a550: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79a554: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79a554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79a558: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79a55c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79a560: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x79a564: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x79a564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79a568: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x79a56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a570: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a574: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79a574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a578: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x79A578u;
    {
        const bool branch_taken_0x79a578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A578u;
        // 0x79a57c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a578) {
            ctx->pc = 0x79A730u;
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A580u;
    // 0x79a580: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a584: 0x2442bcc0  addiu       $v0, $v0, -0x4340
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950080));
    // 0x79a588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a58c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a590: 0x800008  jr          $a0
    ctx->pc = 0x79A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A598u: goto label_79a598;
            case 0x79A5D8u: goto label_79a5d8;
            case 0x79A618u: goto label_79a618;
            case 0x79A6E8u: goto label_79a6e8;
            case 0x79A720u: goto label_79a720;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A590u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A598u;
label_79a598:
    // 0x79a598: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a59c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a5a4: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79a5a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a5ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a5b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a5b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5b4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A5B4u;
    SET_GPR_U32(ctx, 31, 0x79A5BCu);
    ctx->pc = 0x79A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B4u;
    // 0x79a5b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A5B4u, 0x79A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5BCu;
label_79a5bc:
    // 0x79a5bc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x79a5c0: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x79a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x79a5c4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x79a5c8: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x79a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x79a5cc: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x79a5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a5d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a5d4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x79a5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_79a5d8:
    // 0x79a5d8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a5dc: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79a5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79a5e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a5e4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a5e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a5e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a5ec: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a5f0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a5f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a5f8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x79a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a5fc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a600: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79a600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a604: 0x0  nop
    ctx->pc = 0x79a604u;
    // NOP
    // 0x79a608: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
    ctx->pc = 0x79A608u;
    {
        const bool branch_taken_0x79a608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A608u;
        // 0x79a60c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a608) {
            ctx->pc = 0x79A734u;
            goto label_79a734;
        }
    }
    ctx->pc = 0x79A610u;
    // 0x79a610: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x79A610u;
    {
        const bool branch_taken_0x79a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A610u;
        // 0x79a614: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a610) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A618u;
label_79a618:
    // 0x79a618: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x79a61c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79a620: 0x24729b70  addiu       $s2, $v1, -0x6490
    ctx->pc = 0x79a620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x79a624: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x79a628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a62c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x79a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x79a630: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x79a630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
    // 0x79a634: 0xc07efd2  jal         func_1FBF48
    ctx->pc = 0x79A634u;
    SET_GPR_U32(ctx, 31, 0x79A63Cu);
    ctx->pc = 0x79A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A634u;
    // 0x79a638: 0x8e300090  lw          $s0, 0x90($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF48u, 0x79A634u, 0x79A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A63Cu;
label_79a63c:
    // 0x79a63c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a640: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a644: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x79A644u;
    {
        const bool branch_taken_0x79a644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A644u;
        // 0x79a648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a644) {
            ctx->pc = 0x79A730u;
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A64Cu;
    // 0x79a64c: 0xc07efd2  jal         func_1FBF48
    ctx->pc = 0x79A64Cu;
    SET_GPR_U32(ctx, 31, 0x79A654u);
    ctx->pc = 0x79A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A64Cu;
    // 0x79a650: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF48u, 0x79A64Cu, 0x79A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A654u;
label_79a654:
    // 0x79a654: 0x24140054  addiu       $s4, $zero, 0x54
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x79a658: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79a65c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x79a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x79a660: 0x247574a0  addiu       $s5, $v1, 0x74A0
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x79a664: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a668: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a66c: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x79a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x79a670: 0x2476bd78  addiu       $s6, $v1, -0x4288
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950264));
    // 0x79a674: 0x26de0024  addiu       $fp, $s6, 0x24
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
    // 0x79a678: 0x92a205b7  lbu         $v0, 0x5B7($s5)
    ctx->pc = 0x79a678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x747A57u));
    // 0x79a67c: 0x0  nop
    ctx->pc = 0x79a67cu;
    // NOP
label_79a680:
    // 0x79a680: 0x1390c0  sll         $s2, $s3, 3
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x79a684: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79a688: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x79a688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a68c: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x79a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x79a690: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x79a694: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x79a698: 0xc07efd2  jal         func_1FBF48
    ctx->pc = 0x79A698u;
    SET_GPR_U32(ctx, 31, 0x79A6A0u);
    ctx->pc = 0x79A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A698u;
    // 0x79a69c: 0x84500020  lh          $s0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF48u, 0x79A698u, 0x79A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A0u;
label_79a6a0:
    // 0x79a6a0: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x79a6a0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a6a4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6A4u;
            // 0x79a6a8: 0x92a205b7  lbu         $v0, 0x5B7($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1463)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A6ACu;
    // 0x79a6ac: 0x16770008  bne         $s3, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A6ACu;
    {
        const bool branch_taken_0x79a6ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        ctx->pc = 0x79A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ACu;
        // 0x79a6b0: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6ac) {
            ctx->pc = 0x79A6D0u;
            goto label_79a6d0;
        }
    }
    ctx->pc = 0x79A6B4u;
    // 0x79a6b4: 0x92a205b7  lbu         $v0, 0x5B7($s5)
    ctx->pc = 0x79a6b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1463)));
label_79a6b8:
    // 0x79a6b8: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x79a6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a6bc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x79a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x79a6c0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x79a6c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a6c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x79A6C8u;
    {
        const bool branch_taken_0x79a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C8u;
        // 0x79a6cc: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6c8) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A6D0u;
label_79a6d0:
    // 0x79a6d0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x79a6d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x79a6d4: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x79a6d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a6d8: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x79A6D8u;
    {
        const bool branch_taken_0x79a6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6d8) {
            ctx->pc = 0x79A6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6D8u;
            // 0x79a6dc: 0x92a205b7  lbu         $v0, 0x5B7($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1463)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a680;
        }
    }
    ctx->pc = 0x79A6E0u;
    // 0x79a6e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79A6E0u;
    {
        const bool branch_taken_0x79a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6E0u;
        // 0x79a6e4: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6e0) {
            ctx->pc = 0x79A714u;
            goto label_79a714;
        }
    }
    ctx->pc = 0x79A6E8u;
label_79a6e8:
    // 0x79a6e8: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x79a6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6f0: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x79a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x79a6f4: 0xc1e6caa  jal         func_79B2A8
    ctx->pc = 0x79A6F4u;
    SET_GPR_U32(ctx, 31, 0x79A6FCu);
    ctx->pc = 0x79A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6F4u;
    // 0x79a6f8: 0x24a50084  addiu       $a1, $a1, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2A8u, 0x79A6F4u, 0x79A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6FCu;
label_79a6fc:
    // 0x79a6fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A6FCu;
    {
        const bool branch_taken_0x79a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6FCu;
        // 0x79a700: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6fc) {
            ctx->pc = 0x79A734u;
            goto label_79a734;
        }
    }
    ctx->pc = 0x79A704u;
    // 0x79a704: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x79a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x79a708: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x79a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x79a70c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x79a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_79a710:
    // 0x79a710: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x79a710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_79a714:
    // 0x79a714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A718u;
    {
        const bool branch_taken_0x79a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A718u;
        // 0x79a71c: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a718) {
            ctx->pc = 0x79A730u;
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A720u;
label_79a720:
    // 0x79a720: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79a720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a724: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79a724u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a72c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79a72cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a730:
    // 0x79a730: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a734:
    // 0x79a734: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x79a738: 0x245074a0  addiu       $s0, $v0, 0x74A0
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79a73c: 0xde0201a0  ld          $v0, 0x1A0($s0)
    ctx->pc = 0x79a73cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x79a740: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a744: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x79A744u;
    {
        const bool branch_taken_0x79a744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a744) {
            ctx->pc = 0x79A748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A744u;
            // 0x79a748: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A848u;
            goto label_79a848;
        }
    }
    ctx->pc = 0x79A74Cu;
    // 0x79a74c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a750: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x79a750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a754: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79A754u;
    {
        const bool branch_taken_0x79a754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a754) {
            ctx->pc = 0x79A758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A754u;
            // 0x79a758: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A848u;
            goto label_79a848;
        }
    }
    ctx->pc = 0x79A75Cu;
    // 0x79a75c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x79A75Cu;
    {
        const bool branch_taken_0x79a75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A75Cu;
        // 0x79a760: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a75c) {
            ctx->pc = 0x79A844u;
            goto label_79a844;
        }
    }
    ctx->pc = 0x79A764u;
    // 0x79a764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a768: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a76c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79a76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79a770: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a774: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a778: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a77c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A77Cu;
    SET_GPR_U32(ctx, 31, 0x79A784u);
    ctx->pc = 0x79A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A77Cu;
    // 0x79a780: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A77Cu, 0x79A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A784u;
label_79a784:
    // 0x79a784: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x79a784u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a788: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a78c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79a790: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x79a794: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79a794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a798: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x79a79c: 0x24150054  addiu       $s5, $zero, 0x54
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x79a7a0: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x79a7a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a7a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a7a8: 0xc07efd2  jal         func_1FBF48
    ctx->pc = 0x79A7A8u;
    SET_GPR_U32(ctx, 31, 0x79A7B0u);
    ctx->pc = 0x79A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7A8u;
    // 0x79a7ac: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF48u, 0x79A7A8u, 0x79A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7B0u;
label_79a7b0:
    // 0x79a7b0: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x79a7b4: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a7b8: 0x2474bd78  addiu       $s4, $v1, -0x4288
    ctx->pc = 0x79a7b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950264));
    // 0x79a7bc: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x79a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x79a7c0: 0x26970024  addiu       $s7, $s4, 0x24
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x79a7c4: 0x92c205b7  lbu         $v0, 0x5B7($s6)
    ctx->pc = 0x79a7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1463)));
label_79a7c8:
    // 0x79a7c8: 0x1390c0  sll         $s2, $s3, 3
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x79a7cc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79a7d0: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x79a7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a7d4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x79a7d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x79a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x79a7dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x79a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x79a7e0: 0xc07efd2  jal         func_1FBF48
    ctx->pc = 0x79A7E0u;
    SET_GPR_U32(ctx, 31, 0x79A7E8u);
    ctx->pc = 0x79A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E0u;
    // 0x79a7e4: 0x84500020  lh          $s0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF48u, 0x79A7E0u, 0x79A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E8u;
label_79a7e8:
    // 0x79a7e8: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x79a7e8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a7ec: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A7ECu;
    {
        const bool branch_taken_0x79a7ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a7ec) {
            ctx->pc = 0x79A7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7ECu;
            // 0x79a7f0: 0x92c205b7  lbu         $v0, 0x5B7($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1463)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A800u;
            goto label_79a800;
        }
    }
    ctx->pc = 0x79A7F4u;
    // 0x79a7f4: 0x167e0008  bne         $s3, $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A7F4u;
    {
        const bool branch_taken_0x79a7f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x79A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F4u;
        // 0x79a7f8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7f4) {
            ctx->pc = 0x79A818u;
            goto label_79a818;
        }
    }
    ctx->pc = 0x79A7FCu;
    // 0x79a7fc: 0x92c205b7  lbu         $v0, 0x5B7($s6)
    ctx->pc = 0x79a7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1463)));
label_79a800:
    // 0x79a800: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x79a800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a804: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x79a808: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x79a80c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a810: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A810u;
    {
        const bool branch_taken_0x79a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A810u;
        // 0x79a814: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a810) {
            ctx->pc = 0x79A828u;
            goto label_79a828;
        }
    }
    ctx->pc = 0x79A818u;
label_79a818:
    // 0x79a818: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x79a81c: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x79a81cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a820: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x79A820u;
    {
        const bool branch_taken_0x79a820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a820) {
            ctx->pc = 0x79A824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A820u;
            // 0x79a824: 0x92c205b7  lbu         $v0, 0x5B7($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1463)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7c8;
        }
    }
    ctx->pc = 0x79A828u;
label_79a828:
    // 0x79a828: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x79a82c: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x79a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x79a830: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a834: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79a834u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a838: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79a838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a83c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a840: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79a840u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a844:
    // 0x79a844: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79a844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a848:
    // 0x79a848: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79a848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a84c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79a84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a850: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79a850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a854: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79a854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a858: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79a858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a85c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79a85cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a860: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x79a860u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a864: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x79a864u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a86c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A86Cu;
        // 0x79a870: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A874u;
    // 0x79a874: 0x0  nop
    ctx->pc = 0x79a874u;
    // NOP
    ctx->pc = 0x79a878u;
}
} // namespace gh_r021
