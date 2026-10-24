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

// Function: func_0036BE00
// Address: 0x36be00 - 0x36bed8
void func_0036BE00_0x36be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036BE00_0x36be00");
#endif

    switch (ctx->pc) {
        case 0x36be30u: goto label_36be30;
        case 0x36be50u: goto label_36be50;
        case 0x36be78u: goto label_36be78;
        case 0x36be80u: goto label_36be80;
        case 0x36be8cu: goto label_36be8c;
        case 0x36be98u: goto label_36be98;
        case 0x36bea0u: goto label_36bea0;
        case 0x36bea8u: goto label_36bea8;
        case 0x36beb0u: goto label_36beb0;
        case 0x36beb8u: goto label_36beb8;
        case 0x36bec0u: goto label_36bec0;
        default: break;
    }

    ctx->pc = 0x36be00u;

    // 0x36be00: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x36be00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x36be04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36be08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36be08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36be0c: 0x24636ce0  addiu       $v1, $v1, 0x6CE0
    ctx->pc = 0x36be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27872));
    // 0x36be10: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x36be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x36be14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36be18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36be1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36be1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36be24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36be24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be28: 0xc0dafb6  jal         func_36BED8
    ctx->pc = 0x36BE28u;
    SET_GPR_U32(ctx, 31, 0x36BE30u);
    ctx->pc = 0x36BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE28u;
    // 0x36be2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BED8u, 0x36BE28u, 0x36BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE30u;
label_36be30:
    // 0x36be30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be34: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x36BE34u;
    {
        const bool branch_taken_0x36be34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be34) {
            ctx->pc = 0x36BE70u;
            goto label_36be70;
        }
    }
    ctx->pc = 0x36BE3Cu;
    // 0x36be3c: 0x3c03ff03  lui         $v1, 0xFF03
    ctx->pc = 0x36be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65283 << 16));
    // 0x36be40: 0x3463ff05  ori         $v1, $v1, 0xFF05
    ctx->pc = 0x36be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65285);
    // 0x36be44: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x36BE44u;
    {
        const bool branch_taken_0x36be44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36be44) {
            ctx->pc = 0x36BE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36BE44u;
            // 0x36be48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36BEC8u;
            goto label_36bec8;
        }
    }
    ctx->pc = 0x36BE4Cu;
    // 0x36be4c: 0x0  nop
    ctx->pc = 0x36be4cu;
    // NOP
label_36be50:
    // 0x36be50: 0x0  nop
    ctx->pc = 0x36be50u;
    // NOP
    // 0x36be54: 0x0  nop
    ctx->pc = 0x36be54u;
    // NOP
    // 0x36be58: 0x0  nop
    ctx->pc = 0x36be58u;
    // NOP
    // 0x36be5c: 0x0  nop
    ctx->pc = 0x36be5cu;
    // NOP
    // 0x36be60: 0x0  nop
    ctx->pc = 0x36be60u;
    // NOP
    // 0x36be64: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BE64u;
    {
        const bool branch_taken_0x36be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be64) {
            ctx->pc = 0x36BE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36be50;
        }
    }
    ctx->pc = 0x36BE6Cu;
    // 0x36be6c: 0x0  nop
    ctx->pc = 0x36be6cu;
    // NOP
label_36be70:
    // 0x36be70: 0xc0dafd4  jal         func_36BF50
    ctx->pc = 0x36BE70u;
    SET_GPR_U32(ctx, 31, 0x36BE78u);
    ctx->pc = 0x36BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BF50u, 0x36BE70u, 0x36BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE78u;
label_36be78:
    // 0x36be78: 0xc0dafd6  jal         func_36BF58
    ctx->pc = 0x36BE78u;
    SET_GPR_U32(ctx, 31, 0x36BE80u);
    ctx->pc = 0x36BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE78u;
    // 0x36be7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BF58u, 0x36BE78u, 0x36BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE80u;
label_36be80:
    // 0x36be80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be84: 0xc0db02c  jal         func_36C0B0
    ctx->pc = 0x36BE84u;
    SET_GPR_U32(ctx, 31, 0x36BE8Cu);
    ctx->pc = 0x36BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE84u;
    // 0x36be88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C0B0u, 0x36BE84u, 0x36BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE8Cu;
label_36be8c:
    // 0x36be8c: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36be90: 0xc0da798  jal         func_369E60
    ctx->pc = 0x36BE90u;
    SET_GPR_U32(ctx, 31, 0x36BE98u);
    ctx->pc = 0x36BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE90u;
    // 0x36be94: 0x8c506d38  lw          $s0, 0x6D38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27960)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369E60u, 0x36BE90u, 0x36BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE98u;
label_36be98:
    // 0x36be98: 0xc0da8de  jal         func_36A378
    ctx->pc = 0x36BE98u;
    SET_GPR_U32(ctx, 31, 0x36BEA0u);
    ctx->pc = 0x36A378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A378u, 0x36BE98u, 0x36BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEA0u;
label_36bea0:
    // 0x36bea0: 0xc0dafd8  jal         func_36BF60
    ctx->pc = 0x36BEA0u;
    SET_GPR_U32(ctx, 31, 0x36BEA8u);
    ctx->pc = 0x36BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEA0u;
    // 0x36bea4: 0x260417e0  addiu       $a0, $s0, 0x17E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BF60u, 0x36BEA0u, 0x36BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEA8u;
label_36bea8:
    // 0x36bea8: 0xc0db00e  jal         func_36C038
    ctx->pc = 0x36BEA8u;
    SET_GPR_U32(ctx, 31, 0x36BEB0u);
    ctx->pc = 0x36C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C038u, 0x36BEA8u, 0x36BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEB0u;
label_36beb0:
    // 0x36beb0: 0xc0db02a  jal         func_36C0A8
    ctx->pc = 0x36BEB0u;
    SET_GPR_U32(ctx, 31, 0x36BEB8u);
    ctx->pc = 0x36C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C0A8u, 0x36BEB0u, 0x36BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEB8u;
label_36beb8:
    // 0x36beb8: 0xc0db18a  jal         func_36C628
    ctx->pc = 0x36BEB8u;
    SET_GPR_U32(ctx, 31, 0x36BEC0u);
    ctx->pc = 0x36C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C628u, 0x36BEB8u, 0x36BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEC0u;
label_36bec0:
    // 0x36bec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36bec8:
    // 0x36bec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36bec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36becc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36beccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bed0: 0x3e00008  jr          $ra
    ctx->pc = 0x36BED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BED0u;
        // 0x36bed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BED8u;
}
