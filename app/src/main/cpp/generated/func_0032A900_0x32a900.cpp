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

// Function: func_0032A900
// Address: 0x32a900 - 0x32a988
void func_0032A900_0x32a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A900_0x32a900");
#endif

    switch (ctx->pc) {
        case 0x32a964u: goto label_32a964;
        case 0x32a978u: goto label_32a978;
        default: break;
    }

    ctx->pc = 0x32a900u;

    // 0x32a900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a904: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A904u;
    {
        const bool branch_taken_0x32a904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A904u;
        // 0x32a908: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a904) {
            ctx->pc = 0x32A920u;
            goto label_32a920;
        }
    }
    ctx->pc = 0x32A90Cu;
    // 0x32a90c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a914: 0x24842258  addiu       $a0, $a0, 0x2258
    ctx->pc = 0x32a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8792));
    // 0x32a918: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32A918u;
    ctx->pc = 0x32A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A918u;
    // 0x32a91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A920u;
label_32a920:
    // 0x32a920: 0x28a2fff1  slti        $v0, $a1, -0xF
    ctx->pc = 0x32a920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x32a924: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A924u;
    {
        const bool branch_taken_0x32a924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A924u;
        // 0x32a928: 0x28a20010  slti        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a924) {
            ctx->pc = 0x32A938u;
            goto label_32a938;
        }
    }
    ctx->pc = 0x32A92Cu;
    // 0x32a92c: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x32a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x32a930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32A930u;
    {
        const bool branch_taken_0x32a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A930u;
        // 0x32a934: 0xa4820046  sh          $v0, 0x46($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a930) {
            ctx->pc = 0x32A948u;
            goto label_32a948;
        }
    }
    ctx->pc = 0x32A938u;
label_32a938:
    // 0x32a938: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A938u;
    {
        const bool branch_taken_0x32a938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a938) {
            ctx->pc = 0x32A93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A938u;
            // 0x32a93c: 0xa4850046  sh          $a1, 0x46($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A948u;
            goto label_32a948;
        }
    }
    ctx->pc = 0x32A940u;
    // 0x32a940: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x32a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32a944: 0xa4820046  sh          $v0, 0x46($a0)
    ctx->pc = 0x32a944u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
label_32a948:
    // 0x32a948: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x32a948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x32a94c: 0x8c437410  lw          $v1, 0x7410($v0)
    ctx->pc = 0x32a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C7410u));
    // 0x32a950: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A950u;
    {
        const bool branch_taken_0x32a950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a950) {
            ctx->pc = 0x32A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A950u;
            // 0x32a954: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A970u;
            goto label_32a970;
        }
    }
    ctx->pc = 0x32A958u;
    // 0x32a958: 0x84850046  lh          $a1, 0x46($a0)
    ctx->pc = 0x32a958u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x32a95c: 0xc0c9904  jal         func_326410
    ctx->pc = 0x32A95Cu;
    SET_GPR_U32(ctx, 31, 0x32A964u);
    ctx->pc = 0x32A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A95Cu;
    // 0x32a960: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326410u, 0x32A95Cu, 0x32A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A964u;
label_32a964:
    // 0x32a964: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32A964u;
    {
        const bool branch_taken_0x32a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A964u;
        // 0x32a968: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a964) {
            ctx->pc = 0x32A97Cu;
            goto label_32a97c;
        }
    }
    ctx->pc = 0x32A96Cu;
    // 0x32a96c: 0x0  nop
    ctx->pc = 0x32a96cu;
    // NOP
label_32a970:
    // 0x32a970: 0xc0c9904  jal         func_326410
    ctx->pc = 0x32A970u;
    SET_GPR_U32(ctx, 31, 0x32A978u);
    ctx->pc = 0x32A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A970u;
    // 0x32a974: 0x2405ff80  addiu       $a1, $zero, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326410u, 0x32A970u, 0x32A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A978u;
label_32a978:
    // 0x32a978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a97c:
    // 0x32a97c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A97Cu;
        // 0x32a980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A984u;
    // 0x32a984: 0x0  nop
    ctx->pc = 0x32a984u;
    // NOP
    ctx->pc = 0x32a988u;
}
