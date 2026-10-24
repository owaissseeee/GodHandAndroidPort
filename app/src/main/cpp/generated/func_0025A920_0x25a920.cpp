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

// Function: func_0025A920
// Address: 0x25a920 - 0x25ab70
void func_0025A920_0x25a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025A920_0x25a920");
#endif

    switch (ctx->pc) {
        case 0x25a94cu: goto label_25a94c;
        case 0x25a9a0u: goto label_25a9a0;
        case 0x25a9b0u: goto label_25a9b0;
        case 0x25a9d8u: goto label_25a9d8;
        case 0x25a9f8u: goto label_25a9f8;
        case 0x25aa20u: goto label_25aa20;
        case 0x25aa2cu: goto label_25aa2c;
        case 0x25aa60u: goto label_25aa60;
        case 0x25aa88u: goto label_25aa88;
        case 0x25aa94u: goto label_25aa94;
        case 0x25aaa0u: goto label_25aaa0;
        case 0x25aafcu: goto label_25aafc;
        case 0x25ab1cu: goto label_25ab1c;
        case 0x25ab2cu: goto label_25ab2c;
        case 0x25ab40u: goto label_25ab40;
        case 0x25ab4cu: goto label_25ab4c;
        default: break;
    }

    ctx->pc = 0x25a920u;

    // 0x25a920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25a924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a92c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a930: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25a934: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25a934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x25a938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a93c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25a93cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25a940: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x25a944: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x25A944u;
    SET_GPR_U32(ctx, 31, 0x25A94Cu);
    ctx->pc = 0x25A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A944u;
    // 0x25a948: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25A944u, 0x25A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A94Cu;
label_25a94c:
    // 0x25a94c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25a94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a950: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25a950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x25a954: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x25A954u;
    {
        const bool branch_taken_0x25a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A954u;
        // 0x25a958: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a954) {
            ctx->pc = 0x25AB4Cu;
            goto label_25ab4c;
        }
    }
    ctx->pc = 0x25A95Cu;
    // 0x25a95c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a960: 0x24423580  addiu       $v0, $v0, 0x3580
    ctx->pc = 0x25a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13696));
    // 0x25a964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a968: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a96c: 0x800008  jr          $a0
    ctx->pc = 0x25A96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A974u: goto label_25a974;
            case 0x25A9F0u: goto label_25a9f0;
            case 0x25AA34u: goto label_25aa34;
            case 0x25AA78u: goto label_25aa78;
            case 0x25AAD0u: goto label_25aad0;
            case 0x25AB14u: goto label_25ab14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A96Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A974u;
label_25a974:
    // 0x25a974: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a978: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25a978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a97c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a984: 0x8c451084  lw          $a1, 0x1084($v0)
    ctx->pc = 0x25a984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4228)));
    // 0x25a988: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a98c: 0x8c461088  lw          $a2, 0x1088($v0)
    ctx->pc = 0x25a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4232)));
    // 0x25a990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a994: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25a994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25a998: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A998u;
    SET_GPR_U32(ctx, 31, 0x25A9A0u);
    ctx->pc = 0x25A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A998u;
    // 0x25a99c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A998u, 0x25A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A9A0u;
label_25a9a0:
    // 0x25a9a0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25a9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x25a9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9a8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25A9A8u;
    SET_GPR_U32(ctx, 31, 0x25A9B0u);
    ctx->pc = 0x25A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A9A8u;
    // 0x25a9ac: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25A9A8u, 0x25A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A9B0u;
label_25a9b0:
    // 0x25a9b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25a9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9b8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25a9b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25a9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a9c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25a9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a9c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25a9ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9d0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25A9D0u;
    SET_GPR_U32(ctx, 31, 0x25A9D8u);
    ctx->pc = 0x25A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A9D0u;
    // 0x25a9d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25A9D0u, 0x25A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A9D8u;
label_25a9d8:
    // 0x25a9d8: 0x92231866  lbu         $v1, 0x1866($s1)
    ctx->pc = 0x25a9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6246)));
    // 0x25a9dc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a9e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25a9e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a9e8: 0xa2231866  sb          $v1, 0x1866($s1)
    ctx->pc = 0x25a9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 3));
    // 0x25a9ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a9f0:
    // 0x25a9f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A9F0u;
    SET_GPR_U32(ctx, 31, 0x25A9F8u);
    ctx->pc = 0x25A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A9F0u;
    // 0x25a9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A9F0u, 0x25A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A9F8u;
label_25a9f8:
    // 0x25a9f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A9F8u;
    {
        const bool branch_taken_0x25a9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a9f8) {
            ctx->pc = 0x25AA0Cu;
            goto label_25aa0c;
        }
    }
    ctx->pc = 0x25AA00u;
    // 0x25aa00: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25aa00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25aa04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25aa08: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25aa08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25aa0c:
    // 0x25aa0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25aa10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25aa10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25aa14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa18: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25AA18u;
    SET_GPR_U32(ctx, 31, 0x25AA20u);
    ctx->pc = 0x25AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA18u;
    // 0x25aa1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25AA18u, 0x25AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA20u;
label_25aa20:
    // 0x25aa20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25aa20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25aa24: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25AA24u;
    SET_GPR_U32(ctx, 31, 0x25AA2Cu);
    ctx->pc = 0x25AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA24u;
    // 0x25aa28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25AA24u, 0x25AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA2Cu;
label_25aa2c:
    // 0x25aa2c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25AA2Cu;
    {
        const bool branch_taken_0x25aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA2Cu;
        // 0x25aa30: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa2c) {
            ctx->pc = 0x25AB50u;
            goto label_25ab50;
        }
    }
    ctx->pc = 0x25AA34u;
label_25aa34:
    // 0x25aa34: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25aa38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25aa3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25aa40: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25aa40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25aa44: 0x8c45107c  lw          $a1, 0x107C($v0)
    ctx->pc = 0x25aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4220)));
    // 0x25aa48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25aa48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa4c: 0x8c461080  lw          $a2, 0x1080($v0)
    ctx->pc = 0x25aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4224)));
    // 0x25aa50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25aa50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa54: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25aa58: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25AA58u;
    SET_GPR_U32(ctx, 31, 0x25AA60u);
    ctx->pc = 0x25AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA58u;
    // 0x25aa5c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25AA58u, 0x25AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA60u;
label_25aa60:
    // 0x25aa60: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25aa60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25aa64: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x25aa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x25aa68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25aa68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aa6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25aa70: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x25aa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x25aa74: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25aa74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25aa78:
    // 0x25aa78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25aa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25aa7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25aa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25aa80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25AA80u;
    SET_GPR_U32(ctx, 31, 0x25AA88u);
    ctx->pc = 0x25AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA80u;
    // 0x25aa84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25AA80u, 0x25AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA88u;
label_25aa88:
    // 0x25aa88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25aa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa8c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25AA8Cu;
    SET_GPR_U32(ctx, 31, 0x25AA94u);
    ctx->pc = 0x25AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA8Cu;
    // 0x25aa90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25AA8Cu, 0x25AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA94u;
label_25aa94:
    // 0x25aa94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25aa94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25aa98: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25AA98u;
    SET_GPR_U32(ctx, 31, 0x25AAA0u);
    ctx->pc = 0x25AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA98u;
    // 0x25aa9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25AA98u, 0x25AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAA0u;
label_25aaa0:
    // 0x25aaa0: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x25aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aaa4: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x25aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aaa8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25aaa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25aaac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25aaacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25aab0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25aab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aab4: 0x0  nop
    ctx->pc = 0x25aab4u;
    // NOP
    // 0x25aab8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x25AAB8u;
    {
        const bool branch_taken_0x25aab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAB8u;
        // 0x25aabc: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aab8) {
            ctx->pc = 0x25AB4Cu;
            goto label_25ab4c;
        }
    }
    ctx->pc = 0x25AAC0u;
    // 0x25aac0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25aac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25aac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25aac8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25AAC8u;
    {
        const bool branch_taken_0x25aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAC8u;
        // 0x25aacc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aac8) {
            ctx->pc = 0x25AB4Cu;
            goto label_25ab4c;
        }
    }
    ctx->pc = 0x25AAD0u;
label_25aad0:
    // 0x25aad0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25aad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aad8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25aad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25aadc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25aadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25aae0: 0x8c451094  lw          $a1, 0x1094($v0)
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4244)));
    // 0x25aae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25aae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aae8: 0x8c461098  lw          $a2, 0x1098($v0)
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4248)));
    // 0x25aaec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25aaecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aaf0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25aaf4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25AAF4u;
    SET_GPR_U32(ctx, 31, 0x25AAFCu);
    ctx->pc = 0x25AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AAF4u;
    // 0x25aaf8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25AAF4u, 0x25AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAFCu;
label_25aafc:
    // 0x25aafc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25aafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25ab00: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x25ab04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ab08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25ab0c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x25ab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x25ab10: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25ab14:
    // 0x25ab14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25AB14u;
    SET_GPR_U32(ctx, 31, 0x25AB1Cu);
    ctx->pc = 0x25AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB14u;
    // 0x25ab18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25AB14u, 0x25AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB1Cu;
label_25ab1c:
    // 0x25ab1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AB1Cu;
    {
        const bool branch_taken_0x25ab1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab1c) {
            ctx->pc = 0x25AB2Cu;
            goto label_25ab2c;
        }
    }
    ctx->pc = 0x25AB24u;
    // 0x25ab24: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25AB24u;
    SET_GPR_U32(ctx, 31, 0x25AB2Cu);
    ctx->pc = 0x25AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB24u;
    // 0x25ab28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25AB24u, 0x25AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB2Cu;
label_25ab2c:
    // 0x25ab2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ab30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ab30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25ab34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25AB38u;
    SET_GPR_U32(ctx, 31, 0x25AB40u);
    ctx->pc = 0x25AB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB38u;
    // 0x25ab3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25AB38u, 0x25AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB40u;
label_25ab40:
    // 0x25ab40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ab40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25ab44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25AB44u;
    SET_GPR_U32(ctx, 31, 0x25AB4Cu);
    ctx->pc = 0x25AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB44u;
    // 0x25ab48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25AB44u, 0x25AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB4Cu;
label_25ab4c:
    // 0x25ab4c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25ab4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_25ab50:
    // 0x25ab50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25ab50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ab54: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x25ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x25ab58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ab58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ab5c: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x25ab5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ab60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ab60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ab64: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25ab68: 0x3e00008  jr          $ra
    ctx->pc = 0x25AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB68u;
        // 0x25ab6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AB70u;
}
