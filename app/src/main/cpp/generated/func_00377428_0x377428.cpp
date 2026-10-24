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

// Function: func_00377428
// Address: 0x377428 - 0x3774a8
void func_00377428_0x377428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377428_0x377428");
#endif

    ctx->pc = 0x377428u;

    // 0x377428: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x377428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x37742c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x377430: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x377430u;
    {
        const bool branch_taken_0x377430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377430) {
            ctx->pc = 0x377434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377430u;
            // 0x377434: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377450u;
            goto label_377450;
        }
    }
    ctx->pc = 0x377438u;
    // 0x377438: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x377438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x37743c: 0x94a30044  lhu         $v1, 0x44($a1)
    ctx->pc = 0x37743cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x377440: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x377440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x377444: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x377444u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x377448: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x377448u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x37744c: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x37744cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_377450:
    // 0x377450: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x377450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x377454: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x377454u;
    {
        const bool branch_taken_0x377454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377454) {
            ctx->pc = 0x377458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377454u;
            // 0x377458: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377474u;
            goto label_377474;
        }
    }
    ctx->pc = 0x37745Cu;
    // 0x37745c: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x37745cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x377460: 0x94a30046  lhu         $v1, 0x46($a1)
    ctx->pc = 0x377460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x377464: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x377464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x377468: 0xa483005e  sh          $v1, 0x5E($a0)
    ctx->pc = 0x377468u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x37746c: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x37746cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x377470: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x377470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_377474:
    // 0x377474: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x377474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x377478: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x377478u;
    {
        const bool branch_taken_0x377478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377478) {
            ctx->pc = 0x37749Cu;
            goto label_37749c;
        }
    }
    ctx->pc = 0x377480u;
    // 0x377480: 0x94a20048  lhu         $v0, 0x48($a1)
    ctx->pc = 0x377480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x377484: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x377484u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x377488: 0xa4820070  sh          $v0, 0x70($a0)
    ctx->pc = 0x377488u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x37748c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x377490: 0x94a2004a  lhu         $v0, 0x4A($a1)
    ctx->pc = 0x377490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 74)));
    // 0x377494: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x377494u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x377498: 0xa4820072  sh          $v0, 0x72($a0)
    ctx->pc = 0x377498u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 2));
label_37749c:
    // 0x37749c: 0x3e00008  jr          $ra
    ctx->pc = 0x37749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3774A4u;
    // 0x3774a4: 0x0  nop
    ctx->pc = 0x3774a4u;
    // NOP
    ctx->pc = 0x3774a8u;
}
