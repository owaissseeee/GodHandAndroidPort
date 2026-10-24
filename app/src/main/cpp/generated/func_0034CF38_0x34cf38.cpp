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

// Function: func_0034CF38
// Address: 0x34cf38 - 0x34d048
void func_0034CF38_0x34cf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CF38_0x34cf38");
#endif

    switch (ctx->pc) {
        case 0x34cf6cu: goto label_34cf6c;
        case 0x34cfe0u: goto label_34cfe0;
        default: break;
    }

    ctx->pc = 0x34cf38u;

    // 0x34cf38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34cf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34cf3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34cf40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34cf40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34cf48: 0x26500d30  addiu       $s0, $s2, 0xD30
    ctx->pc = 0x34cf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x34cf4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34cf54: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34cf58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x34cf58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf5c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34cf60: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34cf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34cf64: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x34CF64u;
    SET_GPR_U32(ctx, 31, 0x34CF6Cu);
    ctx->pc = 0x34CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CF64u;
    // 0x34cf68: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x34CF64u, 0x34CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF6Cu;
label_34cf6c:
    // 0x34cf6c: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x34cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x34cf70: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x34cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x34cf74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34cf78: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CF78u;
    {
        const bool branch_taken_0x34cf78 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x34CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF78u;
        // 0x34cf7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf78) {
            ctx->pc = 0x34CF90u;
            goto label_34cf90;
        }
    }
    ctx->pc = 0x34CF80u;
    // 0x34cf80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34cf84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x34cf84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf88: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x34CF88u;
    {
        const bool branch_taken_0x34cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF88u;
        // 0x34cf8c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf88) {
            ctx->pc = 0x34CFD8u;
            goto label_34cfd8;
        }
    }
    ctx->pc = 0x34CF90u;
label_34cf90:
    // 0x34cf90: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x34cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x34cf94: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x34cf94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cf98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34cf9c: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x34cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x34cfa0: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x34cfa0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34cfa4: 0x2466001f  addiu       $a2, $v1, 0x1F
    ctx->pc = 0x34cfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x34cfa8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x34cfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cfac: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x34cfacu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x34cfb0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x34cfb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x34cfb4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x34cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x34cfb8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x34cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cfbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34cfc0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x34cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34cfc4: 0x8c650f2c  lw          $a1, 0xF2C($v1)
    ctx->pc = 0x34cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3884)));
    // 0x34cfc8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x34cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x34cfcc: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x34cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x34cfd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34cfd4: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x34cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
label_34cfd8:
    // 0x34cfd8: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x34CFD8u;
    SET_GPR_U32(ctx, 31, 0x34CFE0u);
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x34CFD8u, 0x34CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CFE0u;
label_34cfe0:
    // 0x34cfe0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x34cfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cfe4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34cfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34cfe8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34cfe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34cfec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34cfecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34cff0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34cff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34cff4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34cff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34cff8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34cff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34cffc: 0x3e00008  jr          $ra
    ctx->pc = 0x34CFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFFCu;
        // 0x34d000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D004u;
    // 0x34d004: 0x0  nop
    ctx->pc = 0x34d004u;
    // NOP
    // 0x34d008: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34d008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d00c: 0x0  nop
    ctx->pc = 0x34d00cu;
    // NOP
    // 0x34d010: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d014: 0x0  nop
    ctx->pc = 0x34d014u;
    // NOP
    // 0x34d018: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34d018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d01c: 0x0  nop
    ctx->pc = 0x34d01cu;
    // NOP
    // 0x34d020: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d024: 0x0  nop
    ctx->pc = 0x34d024u;
    // NOP
    // 0x34d028: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d02c: 0x0  nop
    ctx->pc = 0x34d02cu;
    // NOP
    // 0x34d030: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d034: 0x0  nop
    ctx->pc = 0x34d034u;
    // NOP
    // 0x34d038: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34d038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d03c: 0x0  nop
    ctx->pc = 0x34d03cu;
    // NOP
    // 0x34d040: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d044: 0x0  nop
    ctx->pc = 0x34d044u;
    // NOP
    ctx->pc = 0x34d048u;
}
