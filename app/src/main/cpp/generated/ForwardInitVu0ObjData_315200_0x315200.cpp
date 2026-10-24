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

// Function: ForwardInitVu0ObjData_315200
// Address: 0x315200 - 0x315270
void ForwardInitVu0ObjData_315200_0x315200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitVu0ObjData_315200_0x315200");
#endif

    switch (ctx->pc) {
        case 0x315234u: goto label_315234;
        case 0x31524cu: goto label_31524c;
        case 0x315254u: goto label_315254;
        default: break;
    }

    ctx->pc = 0x315200u;

    // 0x315200: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315204: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315208: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315208u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31520c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31520cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315214: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315218: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315218u;
    {
        const bool branch_taken_0x315218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315218u;
        // 0x31521c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315218) {
            ctx->pc = 0x31525Cu;
            goto label_31525c;
        }
    }
    ctx->pc = 0x315220u;
    // 0x315220: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315224: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x315224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x315228: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31522c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31522Cu;
    SET_GPR_U32(ctx, 31, 0x315234u);
    ctx->pc = 0x315230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31522Cu;
    // 0x315230: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31522Cu, 0x315234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315234u;
label_315234:
    // 0x315234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315238: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315238u;
    {
        const bool branch_taken_0x315238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315238u;
        // 0x31523c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315238) {
            ctx->pc = 0x31525Cu;
            goto label_31525c;
        }
    }
    ctx->pc = 0x315240u;
    // 0x315240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315244: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315244u;
    SET_GPR_U32(ctx, 31, 0x31524Cu);
    ctx->pc = 0x315248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315244u;
    // 0x315248: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315244u, 0x31524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31524Cu;
label_31524c:
    // 0x31524c: 0xc0677b4  jal         func_19DED0
    ctx->pc = 0x31524Cu;
    SET_GPR_U32(ctx, 31, 0x315254u);
    ctx->pc = 0x315250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31524Cu;
    // 0x315250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DED0u, 0x31524Cu, 0x315254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315254u;
label_315254:
    // 0x315254: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315254u;
    {
        const bool branch_taken_0x315254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315254u;
        // 0x315258: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315254) {
            ctx->pc = 0x315264u;
            goto label_315264;
        }
    }
    ctx->pc = 0x31525Cu;
label_31525c:
    // 0x31525c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31525cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315260: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315264:
    // 0x315264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315268: 0x3e00008  jr          $ra
    ctx->pc = 0x315268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315268u;
        // 0x31526c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315270u;
}
