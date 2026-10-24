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

// Function: FileBuf_init
// Address: 0x2e1348 - 0x2e13d8
void FileBuf_init_0x2e1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileBuf_init_0x2e1348");
#endif

    switch (ctx->pc) {
        case 0x2e1380u: goto label_2e1380;
        case 0x2e13acu: goto label_2e13ac;
        case 0x2e13c8u: goto label_2e13c8;
        default: break;
    }

    ctx->pc = 0x2e1348u;

    // 0x2e1348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e134c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1350: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1354: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2e1354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2e1358: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2e1358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2e135c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1360: 0x2610b280  addiu       $s0, $s0, -0x4D80
    ctx->pc = 0x2e1360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x2e1364: 0x24c64200  addiu       $a2, $a2, 0x4200
    ctx->pc = 0x2e1364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16896));
    // 0x2e1368: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x2e1368u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61B289u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61B289u, _value); } while (0);
    // 0x2e136c: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x2e136cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2e1370: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x2e1370u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61B28Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61B28Au, _value); } while (0);
    // 0x2e1374: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e1374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e1378: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2E1378u;
    SET_GPR_U32(ctx, 31, 0x2E1380u);
    ctx->pc = 0x2E137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1378u;
    // 0x2e137c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2E1378u, 0x2E1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1380u;
label_2e1380:
    // 0x2e1380: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e1380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1384: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2e1384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2e1388: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x2e1388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x2e138c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2e138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2e1390: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1390u;
    {
        const bool branch_taken_0x2e1390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1390u;
        // 0x2e1394: 0xae060014  sw          $a2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1390) {
            ctx->pc = 0x2E13B4u;
            goto label_2e13b4;
        }
    }
    ctx->pc = 0x2E1398u;
    // 0x2e1398: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2e1398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2e139c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e139cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e13a0: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x2e13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x2e13a4: 0xc07ff40  jal         func_1FFD00
    ctx->pc = 0x2E13A4u;
    SET_GPR_U32(ctx, 31, 0x2E13ACu);
    ctx->pc = 0x2E13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E13A4u;
    // 0x2e13a8: 0x24a5e030  addiu       $a1, $a1, -0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFD00u, 0x2E13A4u, 0x2E13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13ACu;
label_2e13ac:
    // 0x2e13ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E13ACu;
    {
        const bool branch_taken_0x2e13ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13ACu;
        // 0x2e13b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13ac) {
            ctx->pc = 0x2E13CCu;
            goto label_2e13cc;
        }
    }
    ctx->pc = 0x2E13B4u;
label_2e13b4:
    // 0x2e13b4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2e13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2e13b8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e13b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e13bc: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x2e13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x2e13c0: 0xc07ff40  jal         func_1FFD00
    ctx->pc = 0x2E13C0u;
    SET_GPR_U32(ctx, 31, 0x2E13C8u);
    ctx->pc = 0x2E13C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E13C0u;
    // 0x2e13c4: 0x24a5e040  addiu       $a1, $a1, -0x1FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFD00u, 0x2E13C0u, 0x2E13C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13C8u;
label_2e13c8:
    // 0x2e13c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e13c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e13cc:
    // 0x2e13cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e13ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e13d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E13D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13D0u;
        // 0x2e13d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E13D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E13D8u;
}
