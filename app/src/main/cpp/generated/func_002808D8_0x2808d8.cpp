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

// Function: func_002808D8
// Address: 0x2808d8 - 0x280a08
void func_002808D8_0x2808d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002808D8_0x2808d8");
#endif

    switch (ctx->pc) {
        case 0x2808f4u: goto label_2808f4;
        case 0x280908u: goto label_280908;
        case 0x28097cu: goto label_28097c;
        case 0x280990u: goto label_280990;
        case 0x2809c4u: goto label_2809c4;
        case 0x2809d8u: goto label_2809d8;
        default: break;
    }

    ctx->pc = 0x2808d8u;

    // 0x2808d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2808d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2808dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2808dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2808e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2808e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2808e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2808e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2808e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2808ec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2808ECu;
    SET_GPR_U32(ctx, 31, 0x2808F4u);
    ctx->pc = 0x2808F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2808ECu;
    // 0x2808f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2808ECu, 0x2808F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808F4u;
label_2808f4:
    // 0x2808f4: 0xc44005a8  lwc1        $f0, 0x5A8($v0)
    ctx->pc = 0x2808f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2808f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2808f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808fc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2808fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x280900: 0xc0560a2  jal         func_158288
    ctx->pc = 0x280900u;
    SET_GPR_U32(ctx, 31, 0x280908u);
    ctx->pc = 0x280904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280900u;
    // 0x280904: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x280900u, 0x280908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280908u;
label_280908:
    // 0x280908: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x280908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28090c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x28090cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x280910: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x280910u;
    {
        const bool branch_taken_0x280910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280910u;
        // 0x280914: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280910) {
            ctx->pc = 0x2809F0u;
            goto label_2809f0;
        }
    }
    ctx->pc = 0x280918u;
    // 0x280918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28091c: 0x24428560  addiu       $v0, $v0, -0x7AA0
    ctx->pc = 0x28091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935904));
    // 0x280920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x280920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x280924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x280924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280928: 0x800008  jr          $a0
    ctx->pc = 0x280928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280930u: goto label_280930;
            case 0x280950u: goto label_280950;
            case 0x280988u: goto label_280988;
            case 0x280998u: goto label_280998;
            case 0x2809D0u: goto label_2809d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280928u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280930u;
label_280930:
    // 0x280930: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x280930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x280934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280938: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28093c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28093cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280940: 0x8c450168  lw          $a1, 0x168($v0)
    ctx->pc = 0x280940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x280944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280948u;
    {
        const bool branch_taken_0x280948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280948u;
        // 0x28094c: 0x8c46016c  lw          $a2, 0x16C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280948) {
            ctx->pc = 0x28096Cu;
            goto label_28096c;
        }
    }
    ctx->pc = 0x280950u;
label_280950:
    // 0x280950: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x280950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x280954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280958: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28095c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280960: 0x8c450170  lw          $a1, 0x170($v0)
    ctx->pc = 0x280960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x280964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280968: 0x8c460174  lw          $a2, 0x174($v0)
    ctx->pc = 0x280968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
label_28096c:
    // 0x28096c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28096cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280970: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280974: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280974u;
    SET_GPR_U32(ctx, 31, 0x28097Cu);
    ctx->pc = 0x280978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280974u;
    // 0x280978: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280974u, 0x28097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28097Cu;
label_28097c:
    // 0x28097c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28097cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x280980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280984: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x280984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_280988:
    // 0x280988: 0xc055f06  jal         func_157C18
    ctx->pc = 0x280988u;
    SET_GPR_U32(ctx, 31, 0x280990u);
    ctx->pc = 0x28098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280988u;
    // 0x28098c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x280988u, 0x280990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280990u;
label_280990:
    // 0x280990: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x280990u;
    {
        const bool branch_taken_0x280990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280990u;
        // 0x280994: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280990) {
            ctx->pc = 0x2809F4u;
            goto label_2809f4;
        }
    }
    ctx->pc = 0x280998u;
label_280998:
    // 0x280998: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x280998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28099c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2809a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2809a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2809a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2809a8: 0x8c450178  lw          $a1, 0x178($v0)
    ctx->pc = 0x2809a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x2809ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2809acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809b0: 0x8c46017c  lw          $a2, 0x17C($v0)
    ctx->pc = 0x2809b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x2809b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2809b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2809b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2809bc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2809BCu;
    SET_GPR_U32(ctx, 31, 0x2809C4u);
    ctx->pc = 0x2809C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809BCu;
    // 0x2809c0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2809BCu, 0x2809C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809C4u;
label_2809c4:
    // 0x2809c4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2809c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2809c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2809c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2809cc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2809ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2809d0:
    // 0x2809d0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2809D0u;
    SET_GPR_U32(ctx, 31, 0x2809D8u);
    ctx->pc = 0x2809D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809D0u;
    // 0x2809d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2809D0u, 0x2809D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809D8u;
label_2809d8:
    // 0x2809d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2809D8u;
    {
        const bool branch_taken_0x2809d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2809d8) {
            ctx->pc = 0x2809DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2809D8u;
            // 0x2809dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2809F4u;
            goto label_2809f4;
        }
    }
    ctx->pc = 0x2809E0u;
    // 0x2809e0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2809e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2809e4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2809e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2809e8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x2809e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2809ec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2809ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_2809f0:
    // 0x2809f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2809f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2809f4:
    // 0x2809f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2809f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2809f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2809f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2809fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2809FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809FCu;
        // 0x280a00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2809FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280A04u;
    // 0x280a04: 0x0  nop
    ctx->pc = 0x280a04u;
    // NOP
    ctx->pc = 0x280a08u;
}
