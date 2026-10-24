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

// Function: func_00349328
// Address: 0x349328 - 0x3493d8
void func_00349328_0x349328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349328_0x349328");
#endif

    switch (ctx->pc) {
        case 0x349384u: goto label_349384;
        case 0x349390u: goto label_349390;
        case 0x3493b0u: goto label_3493b0;
        default: break;
    }

    ctx->pc = 0x349328u;

    // 0x349328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34932c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x34932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x349330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x349330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x349334: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x349334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x349338: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x349338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34933c: 0x24a5e098  addiu       $a1, $a1, -0x1F68
    ctx->pc = 0x34933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
    // 0x349340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349344: 0x24c6e09c  addiu       $a2, $a2, -0x1F64
    ctx->pc = 0x349344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959260));
    // 0x349348: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x349348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34934c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x34934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x349350: 0x2492c7dc  addiu       $s2, $a0, -0x3824
    ctx->pc = 0x349350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952924));
    // 0x349354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349358: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x349358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE098u));
    // 0x34935c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x34935cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EE09Cu));
    // 0x349360: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x349360u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3EC7DCu));
    // 0x349364: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x349364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x349368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x349368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34936c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34936cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EE098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE098u, _value); } while (0);
    // 0x349370: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x349370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EE09Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE09Cu, _value); } while (0);
    // 0x349374: 0x56240010  bnel        $s1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x349374u;
    {
        const bool branch_taken_0x349374 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x349374) {
            ctx->pc = 0x349378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349374u;
            // 0x349378: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3493B8u;
            goto label_3493b8;
        }
    }
    ctx->pc = 0x34937Cu;
    // 0x34937c: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x34937Cu;
    SET_GPR_U32(ctx, 31, 0x349384u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x34937Cu, 0x349384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349384u;
label_349384:
    // 0x349384: 0x2450005c  addiu       $s0, $v0, 0x5C
    ctx->pc = 0x349384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x349388: 0xc0d22f2  jal         func_348BC8
    ctx->pc = 0x349388u;
    SET_GPR_U32(ctx, 31, 0x349390u);
    ctx->pc = 0x34938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349388u;
    // 0x34938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BC8u, 0x349388u, 0x349390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349390u;
label_349390:
    // 0x349390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x349390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349394: 0x54710008  bnel        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x349394u;
    {
        const bool branch_taken_0x349394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x349394) {
            ctx->pc = 0x349398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349394u;
            // 0x349398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3493B8u;
            goto label_3493b8;
        }
    }
    ctx->pc = 0x34939Cu;
    // 0x34939c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3493a0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3493A0u;
    {
        const bool branch_taken_0x3493a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3493a0) {
            ctx->pc = 0x3493A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3493A0u;
            // 0x3493a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3493B4u;
            goto label_3493b4;
        }
    }
    ctx->pc = 0x3493A8u;
    // 0x3493a8: 0xc0d5c90  jal         func_357240
    ctx->pc = 0x3493A8u;
    SET_GPR_U32(ctx, 31, 0x3493B0u);
    ctx->pc = 0x357240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357240u, 0x3493A8u, 0x3493B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493B0u;
label_3493b0:
    // 0x3493b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3493b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3493b4:
    // 0x3493b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3493b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3493b8:
    // 0x3493b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3493b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3493bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3493bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3493c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3493c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3493c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3493C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3493C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493C4u;
        // 0x3493c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3493C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3493CCu;
    // 0x3493cc: 0x0  nop
    ctx->pc = 0x3493ccu;
    // NOP
    // 0x3493d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3493d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3493d4: 0x0  nop
    ctx->pc = 0x3493d4u;
    // NOP
    ctx->pc = 0x3493d8u;
}
