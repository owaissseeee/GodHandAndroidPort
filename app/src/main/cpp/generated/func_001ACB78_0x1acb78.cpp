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

// Function: func_001ACB78
// Address: 0x1acb78 - 0x1ad0d0
void func_001ACB78_0x1acb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ACB78_0x1acb78");
#endif

    switch (ctx->pc) {
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1acee0u: goto label_1acee0;
        case 0x1ad06cu: goto label_1ad06c;
        default: break;
    }

    ctx->pc = 0x1acb78u;

    // 0x1acb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1acb7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1acb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1acb80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1acb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1acb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb88: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1acb88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1acb8c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1acb8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1acb90: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x1ACB90u;
    {
        const bool branch_taken_0x1acb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB90u;
        // 0x1acb94: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb90) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1ACB98u;
    // 0x1acb98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acb9c: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x1acba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1acba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1acba4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1acba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1acba8: 0x800008  jr          $a0
    ctx->pc = 0x1ACBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACBB0u: goto label_1acbb0;
            case 0x1ACBD4u: goto label_1acbd4;
            case 0x1ACC08u: goto label_1acc08;
            case 0x1ACCD4u: goto label_1accd4;
            case 0x1ACDBCu: goto label_1acdbc;
            case 0x1ACEE8u: goto label_1acee8;
            case 0x1AD0B0u: goto label_1ad0b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACBA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ACBB0u;
label_1acbb0:
    // 0x1acbb0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1ACBB0u;
    SET_GPR_U32(ctx, 31, 0x1ACBB8u);
    ctx->pc = 0x1ACBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBB0u;
    // 0x1acbb4: 0xae000794  sw          $zero, 0x794($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1940), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1ACBB0u, 0x1ACBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBB8u;
label_1acbb8:
    // 0x1acbb8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1acbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1acbbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1acbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acbc0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1acbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1acbc4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x1acbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1acbc8: 0xa602061e  sh          $v0, 0x61E($s0)
    ctx->pc = 0x1acbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1566), (uint16_t)GPR_U32(ctx, 2));
    // 0x1acbcc: 0xa2000620  sb          $zero, 0x620($s0)
    ctx->pc = 0x1acbccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1568), (uint8_t)GPR_U32(ctx, 0));
    // 0x1acbd0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1acbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1acbd4:
    // 0x1acbd4: 0x9602061e  lhu         $v0, 0x61E($s0)
    ctx->pc = 0x1acbd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1566)));
    // 0x1acbd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1acbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1acbdc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1acbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1acbe0: 0x1c600137  bgtz        $v1, . + 4 + (0x137 << 2)
    ctx->pc = 0x1ACBE0u;
    {
        const bool branch_taken_0x1acbe0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1ACBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBE0u;
        // 0x1acbe4: 0xa602061e  sh          $v0, 0x61E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1566), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbe0) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1ACBE8u;
    // 0x1acbe8: 0x92020620  lbu         $v0, 0x620($s0)
    ctx->pc = 0x1acbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1acbec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1acbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1acbf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1acbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acbf4: 0xa603061e  sh          $v1, 0x61E($s0)
    ctx->pc = 0x1acbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1566), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acbf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1acbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1acbfc: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x1acbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acc00: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x1ACC00u;
    {
        const bool branch_taken_0x1acc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC00u;
        // 0x1acc04: 0xa2020620  sb          $v0, 0x620($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc00) {
            ctx->pc = 0x1AD0BCu;
            goto label_1ad0bc;
        }
    }
    ctx->pc = 0x1ACC08u;
label_1acc08:
    // 0x1acc08: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc10: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1acc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1acc14: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1acc14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1acc18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1acc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acc1c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acc20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1acc20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1acc24: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1acc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1acc28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acc28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acc2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACC2Cu;
    {
        const bool branch_taken_0x1acc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC2Cu;
        // 0x1acc30: 0xe6000794  swc1        $f0, 0x794($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc2c) {
            ctx->pc = 0x1ACC40u;
            goto label_1acc40;
        }
    }
    ctx->pc = 0x1ACC34u;
    // 0x1acc34: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acc38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC38u;
    {
        const bool branch_taken_0x1acc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC38u;
        // 0x1acc3c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc38) {
            ctx->pc = 0x1ACC44u;
            goto label_1acc44;
        }
    }
    ctx->pc = 0x1ACC40u;
label_1acc40:
    // 0x1acc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc44:
    // 0x1acc44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACC44u;
    {
        const bool branch_taken_0x1acc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC44u;
        // 0x1acc48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc44) {
            ctx->pc = 0x1ACC78u;
            goto label_1acc78;
        }
    }
    ctx->pc = 0x1ACC4Cu;
    // 0x1acc4c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acc4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acc50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acc54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACC54u;
    {
        const bool branch_taken_0x1acc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC54u;
        // 0x1acc58: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc54) {
            ctx->pc = 0x1ACC68u;
            goto label_1acc68;
        }
    }
    ctx->pc = 0x1ACC5Cu;
    // 0x1acc5c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acc60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC60u;
    {
        const bool branch_taken_0x1acc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC60u;
        // 0x1acc64: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc60) {
            ctx->pc = 0x1ACC6Cu;
            goto label_1acc6c;
        }
    }
    ctx->pc = 0x1ACC68u;
label_1acc68:
    // 0x1acc68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc6c:
    // 0x1acc6c: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acc70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1acc70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1acc74: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1acc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1acc78:
    // 0x1acc78: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acc78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acc7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acc80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acc84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACC84u;
    {
        const bool branch_taken_0x1acc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC84u;
        // 0x1acc88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc84) {
            ctx->pc = 0x1ACC98u;
            goto label_1acc98;
        }
    }
    ctx->pc = 0x1ACC8Cu;
    // 0x1acc8c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC90u;
    {
        const bool branch_taken_0x1acc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC90u;
        // 0x1acc94: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc90) {
            ctx->pc = 0x1ACC9Cu;
            goto label_1acc9c;
        }
    }
    ctx->pc = 0x1ACC98u;
label_1acc98:
    // 0x1acc98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc9c:
    // 0x1acc9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACC9Cu;
    {
        const bool branch_taken_0x1acc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC9Cu;
        // 0x1acca0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc9c) {
            ctx->pc = 0x1ACCCCu;
            goto label_1acccc;
        }
    }
    ctx->pc = 0x1ACCA4u;
    // 0x1acca4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acca8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1accac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACCACu;
    {
        const bool branch_taken_0x1accac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCACu;
        // 0x1accb0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1accac) {
            ctx->pc = 0x1ACCC0u;
            goto label_1accc0;
        }
    }
    ctx->pc = 0x1ACCB4u;
    // 0x1accb4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1accb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1accb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACCB8u;
    {
        const bool branch_taken_0x1accb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCB8u;
        // 0x1accbc: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1accb8) {
            ctx->pc = 0x1ACCC4u;
            goto label_1accc4;
        }
    }
    ctx->pc = 0x1ACCC0u;
label_1accc0:
    // 0x1accc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1accc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1accc4:
    // 0x1accc4: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1accc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1accc8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1accc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1acccc:
    // 0x1acccc: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x1ACCCCu;
    {
        const bool branch_taken_0x1acccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCCCu;
        // 0x1accd0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acccc) {
            ctx->pc = 0x1AD08Cu;
            goto label_1ad08c;
        }
    }
    ctx->pc = 0x1ACCD4u;
label_1accd4:
    // 0x1accd4: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1accd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1accd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1accd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1accdc: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1accdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1acce0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1acce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1acce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1acce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acce8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1accec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1accecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1accf0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1accf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1accf4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1accf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1accf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACCF8u;
    {
        const bool branch_taken_0x1accf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCF8u;
        // 0x1accfc: 0xe6000794  swc1        $f0, 0x794($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1accf8) {
            ctx->pc = 0x1ACD0Cu;
            goto label_1acd0c;
        }
    }
    ctx->pc = 0x1ACD00u;
    // 0x1acd00: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acd04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACD04u;
    {
        const bool branch_taken_0x1acd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD04u;
        // 0x1acd08: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd04) {
            ctx->pc = 0x1ACD10u;
            goto label_1acd10;
        }
    }
    ctx->pc = 0x1ACD0Cu;
label_1acd0c:
    // 0x1acd0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acd10:
    // 0x1acd10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACD10u;
    {
        const bool branch_taken_0x1acd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD10u;
        // 0x1acd14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd10) {
            ctx->pc = 0x1ACD44u;
            goto label_1acd44;
        }
    }
    ctx->pc = 0x1ACD18u;
    // 0x1acd18: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acd18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acd1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acd20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACD20u;
    {
        const bool branch_taken_0x1acd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD20u;
        // 0x1acd24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd20) {
            ctx->pc = 0x1ACD34u;
            goto label_1acd34;
        }
    }
    ctx->pc = 0x1ACD28u;
    // 0x1acd28: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acd2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACD2Cu;
    {
        const bool branch_taken_0x1acd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD2Cu;
        // 0x1acd30: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd2c) {
            ctx->pc = 0x1ACD38u;
            goto label_1acd38;
        }
    }
    ctx->pc = 0x1ACD34u;
label_1acd34:
    // 0x1acd34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acd38:
    // 0x1acd38: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acd3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1acd3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1acd40: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1acd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1acd44:
    // 0x1acd44: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acd44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acd48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acd4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acd50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACD50u;
    {
        const bool branch_taken_0x1acd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD50u;
        // 0x1acd54: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd50) {
            ctx->pc = 0x1ACD64u;
            goto label_1acd64;
        }
    }
    ctx->pc = 0x1ACD58u;
    // 0x1acd58: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acd5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACD5Cu;
    {
        const bool branch_taken_0x1acd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD5Cu;
        // 0x1acd60: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd5c) {
            ctx->pc = 0x1ACD68u;
            goto label_1acd68;
        }
    }
    ctx->pc = 0x1ACD64u;
label_1acd64:
    // 0x1acd64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acd64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acd68:
    // 0x1acd68: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACD68u;
    {
        const bool branch_taken_0x1acd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acd68) {
            ctx->pc = 0x1ACD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACD68u;
            // 0x1acd6c: 0x9602061e  lhu         $v0, 0x61E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1566)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACDA0u;
            goto label_1acda0;
        }
    }
    ctx->pc = 0x1ACD70u;
    // 0x1acd70: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acd74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acd78: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acd7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACD7Cu;
    {
        const bool branch_taken_0x1acd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD7Cu;
        // 0x1acd80: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd7c) {
            ctx->pc = 0x1ACD90u;
            goto label_1acd90;
        }
    }
    ctx->pc = 0x1ACD84u;
    // 0x1acd84: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acd88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACD88u;
    {
        const bool branch_taken_0x1acd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD88u;
        // 0x1acd8c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd88) {
            ctx->pc = 0x1ACD94u;
            goto label_1acd94;
        }
    }
    ctx->pc = 0x1ACD90u;
label_1acd90:
    // 0x1acd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acd94:
    // 0x1acd94: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acd98: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1acd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1acd9c: 0x9602061e  lhu         $v0, 0x61E($s0)
    ctx->pc = 0x1acd9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1566)));
label_1acda0:
    // 0x1acda0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1acda4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1acda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1acda8: 0xa602061e  sh          $v0, 0x61E($s0)
    ctx->pc = 0x1acda8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1566), (uint16_t)GPR_U32(ctx, 2));
    // 0x1acdac: 0x1c6000b7  bgtz        $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1ACDACu;
    {
        const bool branch_taken_0x1acdac = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1ACDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDACu;
        // 0x1acdb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdac) {
            ctx->pc = 0x1AD08Cu;
            goto label_1ad08c;
        }
    }
    ctx->pc = 0x1ACDB4u;
    // 0x1acdb4: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1ACDB4u;
    {
        const bool branch_taken_0x1acdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB4u;
        // 0x1acdb8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdb4) {
            ctx->pc = 0x1AD08Cu;
            goto label_1ad08c;
        }
    }
    ctx->pc = 0x1ACDBCu;
label_1acdbc:
    // 0x1acdbc: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acdc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acdc4: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x1acdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x1acdc8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1acdc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1acdcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1acdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acdd0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acdd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acdd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1acdd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1acdd8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1acdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1acddc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acde0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACDE0u;
    {
        const bool branch_taken_0x1acde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDE0u;
        // 0x1acde4: 0xe6000794  swc1        $f0, 0x794($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acde0) {
            ctx->pc = 0x1ACDF4u;
            goto label_1acdf4;
        }
    }
    ctx->pc = 0x1ACDE8u;
    // 0x1acde8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acdec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACDECu;
    {
        const bool branch_taken_0x1acdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDECu;
        // 0x1acdf0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdec) {
            ctx->pc = 0x1ACDF8u;
            goto label_1acdf8;
        }
    }
    ctx->pc = 0x1ACDF4u;
label_1acdf4:
    // 0x1acdf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acdf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acdf8:
    // 0x1acdf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACDF8u;
    {
        const bool branch_taken_0x1acdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDF8u;
        // 0x1acdfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdf8) {
            ctx->pc = 0x1ACE2Cu;
            goto label_1ace2c;
        }
    }
    ctx->pc = 0x1ACE00u;
    // 0x1ace00: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1ace00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ace04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ace04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ace08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE08u;
    {
        const bool branch_taken_0x1ace08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE08u;
        // 0x1ace0c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace08) {
            ctx->pc = 0x1ACE1Cu;
            goto label_1ace1c;
        }
    }
    ctx->pc = 0x1ACE10u;
    // 0x1ace10: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ace10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ace14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACE14u;
    {
        const bool branch_taken_0x1ace14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE14u;
        // 0x1ace18: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace14) {
            ctx->pc = 0x1ACE20u;
            goto label_1ace20;
        }
    }
    ctx->pc = 0x1ACE1Cu;
label_1ace1c:
    // 0x1ace1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ace1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace20:
    // 0x1ace20: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1ace20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ace24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ace24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ace28: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1ace28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1ace2c:
    // 0x1ace2c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1ace2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ace30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ace30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ace34: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ace34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ace38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE38u;
    {
        const bool branch_taken_0x1ace38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE38u;
        // 0x1ace3c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace38) {
            ctx->pc = 0x1ACE4Cu;
            goto label_1ace4c;
        }
    }
    ctx->pc = 0x1ACE40u;
    // 0x1ace40: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ace40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ace44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACE44u;
    {
        const bool branch_taken_0x1ace44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE44u;
        // 0x1ace48: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace44) {
            ctx->pc = 0x1ACE50u;
            goto label_1ace50;
        }
    }
    ctx->pc = 0x1ACE4Cu;
label_1ace4c:
    // 0x1ace4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ace4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace50:
    // 0x1ace50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACE50u;
    {
        const bool branch_taken_0x1ace50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE50u;
        // 0x1ace54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace50) {
            ctx->pc = 0x1ACE80u;
            goto label_1ace80;
        }
    }
    ctx->pc = 0x1ACE58u;
    // 0x1ace58: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1ace58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ace5c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ace5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ace60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE60u;
    {
        const bool branch_taken_0x1ace60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE60u;
        // 0x1ace64: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace60) {
            ctx->pc = 0x1ACE74u;
            goto label_1ace74;
        }
    }
    ctx->pc = 0x1ACE68u;
    // 0x1ace68: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ace6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACE6Cu;
    {
        const bool branch_taken_0x1ace6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE6Cu;
        // 0x1ace70: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace6c) {
            ctx->pc = 0x1ACE78u;
            goto label_1ace78;
        }
    }
    ctx->pc = 0x1ACE74u;
label_1ace74:
    // 0x1ace74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ace74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace78:
    // 0x1ace78: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1ace78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ace7c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1ace7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1ace80:
    // 0x1ace80: 0xc6010794  lwc1        $f1, 0x794($s0)
    ctx->pc = 0x1ace80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ace84: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1ace84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1ace88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ace88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1ace8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ace8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ace90: 0x0  nop
    ctx->pc = 0x1ace90u;
    // NOP
    // 0x1ace94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ace94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ace98: 0x0  nop
    ctx->pc = 0x1ace98u;
    // NOP
    // 0x1ace9c: 0x45020089  bc1fl       . + 4 + (0x89 << 2)
    ctx->pc = 0x1ACE9Cu;
    {
        const bool branch_taken_0x1ace9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ace9c) {
            ctx->pc = 0x1ACEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACE9Cu;
            // 0x1acea0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD0C4u;
            goto label_1ad0c4;
        }
    }
    ctx->pc = 0x1ACEA4u;
    // 0x1acea4: 0x8e040628  lw          $a0, 0x628($s0)
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1576)));
    // 0x1acea8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACEA8u;
    {
        const bool branch_taken_0x1acea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEA8u;
        // 0x1aceac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acea8) {
            ctx->pc = 0x1ACEE0u;
            goto label_1acee0;
        }
    }
    ctx->pc = 0x1ACEB0u;
    // 0x1aceb0: 0xc07f5c6  jal         func_1FD718
    ctx->pc = 0x1ACEB0u;
    SET_GPR_U32(ctx, 31, 0x1ACEB8u);
    ctx->pc = 0x1ACEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACEB0u;
    // 0x1aceb4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x1ACEB0u, 0x1ACEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEB8u;
label_1aceb8:
    // 0x1aceb8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1aceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1acebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acec0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1acec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1acec4: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x1acec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1acec8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1acec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aceccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aced0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aced0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aced4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1aced4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aced8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1ACED8u;
    SET_GPR_U32(ctx, 31, 0x1ACEE0u);
    ctx->pc = 0x1ACEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACED8u;
    // 0x1acedc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1ACED8u, 0x1ACEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEE0u;
label_1acee0:
    // 0x1acee0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1ACEE0u;
    {
        const bool branch_taken_0x1acee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEE0u;
        // 0x1acee4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acee0) {
            ctx->pc = 0x1AD08Cu;
            goto label_1ad08c;
        }
    }
    ctx->pc = 0x1ACEE8u;
label_1acee8:
    // 0x1acee8: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aceec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acef0: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1acef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1acef4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1acef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1acef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1acef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acefc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acf00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1acf00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1acf04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1acf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1acf08: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acf08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acf0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF0Cu;
    {
        const bool branch_taken_0x1acf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF0Cu;
        // 0x1acf10: 0xe6000794  swc1        $f0, 0x794($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf0c) {
            ctx->pc = 0x1ACF20u;
            goto label_1acf20;
        }
    }
    ctx->pc = 0x1ACF14u;
    // 0x1acf14: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acf18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACF18u;
    {
        const bool branch_taken_0x1acf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF18u;
        // 0x1acf1c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf18) {
            ctx->pc = 0x1ACF24u;
            goto label_1acf24;
        }
    }
    ctx->pc = 0x1ACF20u;
label_1acf20:
    // 0x1acf20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acf24:
    // 0x1acf24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACF24u;
    {
        const bool branch_taken_0x1acf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF24u;
        // 0x1acf28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf24) {
            ctx->pc = 0x1ACF58u;
            goto label_1acf58;
        }
    }
    ctx->pc = 0x1ACF2Cu;
    // 0x1acf2c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acf2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acf30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acf34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF34u;
    {
        const bool branch_taken_0x1acf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF34u;
        // 0x1acf38: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf34) {
            ctx->pc = 0x1ACF48u;
            goto label_1acf48;
        }
    }
    ctx->pc = 0x1ACF3Cu;
    // 0x1acf3c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acf40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACF40u;
    {
        const bool branch_taken_0x1acf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF40u;
        // 0x1acf44: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf40) {
            ctx->pc = 0x1ACF4Cu;
            goto label_1acf4c;
        }
    }
    ctx->pc = 0x1ACF48u;
label_1acf48:
    // 0x1acf48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acf4c:
    // 0x1acf4c: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acf50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1acf50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1acf54: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1acf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1acf58:
    // 0x1acf58: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acf58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acf5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acf60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acf60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acf64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF64u;
    {
        const bool branch_taken_0x1acf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF64u;
        // 0x1acf68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf64) {
            ctx->pc = 0x1ACF78u;
            goto label_1acf78;
        }
    }
    ctx->pc = 0x1ACF6Cu;
    // 0x1acf6c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acf70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACF70u;
    {
        const bool branch_taken_0x1acf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF70u;
        // 0x1acf74: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf70) {
            ctx->pc = 0x1ACF7Cu;
            goto label_1acf7c;
        }
    }
    ctx->pc = 0x1ACF78u;
label_1acf78:
    // 0x1acf78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acf78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acf7c:
    // 0x1acf7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACF7Cu;
    {
        const bool branch_taken_0x1acf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF7Cu;
        // 0x1acf80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf7c) {
            ctx->pc = 0x1ACFACu;
            goto label_1acfac;
        }
    }
    ctx->pc = 0x1ACF84u;
    // 0x1acf84: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acf84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acf88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acf88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acf8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF8Cu;
    {
        const bool branch_taken_0x1acf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF8Cu;
        // 0x1acf90: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf8c) {
            ctx->pc = 0x1ACFA0u;
            goto label_1acfa0;
        }
    }
    ctx->pc = 0x1ACF94u;
    // 0x1acf94: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acf98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACF98u;
    {
        const bool branch_taken_0x1acf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF98u;
        // 0x1acf9c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf98) {
            ctx->pc = 0x1ACFA4u;
            goto label_1acfa4;
        }
    }
    ctx->pc = 0x1ACFA0u;
label_1acfa0:
    // 0x1acfa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acfa4:
    // 0x1acfa4: 0xc6000794  lwc1        $f0, 0x794($s0)
    ctx->pc = 0x1acfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acfa8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1acfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1acfac:
    // 0x1acfac: 0xc6010794  lwc1        $f1, 0x794($s0)
    ctx->pc = 0x1acfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1acfb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1acfb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acfb4: 0x0  nop
    ctx->pc = 0x1acfb4u;
    // NOP
    // 0x1acfb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1acfb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1acfbc: 0x0  nop
    ctx->pc = 0x1acfbcu;
    // NOP
    // 0x1acfc0: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x1ACFC0u;
    {
        const bool branch_taken_0x1acfc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFC0u;
        // 0x1acfc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfc0) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1ACFC8u;
    // 0x1acfc8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acfcc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acfd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACFD0u;
    {
        const bool branch_taken_0x1acfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD0u;
        // 0x1acfd4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd0) {
            ctx->pc = 0x1ACFE4u;
            goto label_1acfe4;
        }
    }
    ctx->pc = 0x1ACFD8u;
    // 0x1acfd8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1acfdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACFDCu;
    {
        const bool branch_taken_0x1acfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFDCu;
        // 0x1acfe0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfdc) {
            ctx->pc = 0x1ACFE8u;
            goto label_1acfe8;
        }
    }
    ctx->pc = 0x1ACFE4u;
label_1acfe4:
    // 0x1acfe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acfe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acfe8:
    // 0x1acfe8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACFE8u;
    {
        const bool branch_taken_0x1acfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFE8u;
        // 0x1acfec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfe8) {
            ctx->pc = 0x1AD014u;
            goto label_1ad014;
        }
    }
    ctx->pc = 0x1ACFF0u;
    // 0x1acff0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1acff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1acff4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1acff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACFF8u;
    {
        const bool branch_taken_0x1acff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFF8u;
        // 0x1acffc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acff8) {
            ctx->pc = 0x1AD00Cu;
            goto label_1ad00c;
        }
    }
    ctx->pc = 0x1AD000u;
    // 0x1ad000: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ad004: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD004u;
    {
        const bool branch_taken_0x1ad004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD004u;
        // 0x1ad008: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad004) {
            ctx->pc = 0x1AD010u;
            goto label_1ad010;
        }
    }
    ctx->pc = 0x1AD00Cu;
label_1ad00c:
    // 0x1ad00c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad010:
    // 0x1ad010: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ad010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1ad014:
    // 0x1ad014: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1ad014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ad018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad01c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD020u;
    {
        const bool branch_taken_0x1ad020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD020u;
        // 0x1ad024: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad020) {
            ctx->pc = 0x1AD034u;
            goto label_1ad034;
        }
    }
    ctx->pc = 0x1AD028u;
    // 0x1ad028: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ad028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ad02c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD02Cu;
    {
        const bool branch_taken_0x1ad02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD02Cu;
        // 0x1ad030: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad02c) {
            ctx->pc = 0x1AD038u;
            goto label_1ad038;
        }
    }
    ctx->pc = 0x1AD034u;
label_1ad034:
    // 0x1ad034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad038:
    // 0x1ad038: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD038u;
    {
        const bool branch_taken_0x1ad038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD038u;
        // 0x1ad03c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad038) {
            ctx->pc = 0x1AD064u;
            goto label_1ad064;
        }
    }
    ctx->pc = 0x1AD040u;
    // 0x1ad040: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1ad040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ad044: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD048u;
    {
        const bool branch_taken_0x1ad048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD048u;
        // 0x1ad04c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad048) {
            ctx->pc = 0x1AD05Cu;
            goto label_1ad05c;
        }
    }
    ctx->pc = 0x1AD050u;
    // 0x1ad050: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ad050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ad054: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD054u;
    {
        const bool branch_taken_0x1ad054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD054u;
        // 0x1ad058: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad054) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1AD05Cu;
label_1ad05c:
    // 0x1ad05c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad060:
    // 0x1ad060: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ad060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1ad064:
    // 0x1ad064: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1AD064u;
    SET_GPR_U32(ctx, 31, 0x1AD06Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1AD064u, 0x1AD06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD06Cu;
label_1ad06c:
    // 0x1ad06c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ad06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ad070: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD070u;
    {
        const bool branch_taken_0x1ad070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD070u;
        // 0x1ad074: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad070) {
            ctx->pc = 0x1AD08Cu;
            goto label_1ad08c;
        }
    }
    ctx->pc = 0x1AD078u;
    // 0x1ad078: 0x82020620  lb          $v0, 0x620($s0)
    ctx->pc = 0x1ad078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1ad07c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1ad07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ad080: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD080u;
    {
        const bool branch_taken_0x1ad080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD080u;
        // 0x1ad084: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad080) {
            ctx->pc = 0x1AD098u;
            goto label_1ad098;
        }
    }
    ctx->pc = 0x1AD088u;
    // 0x1ad088: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ad088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ad08c:
    // 0x1ad08c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ad08cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad090: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AD090u;
    {
        const bool branch_taken_0x1ad090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD090u;
        // 0x1ad094: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad090) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1AD098u;
label_1ad098:
    // 0x1ad098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad09c: 0xa602061e  sh          $v0, 0x61E($s0)
    ctx->pc = 0x1ad09cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1566), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ad0a0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x1ad0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad0a4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ad0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad0a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD0A8u;
    {
        const bool branch_taken_0x1ad0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0A8u;
        // 0x1ad0ac: 0xae000794  sw          $zero, 0x794($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0a8) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1AD0B0u;
label_1ad0b0:
    // 0x1ad0b0: 0xae000618  sw          $zero, 0x618($s0)
    ctx->pc = 0x1ad0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1560), GPR_U32(ctx, 0));
    // 0x1ad0b4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ad0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad0b8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ad0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ad0bc:
    // 0x1ad0bc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ad0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1ad0c0:
    // 0x1ad0c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ad0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad0c4:
    // 0x1ad0c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0C8u;
        // 0x1ad0cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD0D0u;
}
