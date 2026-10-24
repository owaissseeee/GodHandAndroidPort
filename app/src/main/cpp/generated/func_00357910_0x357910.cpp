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

// Function: func_00357910
// Address: 0x357910 - 0x357980
void func_00357910_0x357910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357910_0x357910");
#endif

    switch (ctx->pc) {
        case 0x357924u: goto label_357924;
        case 0x357934u: goto label_357934;
        default: break;
    }

    ctx->pc = 0x357910u;

    // 0x357910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35791c: 0xc0d5fb6  jal         func_357ED8
    ctx->pc = 0x35791Cu;
    SET_GPR_U32(ctx, 31, 0x357924u);
    ctx->pc = 0x357920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35791Cu;
    // 0x357920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED8u, 0x35791Cu, 0x357924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357924u;
label_357924:
    // 0x357924: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357924u;
    {
        const bool branch_taken_0x357924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357924u;
        // 0x357928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357924) {
            ctx->pc = 0x35793Cu;
            goto label_35793c;
        }
    }
    ctx->pc = 0x35792Cu;
    // 0x35792c: 0xc0d5e7c  jal         func_3579F0
    ctx->pc = 0x35792Cu;
    SET_GPR_U32(ctx, 31, 0x357934u);
    ctx->pc = 0x3579F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3579F0u, 0x35792Cu, 0x357934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357934u;
label_357934:
    // 0x357934: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x357934u;
    {
        const bool branch_taken_0x357934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357934) {
            ctx->pc = 0x357938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357934u;
            // 0x357938: 0x8e05004c  lw          $a1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357948u;
            goto label_357948;
        }
    }
    ctx->pc = 0x35793Cu;
label_35793c:
    // 0x35793c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35793Cu;
    {
        const bool branch_taken_0x35793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35793Cu;
        // 0x357940: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35793c) {
            ctx->pc = 0x357970u;
            goto label_357970;
        }
    }
    ctx->pc = 0x357944u;
    // 0x357944: 0x0  nop
    ctx->pc = 0x357944u;
    // NOP
label_357948:
    // 0x357948: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x357948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x35794c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x35794cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x357950: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x357950u;
    {
        const bool branch_taken_0x357950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357950u;
        // 0x357954: 0x28a30005  slti        $v1, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357950) {
            ctx->pc = 0x35796Cu;
            goto label_35796c;
        }
    }
    ctx->pc = 0x357958u;
    // 0x357958: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357958u;
    {
        const bool branch_taken_0x357958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357958u;
        // 0x35795c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357958) {
            ctx->pc = 0x357970u;
            goto label_357970;
        }
    }
    ctx->pc = 0x357960u;
    // 0x357960: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x357960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x357964: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x357964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x357968: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x357968u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_35796c:
    // 0x35796c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35796cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357970:
    // 0x357970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357978: 0x3e00008  jr          $ra
    ctx->pc = 0x357978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357978u;
        // 0x35797c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357980u;
}
