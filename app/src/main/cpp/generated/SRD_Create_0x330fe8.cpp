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

// Function: SRD_Create
// Address: 0x330fe8 - 0x331070
void SRD_Create_0x330fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SRD_Create_0x330fe8");
#endif

    switch (ctx->pc) {
        case 0x331000u: goto label_331000;
        case 0x33101cu: goto label_33101c;
        case 0x331054u: goto label_331054;
        default: break;
    }

    ctx->pc = 0x330fe8u;

    // 0x330fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330ff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x330ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x330ff8: 0xc0ceda2  jal         func_33B688
    ctx->pc = 0x330FF8u;
    SET_GPR_U32(ctx, 31, 0x331000u);
    ctx->pc = 0x330FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FF8u;
    // 0x330ffc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B688u, 0x330FF8u, 0x331000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331000u;
label_331000:
    // 0x331000: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331004: 0x24508410  addiu       $s0, $v0, -0x7BF0
    ctx->pc = 0x331004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
    // 0x331008: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x331008u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3D8410u));
    // 0x33100c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33100Cu;
    {
        const bool branch_taken_0x33100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33100c) {
            ctx->pc = 0x33104Cu;
            goto label_33104c;
        }
    }
    ctx->pc = 0x331014u;
    // 0x331014: 0xc0cc3ee  jal         func_330FB8
    ctx->pc = 0x331014u;
    SET_GPR_U32(ctx, 31, 0x33101Cu);
    ctx->pc = 0x330FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330FB8u, 0x331014u, 0x33101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33101Cu;
label_33101c:
    // 0x33101c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331020: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x331020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x331024: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x331024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331028: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x331028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x33102c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33102cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x331030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D8470u));
    // 0x331034: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x331034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331038: 0xa2050003  sb          $a1, 0x3($s0)
    ctx->pc = 0x331038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x33103c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331040: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x331040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x331044: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D8470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8470u, _value); } while (0);
    // 0x331048: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x331048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_33104c:
    // 0x33104c: 0xc0cedae  jal         func_33B6B8
    ctx->pc = 0x33104Cu;
    SET_GPR_U32(ctx, 31, 0x331054u);
    ctx->pc = 0x33B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6B8u, 0x33104Cu, 0x331054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331054u;
label_331054:
    // 0x331054: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x331054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33105c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33105cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x331060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331064: 0x3e00008  jr          $ra
    ctx->pc = 0x331064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331064u;
        // 0x331068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33106Cu;
    // 0x33106c: 0x0  nop
    ctx->pc = 0x33106cu;
    // NOP
    ctx->pc = 0x331070u;
}
