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

// Function: func_002F11F0
// Address: 0x2f11f0 - 0x2f12b8
void func_002F11F0_0x2f11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F11F0_0x2f11f0");
#endif

    switch (ctx->pc) {
        case 0x2f123cu: goto label_2f123c;
        case 0x2f12a0u: goto label_2f12a0;
        default: break;
    }

    ctx->pc = 0x2f11f0u;

    // 0x2f11f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f11f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f11f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f11f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f11fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f11fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f1200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f1204: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x2f1204u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x2f1208: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2f1208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2f120c: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2f120cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f1210: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2f1210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x2f1214: 0x90a2016c  lbu         $v0, 0x16C($a1)
    ctx->pc = 0x2f1214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 364)));
    // 0x2f1218: 0xae0202b0  sw          $v0, 0x2B0($s0)
    ctx->pc = 0x2f1218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
    // 0x2f121c: 0x90a30170  lbu         $v1, 0x170($a1)
    ctx->pc = 0x2f121cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 368)));
    // 0x2f1220: 0xae0302b4  sw          $v1, 0x2B4($s0)
    ctx->pc = 0x2f1220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 3));
    // 0x2f1224: 0x8ca20174  lw          $v0, 0x174($a1)
    ctx->pc = 0x2f1224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x2f1228: 0xae22b674  sw          $v0, -0x498C($s1)
    ctx->pc = 0x2f1228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61B674u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B674u, _value); } while (0);
    // 0x2f122c: 0x8e0602b4  lw          $a2, 0x2B4($s0)
    ctx->pc = 0x2f122cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2f1230: 0x8e0502b0  lw          $a1, 0x2B0($s0)
    ctx->pc = 0x2f1230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f1234: 0xc0c180c  jal         func_306030
    ctx->pc = 0x2F1234u;
    SET_GPR_U32(ctx, 31, 0x2F123Cu);
    ctx->pc = 0x2F1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1234u;
    // 0x2f1238: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x2F1234u, 0x2F123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F123Cu;
label_2f123c:
    // 0x2f123c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F123Cu;
    {
        const bool branch_taken_0x2f123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f123c) {
            ctx->pc = 0x2F1240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F123Cu;
            // 0x2f1240: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1258u;
            goto label_2f1258;
        }
    }
    ctx->pc = 0x2F1244u;
    // 0x2f1244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1248: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f124c: 0x8c8602b0  lw          $a2, 0x2B0($a0)
    ctx->pc = 0x2f124cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x2f1250: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F1250u;
    {
        const bool branch_taken_0x2f1250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1250u;
        // 0x2f1254: 0x24a5ec08  addiu       $a1, $a1, -0x13F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1250) {
            ctx->pc = 0x2F1298u;
            goto label_2f1298;
        }
    }
    ctx->pc = 0x2F1258u;
label_2f1258:
    // 0x2f1258: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2f1258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2f125c: 0x34425345  ori         $v0, $v0, 0x5345
    ctx->pc = 0x2f125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21317);
    // 0x2f1260: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F1260u;
    {
        const bool branch_taken_0x2f1260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1260u;
        // 0x2f1264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1260) {
            ctx->pc = 0x2F128Cu;
            goto label_2f128c;
        }
    }
    ctx->pc = 0x2F1268u;
    // 0x2f1268: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f1268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f126c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f126cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f1270: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2f1270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2f1274: 0xa0403bb0  sb          $zero, 0x3BB0($v0)
    ctx->pc = 0x2f1274u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3C3BB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3C3BB0u, _value); } while (0);
    // 0x2f1278: 0xac603bb4  sw          $zero, 0x3BB4($v1)
    ctx->pc = 0x2f1278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3C3BB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C3BB4u, _value); } while (0);
    // 0x2f127c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1280: 0xae20b674  sw          $zero, -0x498C($s1)
    ctx->pc = 0x2f1280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294948468), GPR_U32(ctx, 0));
    // 0x2f1284: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1284u;
    {
        const bool branch_taken_0x2f1284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1284u;
        // 0x2f1288: 0xa080b670  sb          $zero, -0x4990($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294948464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1284) {
            ctx->pc = 0x2F12A4u;
            goto label_2f12a4;
        }
    }
    ctx->pc = 0x2F128Cu;
label_2f128c:
    // 0x2f128c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f128cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f1290: 0x8c8602b0  lw          $a2, 0x2B0($a0)
    ctx->pc = 0x2f1290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x2f1294: 0x24a5ec28  addiu       $a1, $a1, -0x13D8
    ctx->pc = 0x2f1294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962216));
label_2f1298:
    // 0x2f1298: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F1298u;
    SET_GPR_U32(ctx, 31, 0x2F12A0u);
    ctx->pc = 0x2F129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1298u;
    // 0x2f129c: 0x8c8702b4  lw          $a3, 0x2B4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F1298u, 0x2F12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12A0u;
label_2f12a0:
    // 0x2f12a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f12a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f12a4:
    // 0x2f12a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f12a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f12a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f12a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f12ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f12acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f12b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F12B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12B0u;
        // 0x2f12b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F12B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F12B8u;
}
