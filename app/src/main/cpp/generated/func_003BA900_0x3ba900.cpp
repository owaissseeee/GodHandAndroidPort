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

// Function: func_003BA900
// Address: 0x3ba900 - 0x3ba978
void func_003BA900_0x3ba900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA900_0x3ba900");
#endif

    ctx->pc = 0x3ba900u;

    // 0x3ba900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba904: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA904u;
    {
        const bool branch_taken_0x3ba904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA904u;
        // 0x3ba908: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba904) {
            ctx->pc = 0x3BA920u;
            goto label_3ba920;
        }
    }
    ctx->pc = 0x3BA90Cu;
    // 0x3ba90c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba914: 0x24840b48  addiu       $a0, $a0, 0xB48
    ctx->pc = 0x3ba914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2888));
    // 0x3ba918: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA918u;
    ctx->pc = 0x3BA91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA918u;
    // 0x3ba91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA920u;
label_3ba920:
    // 0x3ba920: 0x1ca00007  bgtz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA920u;
    {
        const bool branch_taken_0x3ba920 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3BA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA920u;
        // 0x3ba924: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba920) {
            ctx->pc = 0x3BA940u;
            goto label_3ba940;
        }
    }
    ctx->pc = 0x3BA928u;
    // 0x3ba928: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba930: 0x24840b70  addiu       $a0, $a0, 0xB70
    ctx->pc = 0x3ba930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2928));
    // 0x3ba934: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA934u;
    ctx->pc = 0x3BA938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA934u;
    // 0x3ba938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA934u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA93Cu;
    // 0x3ba93c: 0x0  nop
    ctx->pc = 0x3ba93cu;
    // NOP
label_3ba940:
    // 0x3ba940: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3ba940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3ba944: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3ba944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ba948: 0x34633280  ori         $v1, $v1, 0x3280
    ctx->pc = 0x3ba948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12928);
    // 0x3ba94c: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x3ba94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x3ba950: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3ba950u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ba954: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BA954u;
    {
        const bool branch_taken_0x3ba954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba954) {
            ctx->pc = 0x3BA958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA954u;
            // 0x3ba958: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA95Cu;
            goto label_3ba95c;
        }
    }
    ctx->pc = 0x3BA95Cu;
label_3ba95c:
    // 0x3ba95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba960: 0x1812  mflo        $v1
    ctx->pc = 0x3ba960u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3ba964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba968: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3ba968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x3ba96c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA96Cu;
        // 0x3ba970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA974u;
    // 0x3ba974: 0x0  nop
    ctx->pc = 0x3ba974u;
    // NOP
    ctx->pc = 0x3ba978u;
}
