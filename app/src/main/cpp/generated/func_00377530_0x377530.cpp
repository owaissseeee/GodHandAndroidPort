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

// Function: func_00377530
// Address: 0x377530 - 0x377598
void func_00377530_0x377530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377530_0x377530");
#endif

    switch (ctx->pc) {
        case 0x377564u: goto label_377564;
        default: break;
    }

    ctx->pc = 0x377530u;

    // 0x377530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x377530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x377534: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x377534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37753c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x37753cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377540: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x377540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x377544: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x377544u;
    {
        const bool branch_taken_0x377544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377544u;
        // 0x377548: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377544) {
            ctx->pc = 0x37756Cu;
            goto label_37756c;
        }
    }
    ctx->pc = 0x37754Cu;
    // 0x37754c: 0x84a2003a  lh          $v0, 0x3A($a1)
    ctx->pc = 0x37754cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x377550: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x377550u;
    {
        const bool branch_taken_0x377550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377550u;
        // 0x377554: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377550) {
            ctx->pc = 0x37756Cu;
            goto label_37756c;
        }
    }
    ctx->pc = 0x377558u;
    // 0x377558: 0x3062ffef  andi        $v0, $v1, 0xFFEF
    ctx->pc = 0x377558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x37755c: 0xc0dde8a  jal         func_377A28
    ctx->pc = 0x37755Cu;
    SET_GPR_U32(ctx, 31, 0x377564u);
    ctx->pc = 0x377560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37755Cu;
    // 0x377560: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377A28u, 0x37755Cu, 0x377564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377564u;
label_377564:
    // 0x377564: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x377564u;
    {
        const bool branch_taken_0x377564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377564u;
        // 0x377568: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377564) {
            ctx->pc = 0x377590u;
            goto label_377590;
        }
    }
    ctx->pc = 0x37756Cu;
label_37756c:
    // 0x37756c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37756Cu;
    {
        const bool branch_taken_0x37756c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37756Cu;
        // 0x377570: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37756c) {
            ctx->pc = 0x377590u;
            goto label_377590;
        }
    }
    ctx->pc = 0x377574u;
    // 0x377574: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x377574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x377578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x377578u;
    {
        const bool branch_taken_0x377578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377578u;
        // 0x37757c: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377578) {
            ctx->pc = 0x377590u;
            goto label_377590;
        }
    }
    ctx->pc = 0x377580u;
    // 0x377580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x377580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377584: 0xa4a20014  sh          $v0, 0x14($a1)
    ctx->pc = 0x377584u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x377588: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x377588u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x37758c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377590:
    // 0x377590: 0x3e00008  jr          $ra
    ctx->pc = 0x377590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377590u;
        // 0x377594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377598u;
}
