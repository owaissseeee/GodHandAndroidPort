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

// Function: func_0022FAE0
// Address: 0x22fae0 - 0x230f20
void func_0022FAE0_0x22fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022FAE0_0x22fae0");
#endif

    switch (ctx->pc) {
        case 0x22fb38u: goto label_22fb38;
        case 0x22fb64u: goto label_22fb64;
        case 0x22fbb4u: goto label_22fbb4;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbf4u: goto label_22fbf4;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc60u: goto label_22fc60;
        case 0x22fc88u: goto label_22fc88;
        case 0x22fcd4u: goto label_22fcd4;
        case 0x22fcf4u: goto label_22fcf4;
        case 0x22fd28u: goto label_22fd28;
        case 0x22fd48u: goto label_22fd48;
        case 0x22fd7cu: goto label_22fd7c;
        case 0x22fd9cu: goto label_22fd9c;
        case 0x22fdb8u: goto label_22fdb8;
        case 0x22fdfcu: goto label_22fdfc;
        case 0x22fe1cu: goto label_22fe1c;
        case 0x22fe38u: goto label_22fe38;
        case 0x22fe60u: goto label_22fe60;
        case 0x22fe84u: goto label_22fe84;
        case 0x22fea4u: goto label_22fea4;
        case 0x22fec8u: goto label_22fec8;
        case 0x22ff14u: goto label_22ff14;
        case 0x22ff3cu: goto label_22ff3c;
        case 0x22ff60u: goto label_22ff60;
        case 0x22ff88u: goto label_22ff88;
        case 0x22ffb0u: goto label_22ffb0;
        case 0x22ffd4u: goto label_22ffd4;
        case 0x22fffcu: goto label_22fffc;
        case 0x23001cu: goto label_23001c;
        case 0x230044u: goto label_230044;
        case 0x230068u: goto label_230068;
        case 0x230090u: goto label_230090;
        case 0x2300c8u: goto label_2300c8;
        case 0x2300e8u: goto label_2300e8;
        case 0x23010cu: goto label_23010c;
        case 0x230158u: goto label_230158;
        case 0x2301a4u: goto label_2301a4;
        case 0x2301f0u: goto label_2301f0;
        case 0x230204u: goto label_230204;
        case 0x230250u: goto label_230250;
        case 0x23027cu: goto label_23027c;
        case 0x2302c8u: goto label_2302c8;
        case 0x230310u: goto label_230310;
        case 0x230330u: goto label_230330;
        case 0x230370u: goto label_230370;
        case 0x2303a0u: goto label_2303a0;
        case 0x2303b0u: goto label_2303b0;
        case 0x2303d4u: goto label_2303d4;
        case 0x2303f4u: goto label_2303f4;
        case 0x230424u: goto label_230424;
        case 0x230444u: goto label_230444;
        case 0x23049cu: goto label_23049c;
        case 0x2304c0u: goto label_2304c0;
        case 0x230508u: goto label_230508;
        case 0x230528u: goto label_230528;
        case 0x230550u: goto label_230550;
        case 0x23059cu: goto label_23059c;
        case 0x2305bcu: goto label_2305bc;
        case 0x2305f4u: goto label_2305f4;
        case 0x230614u: goto label_230614;
        case 0x23064cu: goto label_23064c;
        case 0x23066cu: goto label_23066c;
        case 0x230694u: goto label_230694;
        case 0x2306b8u: goto label_2306b8;
        case 0x2306d8u: goto label_2306d8;
        case 0x230714u: goto label_230714;
        case 0x230734u: goto label_230734;
        case 0x230770u: goto label_230770;
        case 0x230790u: goto label_230790;
        case 0x2307b8u: goto label_2307b8;
        case 0x2307e8u: goto label_2307e8;
        case 0x230808u: goto label_230808;
        case 0x230840u: goto label_230840;
        case 0x230860u: goto label_230860;
        case 0x230888u: goto label_230888;
        case 0x2308ccu: goto label_2308cc;
        case 0x2308ecu: goto label_2308ec;
        case 0x230924u: goto label_230924;
        case 0x230944u: goto label_230944;
        case 0x23097cu: goto label_23097c;
        case 0x23099cu: goto label_23099c;
        case 0x2309d4u: goto label_2309d4;
        case 0x2309f4u: goto label_2309f4;
        case 0x230a30u: goto label_230a30;
        case 0x230a50u: goto label_230a50;
        case 0x230a78u: goto label_230a78;
        case 0x230a9cu: goto label_230a9c;
        case 0x230abcu: goto label_230abc;
        case 0x230af4u: goto label_230af4;
        case 0x230b14u: goto label_230b14;
        case 0x230b50u: goto label_230b50;
        case 0x230b70u: goto label_230b70;
        case 0x230bbcu: goto label_230bbc;
        case 0x230bdcu: goto label_230bdc;
        case 0x230c10u: goto label_230c10;
        case 0x230c28u: goto label_230c28;
        case 0x230c4cu: goto label_230c4c;
        case 0x230c6cu: goto label_230c6c;
        case 0x230ca0u: goto label_230ca0;
        case 0x230cc0u: goto label_230cc0;
        case 0x230d00u: goto label_230d00;
        case 0x230d24u: goto label_230d24;
        case 0x230d30u: goto label_230d30;
        case 0x230e14u: goto label_230e14;
        case 0x230e38u: goto label_230e38;
        case 0x230e50u: goto label_230e50;
        case 0x230e68u: goto label_230e68;
        case 0x230e74u: goto label_230e74;
        case 0x230e84u: goto label_230e84;
        case 0x230e98u: goto label_230e98;
        case 0x230ea4u: goto label_230ea4;
        case 0x230eb8u: goto label_230eb8;
        default: break;
    }

    ctx->pc = 0x22fae0u;

    // 0x22fae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22fae4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fae8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x22fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22faec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22faf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22faf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22faf4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x22faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x22faf8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x22faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x22fafc: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x22fafcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22fb00: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x22fb04: 0x241704e2  addiu       $s7, $zero, 0x4E2
    ctx->pc = 0x22fb04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x22fb08: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x22fb0c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x22fb0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fb10: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x22fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x22fb14: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x22fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x22fb18: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x22fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x22fb1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22fb20: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x22fb20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22fb24: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x22fb24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fb28: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x22fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22fb2c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x22fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22fb30: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22FB30u;
    SET_GPR_U32(ctx, 31, 0x22FB38u);
    ctx->pc = 0x22FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB30u;
    // 0x22fb34: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22FB30u, 0x22FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB38u;
label_22fb38:
    // 0x22fb38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x22fb3c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22fb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22fb40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FB40u;
    {
        const bool branch_taken_0x22fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB40u;
        // 0x22fb44: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb40) {
            ctx->pc = 0x22FB58u;
            goto label_22fb58;
        }
    }
    ctx->pc = 0x22FB48u;
    // 0x22fb48: 0x505504a0  beql        $v0, $s5, . + 4 + (0x4A0 << 2)
    ctx->pc = 0x22FB48u;
    {
        const bool branch_taken_0x22fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x22fb48) {
            ctx->pc = 0x22FB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB48u;
            // 0x22fb4c: 0xc6210604  lwc1        $f1, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x230DCCu;
            goto label_230dcc;
        }
    }
    ctx->pc = 0x22FB50u;
    // 0x22fb50: 0x100004d5  b           . + 4 + (0x4D5 << 2)
    ctx->pc = 0x22FB50u;
    {
        const bool branch_taken_0x22fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB50u;
        // 0x22fb54: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb50) {
            ctx->pc = 0x230EA8u;
            goto label_230ea8;
        }
    }
    ctx->pc = 0x22FB58u;
label_22fb58:
    // 0x22fb58: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22fb58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fb5c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22FB5Cu;
    SET_GPR_U32(ctx, 31, 0x22FB64u);
    ctx->pc = 0x22FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB5Cu;
    // 0x22fb60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22FB5Cu, 0x22FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB64u;
label_22fb64:
    // 0x22fb64: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x22fb64u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22fb68: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x22fb6c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22fb70: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x22fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x22fb74: 0x2444fdf7  addiu       $a0, $v0, -0x209
    ctx->pc = 0x22fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966775));
    // 0x22fb78: 0x2c820076  sltiu       $v0, $a0, 0x76
    ctx->pc = 0x22fb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)118) ? 1 : 0);
    // 0x22fb7c: 0x104003a5  beqz        $v0, . + 4 + (0x3A5 << 2)
    ctx->pc = 0x22FB7Cu;
    {
        const bool branch_taken_0x22fb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB7Cu;
        // 0x22fb80: 0xae2305f0  sw          $v1, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb7c) {
            ctx->pc = 0x230A14u;
            goto label_230a14;
        }
    }
    ctx->pc = 0x22FB84u;
    // 0x22fb84: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x22fb88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22fb8c: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x22fb90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fb94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb98: 0x800008  jr          $a0
    ctx->pc = 0x22FB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22FBA0u: goto label_22fba0;
            case 0x22FC80u: goto label_22fc80;
            case 0x22FDE0u: goto label_22fde0;
            case 0x22FE58u: goto label_22fe58;
            case 0x22FEC0u: goto label_22fec0;
            case 0x23003Cu: goto label_23003c;
            case 0x230104u: goto label_230104;
            case 0x2301FCu: goto label_2301fc;
            case 0x2302E8u: goto label_2302e8;
            case 0x2303A8u: goto label_2303a8;
            case 0x230478u: goto label_230478;
            case 0x2304ECu: goto label_2304ec;
            case 0x230548u: goto label_230548;
            case 0x23068Cu: goto label_23068c;
            case 0x230754u: goto label_230754;
            case 0x2307B0u: goto label_2307b0;
            case 0x230880u: goto label_230880;
            case 0x230A14u: goto label_230a14;
            case 0x230A70u: goto label_230a70;
            case 0x230B34u: goto label_230b34;
            case 0x230B90u: goto label_230b90;
            case 0x230C84u: goto label_230c84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FB98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22FBA0u;
label_22fba0:
    // 0x22fba0: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x22fba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x22fba4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22FBA4u;
    {
        const bool branch_taken_0x22fba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBA4u;
        // 0x22fba8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fba4) {
            ctx->pc = 0x22FC28u;
            goto label_22fc28;
        }
    }
    ctx->pc = 0x22FBACu;
    // 0x22fbac: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x22FBACu;
    SET_GPR_U32(ctx, 31, 0x22FBB4u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x22FBACu, 0x22FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBB4u;
label_22fbb4:
    // 0x22fbb4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x22fbb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22fbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fbbc: 0x0  nop
    ctx->pc = 0x22fbbcu;
    // NOP
    // 0x22fbc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22fbc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fbc4: 0x0  nop
    ctx->pc = 0x22fbc4u;
    // NOP
    // 0x22fbc8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FBC8u;
    {
        const bool branch_taken_0x22fbc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC8u;
        // 0x22fbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc8) {
            ctx->pc = 0x22FC24u;
            goto label_22fc24;
        }
    }
    ctx->pc = 0x22FBD0u;
    // 0x22fbd0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22fbd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fbd8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fbdc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fbe0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FBE0u;
    SET_GPR_U32(ctx, 31, 0x22FBE8u);
    ctx->pc = 0x22FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBE0u;
    // 0x22fbe4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FBE0u, 0x22FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBE8u;
label_22fbe8:
    // 0x22fbe8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x22fbec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FBECu;
    SET_GPR_U32(ctx, 31, 0x22FBF4u);
    ctx->pc = 0x22FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBECu;
    // 0x22fbf0: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FBECu, 0x22FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBF4u;
label_22fbf4:
    // 0x22fbf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fbf8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FBF8u;
    {
        const bool branch_taken_0x22fbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBF8u;
        // 0x22fbfc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbf8) {
            ctx->pc = 0x22FC0Cu;
            goto label_22fc0c;
        }
    }
    ctx->pc = 0x22FC00u;
    // 0x22fc00: 0x8c431b30  lw          $v1, 0x1B30($v0)
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6960)));
    // 0x22fc04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22FC04u;
    {
        const bool branch_taken_0x22fc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC04u;
        // 0x22fc08: 0x8c441b34  lw          $a0, 0x1B34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc04) {
            ctx->pc = 0x22FC14u;
            goto label_22fc14;
        }
    }
    ctx->pc = 0x22FC0Cu;
label_22fc0c:
    // 0x22fc0c: 0x8c431b38  lw          $v1, 0x1B38($v0)
    ctx->pc = 0x22fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6968)));
    // 0x22fc10: 0x8c441b3c  lw          $a0, 0x1B3C($v0)
    ctx->pc = 0x22fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6972)));
label_22fc14:
    // 0x22fc14: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fc18: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22fc1c: 0x1000042f  b           . + 4 + (0x42F << 2)
    ctx->pc = 0x22FC1Cu;
    {
        const bool branch_taken_0x22fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC1Cu;
        // 0x22fc20: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc1c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FC24u;
label_22fc24:
    // 0x22fc24: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_22fc28:
    // 0x22fc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc2c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22fc30: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fc34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22fc34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fc38: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FC38u;
    SET_GPR_U32(ctx, 31, 0x22FC40u);
    ctx->pc = 0x22FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC38u;
    // 0x22fc3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FC38u, 0x22FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fc44: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x22fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x22fc48: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x22fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x22fc4c: 0x8c431b44  lw          $v1, 0x1B44($v0)
    ctx->pc = 0x22fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6980)));
    // 0x22fc50: 0x8c451b40  lw          $a1, 0x1B40($v0)
    ctx->pc = 0x22fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6976)));
    // 0x22fc54: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22fc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fc58: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FC58u;
    SET_GPR_U32(ctx, 31, 0x22FC60u);
    ctx->pc = 0x22FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC58u;
    // 0x22fc5c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FC58u, 0x22FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC60u;
label_22fc60:
    // 0x22fc60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fc64: 0x5443041d  bnel        $v0, $v1, . + 4 + (0x41D << 2)
    ctx->pc = 0x22FC64u;
    {
        const bool branch_taken_0x22fc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22fc64) {
            ctx->pc = 0x22FC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FC64u;
            // 0x22fc68: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FC6Cu;
    // 0x22fc6c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fc70: 0x8c621b48  lw          $v0, 0x1B48($v1)
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6984)));
    // 0x22fc74: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22fc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fc78: 0x10000418  b           . + 4 + (0x418 << 2)
    ctx->pc = 0x22FC78u;
    {
        const bool branch_taken_0x22fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC78u;
        // 0x22fc7c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc78) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FC80u;
label_22fc80:
    // 0x22fc80: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22FC80u;
    SET_GPR_U32(ctx, 31, 0x22FC88u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22FC80u, 0x22FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC88u;
label_22fc88:
    // 0x22fc88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22fc8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc90: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x22fc90u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x22fc94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22FC94u;
    {
        const bool branch_taken_0x22fc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc94) {
            ctx->pc = 0x22FC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FC94u;
            // 0x22fc98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FC9Cu;
            goto label_22fc9c;
        }
    }
    ctx->pc = 0x22FC9Cu;
label_22fc9c:
    // 0x22fc9c: 0x2810  mfhi        $a1
    ctx->pc = 0x22fc9cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22fca0: 0x50a4001b  beql        $a1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22FCA0u;
    {
        const bool branch_taken_0x22fca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x22fca0) {
            ctx->pc = 0x22FCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FCA0u;
            // 0x22fca4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FD10u;
            goto label_22fd10;
        }
    }
    ctx->pc = 0x22FCA8u;
    // 0x22fca8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FCA8u;
    {
        const bool branch_taken_0x22fca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA8u;
        // 0x22fcac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fca8) {
            ctx->pc = 0x22FCB8u;
            goto label_22fcb8;
        }
    }
    ctx->pc = 0x22FCB0u;
    // 0x22fcb0: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x22FCB0u;
    {
        const bool branch_taken_0x22fcb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCB0u;
        // 0x22fcb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcb0) {
            ctx->pc = 0x22FD64u;
            goto label_22fd64;
        }
    }
    ctx->pc = 0x22FCB8u;
label_22fcb8:
    // 0x22fcb8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22fcbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcc0: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x22fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22fcc4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fcc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22fcc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fccc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FCCCu;
    SET_GPR_U32(ctx, 31, 0x22FCD4u);
    ctx->pc = 0x22FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCCCu;
    // 0x22fcd0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FCCCu, 0x22FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCD4u;
label_22fcd4:
    // 0x22fcd4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fcd8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x22fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x22fcdc: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x22fce0: 0x8c431f60  lw          $v1, 0x1F60($v0)
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8032)));
    // 0x22fce4: 0x8c451f5c  lw          $a1, 0x1F5C($v0)
    ctx->pc = 0x22fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8028)));
    // 0x22fce8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22fce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fcec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FCECu;
    SET_GPR_U32(ctx, 31, 0x22FCF4u);
    ctx->pc = 0x22FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCECu;
    // 0x22fcf0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FCECu, 0x22FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCF4u;
label_22fcf4:
    // 0x22fcf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fcf8: 0x144303f8  bne         $v0, $v1, . + 4 + (0x3F8 << 2)
    ctx->pc = 0x22FCF8u;
    {
        const bool branch_taken_0x22fcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCF8u;
        // 0x22fcfc: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcf8) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FD00u;
    // 0x22fd00: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fd04: 0x8c621f64  lw          $v0, 0x1F64($v1)
    ctx->pc = 0x22fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8036)));
    // 0x22fd08: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x22FD08u;
    {
        const bool branch_taken_0x22fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD08u;
        // 0x22fd0c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd08) {
            ctx->pc = 0x22FDD8u;
            goto label_22fdd8;
        }
    }
    ctx->pc = 0x22FD10u;
label_22fd10:
    // 0x22fd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22fd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd18: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fd1c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fd20: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FD20u;
    SET_GPR_U32(ctx, 31, 0x22FD28u);
    ctx->pc = 0x22FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD20u;
    // 0x22fd24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FD20u, 0x22FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD28u;
label_22fd28:
    // 0x22fd28: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fd2c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x22fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x22fd30: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x22fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x22fd34: 0x8c431f44  lw          $v1, 0x1F44($v0)
    ctx->pc = 0x22fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8004)));
    // 0x22fd38: 0x8c451f3c  lw          $a1, 0x1F3C($v0)
    ctx->pc = 0x22fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7996)));
    // 0x22fd3c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fd40: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FD40u;
    SET_GPR_U32(ctx, 31, 0x22FD48u);
    ctx->pc = 0x22FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD40u;
    // 0x22fd44: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FD40u, 0x22FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD48u;
label_22fd48:
    // 0x22fd48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fd4c: 0x144303e3  bne         $v0, $v1, . + 4 + (0x3E3 << 2)
    ctx->pc = 0x22FD4Cu;
    {
        const bool branch_taken_0x22fd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD4Cu;
        // 0x22fd50: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd4c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FD54u;
    // 0x22fd54: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fd58: 0x8c621f44  lw          $v0, 0x1F44($v1)
    ctx->pc = 0x22fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8004)));
    // 0x22fd5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22FD5Cu;
    {
        const bool branch_taken_0x22fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD5Cu;
        // 0x22fd60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd5c) {
            ctx->pc = 0x22FDD8u;
            goto label_22fdd8;
        }
    }
    ctx->pc = 0x22FD64u;
label_22fd64:
    // 0x22fd64: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x22fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22fd68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22fd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd6c: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x22fd70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22fd70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd74: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22FD74u;
    SET_GPR_U32(ctx, 31, 0x22FD7Cu);
    ctx->pc = 0x22FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD74u;
    // 0x22fd78: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22FD74u, 0x22FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD7Cu;
label_22fd7c:
    // 0x22fd7c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x22fd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x22fd80: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x22fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22fd84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22fd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd8c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fd90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22fd90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd94: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x22FD94u;
    SET_GPR_U32(ctx, 31, 0x22FD9Cu);
    ctx->pc = 0x22FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD94u;
    // 0x22fd98: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x22FD94u, 0x22FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD9Cu;
label_22fd9c:
    // 0x22fd9c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fda0: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x22fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x22fda4: 0x8c431ee0  lw          $v1, 0x1EE0($v0)
    ctx->pc = 0x22fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7904)));
    // 0x22fda8: 0x8c451ee4  lw          $a1, 0x1EE4($v0)
    ctx->pc = 0x22fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7908)));
    // 0x22fdac: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22fdacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fdb0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FDB0u;
    SET_GPR_U32(ctx, 31, 0x22FDB8u);
    ctx->pc = 0x22FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDB0u;
    // 0x22fdb4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FDB0u, 0x22FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDB8u;
label_22fdb8:
    // 0x22fdb8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fdbc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FDBCu;
    {
        const bool branch_taken_0x22fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22fdbc) {
            ctx->pc = 0x22FDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FDBCu;
            // 0x22fdc0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD4u;
            goto label_22fdd4;
        }
    }
    ctx->pc = 0x22FDC4u;
    // 0x22fdc4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fdc8: 0x8c621ee8  lw          $v0, 0x1EE8($v1)
    ctx->pc = 0x22fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7912)));
    // 0x22fdcc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22fdccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fdd0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x22fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_22fdd4:
    // 0x22fdd4: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x22fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
label_22fdd8:
    // 0x22fdd8: 0x100003c0  b           . + 4 + (0x3C0 << 2)
    ctx->pc = 0x22FDD8u;
    {
        const bool branch_taken_0x22fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDD8u;
        // 0x22fddc: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdd8) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FDE0u;
label_22fde0:
    // 0x22fde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fde4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22fde8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fdec: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fdecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fdf0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22fdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fdf4: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22FDF4u;
    SET_GPR_U32(ctx, 31, 0x22FDFCu);
    ctx->pc = 0x22FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDF4u;
    // 0x22fdf8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22FDF4u, 0x22FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDFCu;
label_22fdfc:
    // 0x22fdfc: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x22fdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x22fe00: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22fe04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fe0c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fe10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22fe10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fe14: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x22FE14u;
    SET_GPR_U32(ctx, 31, 0x22FE1Cu);
    ctx->pc = 0x22FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE14u;
    // 0x22fe18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x22FE14u, 0x22FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE1Cu;
label_22fe1c:
    // 0x22fe1c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fe20: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x22fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x22fe24: 0x8c433000  lw          $v1, 0x3000($v0)
    ctx->pc = 0x22fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12288)));
    // 0x22fe28: 0x8c453004  lw          $a1, 0x3004($v0)
    ctx->pc = 0x22fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12292)));
    // 0x22fe2c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22fe2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fe30: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FE30u;
    SET_GPR_U32(ctx, 31, 0x22FE38u);
    ctx->pc = 0x22FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE30u;
    // 0x22fe34: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FE30u, 0x22FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE38u;
label_22fe38:
    // 0x22fe38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fe3c: 0x544303a7  bnel        $v0, $v1, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x22FE3Cu;
    {
        const bool branch_taken_0x22fe3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22fe3c) {
            ctx->pc = 0x22FE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FE3Cu;
            // 0x22fe40: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FE44u;
    // 0x22fe44: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fe48: 0x8c623008  lw          $v0, 0x3008($v1)
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12296)));
    // 0x22fe4c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fe50: 0x100003a2  b           . + 4 + (0x3A2 << 2)
    ctx->pc = 0x22FE50u;
    {
        const bool branch_taken_0x22fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE50u;
        // 0x22fe54: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe50) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x22FE58u;
label_22fe58:
    // 0x22fe58: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22FE58u;
    SET_GPR_U32(ctx, 31, 0x22FE60u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22FE58u, 0x22FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE60u;
label_22fe60:
    // 0x22fe60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22fe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22fe64: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x22FE64u;
    {
        const bool branch_taken_0x22fe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE64u;
        // 0x22fe68: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe64) {
            ctx->pc = 0x230050u;
            goto label_230050;
        }
    }
    ctx->pc = 0x22FE6Cu;
    // 0x22fe6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe70: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x22fe74: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fe78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22fe78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe7c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FE7Cu;
    SET_GPR_U32(ctx, 31, 0x22FE84u);
    ctx->pc = 0x22FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE7Cu;
    // 0x22fe80: 0x240900f6  addiu       $t1, $zero, 0xF6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FE7Cu, 0x22FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE84u;
label_22fe84:
    // 0x22fe84: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22fe88: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x22fe8c: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x22fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x22fe90: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x22fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8208)));
    // 0x22fe94: 0x8c45200c  lw          $a1, 0x200C($v0)
    ctx->pc = 0x22fe94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8204)));
    // 0x22fe98: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22fe98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fe9c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FE9Cu;
    SET_GPR_U32(ctx, 31, 0x22FEA4u);
    ctx->pc = 0x22FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE9Cu;
    // 0x22fea0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FE9Cu, 0x22FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEA4u;
label_22fea4:
    // 0x22fea4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fea8: 0x1443038d  bne         $v0, $v1, . + 4 + (0x38D << 2)
    ctx->pc = 0x22FEA8u;
    {
        const bool branch_taken_0x22fea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22fea8) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x22FEB0u;
    // 0x22feb0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22feb4: 0x8c622014  lw          $v0, 0x2014($v1)
    ctx->pc = 0x22feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8212)));
    // 0x22feb8: 0x10000389  b           . + 4 + (0x389 << 2)
    ctx->pc = 0x22FEB8u;
    {
        const bool branch_taken_0x22feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEB8u;
        // 0x22febc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feb8) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x22FEC0u;
label_22fec0:
    // 0x22fec0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22FEC0u;
    SET_GPR_U32(ctx, 31, 0x22FEC8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22FEC0u, 0x22FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEC8u;
label_22fec8:
    // 0x22fec8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22fecc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fed0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x22fed0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x22fed4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22FED4u;
    {
        const bool branch_taken_0x22fed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fed4) {
            ctx->pc = 0x22FED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FED4u;
            // 0x22fed8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FEDCu;
            goto label_22fedc;
        }
    }
    ctx->pc = 0x22FEDCu;
label_22fedc:
    // 0x22fedc: 0x2810  mfhi        $a1
    ctx->pc = 0x22fedcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22fee0: 0x50a40023  beql        $a1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x22FEE0u;
    {
        const bool branch_taken_0x22fee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x22fee0) {
            ctx->pc = 0x22FEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FEE0u;
            // 0x22fee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FF70u;
            goto label_22ff70;
        }
    }
    ctx->pc = 0x22FEE8u;
    // 0x22fee8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FEE8u;
    {
        const bool branch_taken_0x22fee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEE8u;
        // 0x22feec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fee8) {
            ctx->pc = 0x22FEF8u;
            goto label_22fef8;
        }
    }
    ctx->pc = 0x22FEF0u;
    // 0x22fef0: 0x10a2003c  beq         $a1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22FEF0u;
    {
        const bool branch_taken_0x22fef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEF0u;
        // 0x22fef4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fef0) {
            ctx->pc = 0x22FFE4u;
            goto label_22ffe4;
        }
    }
    ctx->pc = 0x22FEF8u;
label_22fef8:
    // 0x22fef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fefc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22ff00: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x22ff00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x22ff04: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22ff04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22ff08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ff08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff0c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FF0Cu;
    SET_GPR_U32(ctx, 31, 0x22FF14u);
    ctx->pc = 0x22FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF0Cu;
    // 0x22ff10: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FF0Cu, 0x22FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF14u;
label_22ff14:
    // 0x22ff14: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x22ff14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22ff18: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22ff1c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x22ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x22ff20: 0x24749b70  addiu       $s4, $v1, -0x6490
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x22ff24: 0x8c452054  lw          $a1, 0x2054($v0)
    ctx->pc = 0x22ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8276)));
    // 0x22ff28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff2c: 0x8c432058  lw          $v1, 0x2058($v0)
    ctx->pc = 0x22ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x22ff30: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x22ff30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ff34: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FF34u;
    SET_GPR_U32(ctx, 31, 0x22FF3Cu);
    ctx->pc = 0x22FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF34u;
    // 0x22ff38: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FF34u, 0x22FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF3Cu;
label_22ff3c:
    // 0x22ff3c: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FF3Cu;
    {
        const bool branch_taken_0x22ff3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x22FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF3Cu;
        // 0x22ff40: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff3c) {
            ctx->pc = 0x22FF54u;
            goto label_22ff54;
        }
    }
    ctx->pc = 0x22FF44u;
    // 0x22ff44: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22ff48: 0x8c62205c  lw          $v0, 0x205C($v1)
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8284)));
    // 0x22ff4c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22ff4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ff50: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x22ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22ff54:
    // 0x22ff54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22ff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff58: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FF58u;
    SET_GPR_U32(ctx, 31, 0x22FF60u);
    ctx->pc = 0x22FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF58u;
    // 0x22ff5c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FF58u, 0x22FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF60u;
label_22ff60:
    // 0x22ff60: 0x1453035f  bne         $v0, $s3, . + 4 + (0x35F << 2)
    ctx->pc = 0x22FF60u;
    {
        const bool branch_taken_0x22ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x22FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF60u;
        // 0x22ff64: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff60) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x22FF68u;
    // 0x22ff68: 0x1000035d  b           . + 4 + (0x35D << 2)
    ctx->pc = 0x22FF68u;
    {
        const bool branch_taken_0x22ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF68u;
        // 0x22ff6c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff68) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x22FF70u;
label_22ff70:
    // 0x22ff70: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22ff74: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x22ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22ff78: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x22ff78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x22ff7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ff7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff80: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FF80u;
    SET_GPR_U32(ctx, 31, 0x22FF88u);
    ctx->pc = 0x22FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF80u;
    // 0x22ff84: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FF80u, 0x22FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF88u;
label_22ff88:
    // 0x22ff88: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22ff8c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22ff90: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x22ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x22ff94: 0x24749b70  addiu       $s4, $v1, -0x6490
    ctx->pc = 0x22ff94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x22ff98: 0x8c45203c  lw          $a1, 0x203C($v0)
    ctx->pc = 0x22ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8252)));
    // 0x22ff9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffa0: 0x8c432040  lw          $v1, 0x2040($v0)
    ctx->pc = 0x22ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8256)));
    // 0x22ffa4: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x22ffa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ffa8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FFA8u;
    SET_GPR_U32(ctx, 31, 0x22FFB0u);
    ctx->pc = 0x22FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFA8u;
    // 0x22ffac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FFA8u, 0x22FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFB0u;
label_22ffb0:
    // 0x22ffb0: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FFB0u;
    {
        const bool branch_taken_0x22ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x22FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFB0u;
        // 0x22ffb4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffb0) {
            ctx->pc = 0x22FFC8u;
            goto label_22ffc8;
        }
    }
    ctx->pc = 0x22FFB8u;
    // 0x22ffb8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22ffbc: 0x8c622044  lw          $v0, 0x2044($v1)
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8260)));
    // 0x22ffc0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ffc4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x22ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_22ffc8:
    // 0x22ffc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22ffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffcc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22FFCCu;
    SET_GPR_U32(ctx, 31, 0x22FFD4u);
    ctx->pc = 0x22FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFCCu;
    // 0x22ffd0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22FFCCu, 0x22FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFD4u;
label_22ffd4:
    // 0x22ffd4: 0x14530342  bne         $v0, $s3, . + 4 + (0x342 << 2)
    ctx->pc = 0x22FFD4u;
    {
        const bool branch_taken_0x22ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x22FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFD4u;
        // 0x22ffd8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffd4) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x22FFDCu;
    // 0x22ffdc: 0x10000340  b           . + 4 + (0x340 << 2)
    ctx->pc = 0x22FFDCu;
    {
        const bool branch_taken_0x22ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFDCu;
        // 0x22ffe0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffdc) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x22FFE4u;
label_22ffe4:
    // 0x22ffe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ffe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffe8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x22ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22ffec: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22ffecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22fff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22fff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fff4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22FFF4u;
    SET_GPR_U32(ctx, 31, 0x22FFFCu);
    ctx->pc = 0x22FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFF4u;
    // 0x22fff8: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22FFF4u, 0x22FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFFCu;
label_22fffc:
    // 0x22fffc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230000: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230004: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230008: 0x8c43204c  lw          $v1, 0x204C($v0)
    ctx->pc = 0x230008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8268)));
    // 0x23000c: 0x8c452048  lw          $a1, 0x2048($v0)
    ctx->pc = 0x23000cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8264)));
    // 0x230010: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230014: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230014u;
    SET_GPR_U32(ctx, 31, 0x23001Cu);
    ctx->pc = 0x230018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230014u;
    // 0x230018: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230014u, 0x23001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23001Cu;
label_23001c:
    // 0x23001c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230020: 0x5443032e  bnel        $v0, $v1, . + 4 + (0x32E << 2)
    ctx->pc = 0x230020u;
    {
        const bool branch_taken_0x230020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230020) {
            ctx->pc = 0x230024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230020u;
            // 0x230024: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230028u;
    // 0x230028: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23002c: 0x8c622050  lw          $v0, 0x2050($v1)
    ctx->pc = 0x23002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8272)));
    // 0x230030: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230034: 0x10000329  b           . + 4 + (0x329 << 2)
    ctx->pc = 0x230034u;
    {
        const bool branch_taken_0x230034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230034u;
        // 0x230038: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230034) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x23003Cu;
label_23003c:
    // 0x23003c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23003Cu;
    SET_GPR_U32(ctx, 31, 0x230044u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23003Cu, 0x230044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230044u;
label_230044:
    // 0x230044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230048: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x230048u;
    {
        const bool branch_taken_0x230048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230048u;
        // 0x23004c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230048) {
            ctx->pc = 0x2300B0u;
            goto label_2300b0;
        }
    }
    ctx->pc = 0x230050u;
label_230050:
    // 0x230050: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x230050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x230054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230058: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x230058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x23005c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23005cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230060: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230060u;
    SET_GPR_U32(ctx, 31, 0x230068u);
    ctx->pc = 0x230064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230060u;
    // 0x230064: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230060u, 0x230068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230068u;
label_230068:
    // 0x230068: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23006c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x23006cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x230070: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x230074: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x230078: 0x8c430ce4  lw          $v1, 0xCE4($v0)
    ctx->pc = 0x230078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3300)));
    // 0x23007c: 0x8c450ce8  lw          $a1, 0xCE8($v0)
    ctx->pc = 0x23007cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3304)));
    // 0x230080: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x230080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230084: 0xae2605f0  sw          $a2, 0x5F0($s1)
    ctx->pc = 0x230084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 6));
    // 0x230088: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230088u;
    SET_GPR_U32(ctx, 31, 0x230090u);
    ctx->pc = 0x23008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230088u;
    // 0x23008c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230088u, 0x230090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230090u;
label_230090:
    // 0x230090: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230094: 0x14430312  bne         $v0, $v1, . + 4 + (0x312 << 2)
    ctx->pc = 0x230094u;
    {
        const bool branch_taken_0x230094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230094u;
        // 0x230098: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230094) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x23009Cu;
    // 0x23009c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x23009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2300a0: 0x8c440cec  lw          $a0, 0xCEC($v0)
    ctx->pc = 0x2300a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3308)));
    // 0x2300a4: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2300a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x2300a8: 0x1000030d  b           . + 4 + (0x30D << 2)
    ctx->pc = 0x2300A8u;
    {
        const bool branch_taken_0x2300a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300A8u;
        // 0x2300ac: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300a8) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x2300B0u;
label_2300b0:
    // 0x2300b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2300b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2300b4: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2300b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2300b8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2300b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2300bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2300bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2300c0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2300C0u;
    SET_GPR_U32(ctx, 31, 0x2300C8u);
    ctx->pc = 0x2300C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300C0u;
    // 0x2300c4: 0x240900f6  addiu       $t1, $zero, 0xF6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2300C0u, 0x2300C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300C8u;
label_2300c8:
    // 0x2300c8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2300cc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2300d0: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2300d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2300d4: 0x8c433b4c  lw          $v1, 0x3B4C($v0)
    ctx->pc = 0x2300d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15180)));
    // 0x2300d8: 0x8c453b48  lw          $a1, 0x3B48($v0)
    ctx->pc = 0x2300d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15176)));
    // 0x2300dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2300dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2300e0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2300E0u;
    SET_GPR_U32(ctx, 31, 0x2300E8u);
    ctx->pc = 0x2300E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300E0u;
    // 0x2300e4: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2300E0u, 0x2300E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300E8u;
label_2300e8:
    // 0x2300e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2300e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2300ec: 0x144302fc  bne         $v0, $v1, . + 4 + (0x2FC << 2)
    ctx->pc = 0x2300ECu;
    {
        const bool branch_taken_0x2300ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2300ec) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x2300F4u;
    // 0x2300f4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2300f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2300f8: 0x8c623b50  lw          $v0, 0x3B50($v1)
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15184)));
    // 0x2300fc: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x2300FCu;
    {
        const bool branch_taken_0x2300fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300FCu;
        // 0x230100: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300fc) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230104u;
label_230104:
    // 0x230104: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x230104u;
    SET_GPR_U32(ctx, 31, 0x23010Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x230104u, 0x23010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23010Cu;
label_23010c:
    // 0x23010c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230114: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x230114u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x230118: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x230118u;
    {
        const bool branch_taken_0x230118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230118) {
            ctx->pc = 0x23011Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230118u;
            // 0x23011c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x230120u;
            goto label_230120;
        }
    }
    ctx->pc = 0x230120u;
label_230120:
    // 0x230120: 0x2810  mfhi        $a1
    ctx->pc = 0x230120u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x230124: 0x50a40019  beql        $a1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x230124u;
    {
        const bool branch_taken_0x230124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x230124) {
            ctx->pc = 0x230128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230124u;
            // 0x230128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23018Cu;
            goto label_23018c;
        }
    }
    ctx->pc = 0x23012Cu;
    // 0x23012c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23012Cu;
    {
        const bool branch_taken_0x23012c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23012Cu;
        // 0x230130: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23012c) {
            ctx->pc = 0x23013Cu;
            goto label_23013c;
        }
    }
    ctx->pc = 0x230134u;
    // 0x230134: 0x10a20028  beq         $a1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x230134u;
    {
        const bool branch_taken_0x230134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x230138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230134u;
        // 0x230138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230134) {
            ctx->pc = 0x2301D8u;
            goto label_2301d8;
        }
    }
    ctx->pc = 0x23013Cu;
label_23013c:
    // 0x23013c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230140: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x230140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x230144: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230148: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23014c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230150: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230150u;
    SET_GPR_U32(ctx, 31, 0x230158u);
    ctx->pc = 0x230154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230150u;
    // 0x230154: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230150u, 0x230158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230158u;
label_230158:
    // 0x230158: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23015c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x230160: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x230164: 0x8ce32a3c  lw          $v1, 0x2A3C($a3)
    ctx->pc = 0x230164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10812)));
    // 0x230168: 0x8ce42a40  lw          $a0, 0x2A40($a3)
    ctx->pc = 0x230168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10816)));
    // 0x23016c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x23016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x230170: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x230170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x230174: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230174u;
    {
        const bool branch_taken_0x230174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230174u;
        // 0x230178: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230174) {
            ctx->pc = 0x230184u;
            goto label_230184;
        }
    }
    ctx->pc = 0x23017Cu;
    // 0x23017c: 0x8ce22a44  lw          $v0, 0x2A44($a3)
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10820)));
    // 0x230180: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x230180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_230184:
    // 0x230184: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x230184u;
    {
        const bool branch_taken_0x230184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230184u;
        // 0x230188: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230184) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x23018Cu;
label_23018c:
    // 0x23018c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x23018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x230190: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230198: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23019c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23019Cu;
    SET_GPR_U32(ctx, 31, 0x2301A4u);
    ctx->pc = 0x2301A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23019Cu;
    // 0x2301a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23019Cu, 0x2301A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301A4u;
label_2301a4:
    // 0x2301a4: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x2301a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2301a8: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2301a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x2301ac: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2301acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2301b0: 0x8ce32a30  lw          $v1, 0x2A30($a3)
    ctx->pc = 0x2301b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10800)));
    // 0x2301b4: 0x8ce42a34  lw          $a0, 0x2A34($a3)
    ctx->pc = 0x2301b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10804)));
    // 0x2301b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2301b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2301bc: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x2301bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2301c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2301C0u;
    {
        const bool branch_taken_0x2301c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C0u;
        // 0x2301c4: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301c0) {
            ctx->pc = 0x2301D0u;
            goto label_2301d0;
        }
    }
    ctx->pc = 0x2301C8u;
    // 0x2301c8: 0x8ce22a38  lw          $v0, 0x2A38($a3)
    ctx->pc = 0x2301c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10808)));
    // 0x2301cc: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2301d0:
    // 0x2301d0: 0x100002c2  b           . + 4 + (0x2C2 << 2)
    ctx->pc = 0x2301D0u;
    {
        const bool branch_taken_0x2301d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301D0u;
        // 0x2301d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301d0) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2301D8u;
label_2301d8:
    // 0x2301d8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2301d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2301dc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2301dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2301e0: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2301e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2301e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2301e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2301e8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2301E8u;
    SET_GPR_U32(ctx, 31, 0x2301F0u);
    ctx->pc = 0x2301ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301E8u;
    // 0x2301ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2301E8u, 0x2301F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301F0u;
label_2301f0:
    // 0x2301f0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2301f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2301f4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2301F4u;
    {
        const bool branch_taken_0x2301f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301F4u;
        // 0x2301f8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301f4) {
            ctx->pc = 0x2302D0u;
            goto label_2302d0;
        }
    }
    ctx->pc = 0x2301FCu;
label_2301fc:
    // 0x2301fc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2301FCu;
    SET_GPR_U32(ctx, 31, 0x230204u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2301FCu, 0x230204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230204u;
label_230204:
    // 0x230204: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230208: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x230208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23020c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23020cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x230210: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x230210u;
    {
        const bool branch_taken_0x230210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230210) {
            ctx->pc = 0x230214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230210u;
            // 0x230214: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x230218u;
            goto label_230218;
        }
    }
    ctx->pc = 0x230218u;
label_230218:
    // 0x230218: 0x2810  mfhi        $a1
    ctx->pc = 0x230218u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23021c: 0x50a40011  beql        $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23021Cu;
    {
        const bool branch_taken_0x23021c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23021c) {
            ctx->pc = 0x230220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23021Cu;
            // 0x230220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230264u;
            goto label_230264;
        }
    }
    ctx->pc = 0x230224u;
    // 0x230224: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x230224u;
    {
        const bool branch_taken_0x230224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230224u;
        // 0x230228: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230224) {
            ctx->pc = 0x230234u;
            goto label_230234;
        }
    }
    ctx->pc = 0x23022Cu;
    // 0x23022c: 0x50a20020  beql        $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23022Cu;
    {
        const bool branch_taken_0x23022c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23022c) {
            ctx->pc = 0x230230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23022Cu;
            // 0x230230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2302B0u;
            goto label_2302b0;
        }
    }
    ctx->pc = 0x230234u;
label_230234:
    // 0x230234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230238: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x230238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x23023c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23023cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230240: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230244: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230248: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230248u;
    SET_GPR_U32(ctx, 31, 0x230250u);
    ctx->pc = 0x23024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230248u;
    // 0x23024c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230248u, 0x230250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230250u;
label_230250:
    // 0x230250: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230254: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x230254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x230258: 0x8c432a3c  lw          $v1, 0x2A3C($v0)
    ctx->pc = 0x230258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10812)));
    // 0x23025c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x23025Cu;
    {
        const bool branch_taken_0x23025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23025Cu;
        // 0x230260: 0x8c442a44  lw          $a0, 0x2A44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23025c) {
            ctx->pc = 0x2302D8u;
            goto label_2302d8;
        }
    }
    ctx->pc = 0x230264u;
label_230264:
    // 0x230264: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x230268: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x23026c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23026cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230270: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230274: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230274u;
    SET_GPR_U32(ctx, 31, 0x23027Cu);
    ctx->pc = 0x230278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230274u;
    // 0x230278: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230274u, 0x23027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23027Cu;
label_23027c:
    // 0x23027c: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230280: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x230280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x230284: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x230284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x230288: 0x8ce32a30  lw          $v1, 0x2A30($a3)
    ctx->pc = 0x230288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10800)));
    // 0x23028c: 0x8ce42a34  lw          $a0, 0x2A34($a3)
    ctx->pc = 0x23028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10804)));
    // 0x230290: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x230290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x230294: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x230298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230298u;
    {
        const bool branch_taken_0x230298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230298u;
        // 0x23029c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230298) {
            ctx->pc = 0x2302A8u;
            goto label_2302a8;
        }
    }
    ctx->pc = 0x2302A0u;
    // 0x2302a0: 0x8ce22a38  lw          $v0, 0x2A38($a3)
    ctx->pc = 0x2302a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10808)));
    // 0x2302a4: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x2302a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2302a8:
    // 0x2302a8: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x2302A8u;
    {
        const bool branch_taken_0x2302a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302A8u;
        // 0x2302ac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302a8) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2302B0u;
label_2302b0:
    // 0x2302b0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2302b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2302b4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2302b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2302b8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2302b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2302bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2302bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2302c0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2302C0u;
    SET_GPR_U32(ctx, 31, 0x2302C8u);
    ctx->pc = 0x2302C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302C0u;
    // 0x2302c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2302C0u, 0x2302C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302C8u;
label_2302c8:
    // 0x2302c8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2302c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2302cc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2302ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2302d0:
    // 0x2302d0: 0x8c432670  lw          $v1, 0x2670($v0)
    ctx->pc = 0x2302d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9840)));
    // 0x2302d4: 0x8c442674  lw          $a0, 0x2674($v0)
    ctx->pc = 0x2302d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9844)));
label_2302d8:
    // 0x2302d8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2302d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2302dc: 0xae2505f0  sw          $a1, 0x5F0($s1)
    ctx->pc = 0x2302dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 5));
    // 0x2302e0: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x2302E0u;
    {
        const bool branch_taken_0x2302e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302E0u;
        // 0x2302e4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302e0) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x2302E8u;
label_2302e8:
    // 0x2302e8: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2302e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2302ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2302ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2302f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2302F0u;
    {
        const bool branch_taken_0x2302f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302F0u;
        // 0x2302f4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302f0) {
            ctx->pc = 0x230350u;
            goto label_230350;
        }
    }
    ctx->pc = 0x2302F8u;
    // 0x2302f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2302f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2302fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230300: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230304: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230308: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230308u;
    SET_GPR_U32(ctx, 31, 0x230310u);
    ctx->pc = 0x23030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230308u;
    // 0x23030c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230308u, 0x230310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230310u;
label_230310:
    // 0x230310: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230314: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230318: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x23031c: 0x8c4322f0  lw          $v1, 0x22F0($v0)
    ctx->pc = 0x23031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8944)));
    // 0x230320: 0x8c4522ec  lw          $a1, 0x22EC($v0)
    ctx->pc = 0x230320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8940)));
    // 0x230324: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230328: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230328u;
    SET_GPR_U32(ctx, 31, 0x230330u);
    ctx->pc = 0x23032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230328u;
    // 0x23032c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230328u, 0x230330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230330u;
label_230330:
    // 0x230330: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230334: 0x54430269  bnel        $v0, $v1, . + 4 + (0x269 << 2)
    ctx->pc = 0x230334u;
    {
        const bool branch_taken_0x230334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230334) {
            ctx->pc = 0x230338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230334u;
            // 0x230338: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x23033Cu;
    // 0x23033c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x23033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230340: 0x8c6222f4  lw          $v0, 0x22F4($v1)
    ctx->pc = 0x230340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8948)));
    // 0x230344: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230348: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x230348u;
    {
        const bool branch_taken_0x230348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230348u;
        // 0x23034c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230348) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230350u;
label_230350:
    // 0x230350: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230354: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x230358: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x230358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x23035c: 0x8c652324  lw          $a1, 0x2324($v1)
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8996)));
    // 0x230360: 0x8c622328  lw          $v0, 0x2328($v1)
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9000)));
    // 0x230364: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x230364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x230368: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230368u;
    SET_GPR_U32(ctx, 31, 0x230370u);
    ctx->pc = 0x23036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230368u;
    // 0x23036c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230368u, 0x230370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230370u;
label_230370:
    // 0x230370: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230374: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230374u;
    {
        const bool branch_taken_0x230374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230374u;
        // 0x230378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230374) {
            ctx->pc = 0x230388u;
            goto label_230388;
        }
    }
    ctx->pc = 0x23037Cu;
    // 0x23037c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x23037cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230380: 0x8c62232c  lw          $v0, 0x232C($v1)
    ctx->pc = 0x230380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9004)));
    // 0x230384: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_230388:
    // 0x230388: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x230388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23038c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x230390: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230394: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230398: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230398u;
    SET_GPR_U32(ctx, 31, 0x2303A0u);
    ctx->pc = 0x23039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230398u;
    // 0x23039c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230398u, 0x2303A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303A0u;
label_2303a0:
    // 0x2303a0: 0x1000024e  b           . + 4 + (0x24E << 2)
    ctx->pc = 0x2303A0u;
    {
        const bool branch_taken_0x2303a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303A0u;
        // 0x2303a4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303a0) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2303A8u;
label_2303a8:
    // 0x2303a8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2303A8u;
    SET_GPR_U32(ctx, 31, 0x2303B0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2303A8u, 0x2303B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303B0u;
label_2303b0:
    // 0x2303b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2303b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2303b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2303B4u;
    {
        const bool branch_taken_0x2303b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303B4u;
        // 0x2303b8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303b4) {
            ctx->pc = 0x23040Cu;
            goto label_23040c;
        }
    }
    ctx->pc = 0x2303BCu;
    // 0x2303bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2303bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303c0: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x2303c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2303c4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2303c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2303c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2303c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2303cc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2303CCu;
    SET_GPR_U32(ctx, 31, 0x2303D4u);
    ctx->pc = 0x2303D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303CCu;
    // 0x2303d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2303CCu, 0x2303D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303D4u;
label_2303d4:
    // 0x2303d4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2303d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2303d8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2303d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2303dc: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2303dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2303e0: 0x8c432db0  lw          $v1, 0x2DB0($v0)
    ctx->pc = 0x2303e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11696)));
    // 0x2303e4: 0x8c452dac  lw          $a1, 0x2DAC($v0)
    ctx->pc = 0x2303e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11692)));
    // 0x2303e8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2303e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2303ec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2303ECu;
    SET_GPR_U32(ctx, 31, 0x2303F4u);
    ctx->pc = 0x2303F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303ECu;
    // 0x2303f0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2303ECu, 0x2303F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303F4u;
label_2303f4:
    // 0x2303f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2303f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2303f8: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2303F8u;
    {
        const bool branch_taken_0x2303f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2303f8) {
            ctx->pc = 0x23045Cu;
            goto label_23045c;
        }
    }
    ctx->pc = 0x230400u;
    // 0x230400: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230404: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x230404u;
    {
        const bool branch_taken_0x230404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230404u;
        // 0x230408: 0x8c622db4  lw          $v0, 0x2DB4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230404) {
            ctx->pc = 0x230458u;
            goto label_230458;
        }
    }
    ctx->pc = 0x23040Cu;
label_23040c:
    // 0x23040c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230410: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x230410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x230414: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230418: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23041c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23041Cu;
    SET_GPR_U32(ctx, 31, 0x230424u);
    ctx->pc = 0x230420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23041Cu;
    // 0x230420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23041Cu, 0x230424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230424u;
label_230424:
    // 0x230424: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230428: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x23042c: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x23042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230430: 0x8c432d8c  lw          $v1, 0x2D8C($v0)
    ctx->pc = 0x230430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11660)));
    // 0x230434: 0x8c452d88  lw          $a1, 0x2D88($v0)
    ctx->pc = 0x230434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11656)));
    // 0x230438: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23043c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23043Cu;
    SET_GPR_U32(ctx, 31, 0x230444u);
    ctx->pc = 0x230440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23043Cu;
    // 0x230440: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23043Cu, 0x230444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230444u;
label_230444:
    // 0x230444: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230448: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230448u;
    {
        const bool branch_taken_0x230448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230448) {
            ctx->pc = 0x23045Cu;
            goto label_23045c;
        }
    }
    ctx->pc = 0x230450u;
    // 0x230450: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230454: 0x8c622d90  lw          $v0, 0x2D90($v1)
    ctx->pc = 0x230454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11664)));
label_230458:
    // 0x230458: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23045c:
    // 0x23045c: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x23045cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x230460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230464: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x230464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x230468: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x230468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x23046c: 0x2416000a  addiu       $s6, $zero, 0xA
    ctx->pc = 0x23046cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x230470: 0x1000021b  b           . + 4 + (0x21B << 2)
    ctx->pc = 0x230470u;
    {
        const bool branch_taken_0x230470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230470u;
        // 0x230474: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230470) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230478u;
label_230478:
    // 0x230478: 0x8e220704  lw          $v0, 0x704($s1)
    ctx->pc = 0x230478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x23047c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23047cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230480: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x230480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x230484: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x230484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x230488: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x230488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x23048c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230490: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230494: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230494u;
    SET_GPR_U32(ctx, 31, 0x23049Cu);
    ctx->pc = 0x230498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230494u;
    // 0x230498: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230494u, 0x23049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23049Cu;
label_23049c:
    // 0x23049c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x23049cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2304a0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2304a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2304a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2304a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2304a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2304a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2304ac: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x2304acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x2304b0: 0x8c6234a0  lw          $v0, 0x34A0($v1)
    ctx->pc = 0x2304b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13472)));
    // 0x2304b4: 0x24170061  addiu       $s7, $zero, 0x61
    ctx->pc = 0x2304b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2304b8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2304B8u;
    SET_GPR_U32(ctx, 31, 0x2304C0u);
    ctx->pc = 0x2304BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304B8u;
    // 0x2304bc: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2304B8u, 0x2304C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304C0u;
label_2304c0:
    // 0x2304c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2304c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2304c4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2304C4u;
    {
        const bool branch_taken_0x2304c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2304C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304C4u;
        // 0x2304c8: 0x8e230304  lw          $v1, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304c4) {
            ctx->pc = 0x2304D8u;
            goto label_2304d8;
        }
    }
    ctx->pc = 0x2304CCu;
    // 0x2304cc: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x2304ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2304d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2304D0u;
    {
        const bool branch_taken_0x2304d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304D0u;
        // 0x2304d4: 0x8c6234a8  lw          $v0, 0x34A8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304d0) {
            ctx->pc = 0x2304E0u;
            goto label_2304e0;
        }
    }
    ctx->pc = 0x2304D8u;
label_2304d8:
    // 0x2304d8: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x2304d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2304dc: 0x8c6234a4  lw          $v0, 0x34A4($v1)
    ctx->pc = 0x2304dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13476)));
label_2304e0:
    // 0x2304e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2304e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2304e4: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x2304E4u;
    {
        const bool branch_taken_0x2304e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304E4u;
        // 0x2304e8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304e4) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2304ECu;
label_2304ec:
    // 0x2304ec: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2304ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2304f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2304f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2304f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2304f8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2304f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2304fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2304fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230500: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230500u;
    SET_GPR_U32(ctx, 31, 0x230508u);
    ctx->pc = 0x230504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230500u;
    // 0x230504: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230500u, 0x230508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230508u;
label_230508:
    // 0x230508: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23050c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x23050cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230510: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230514: 0x8c433d08  lw          $v1, 0x3D08($v0)
    ctx->pc = 0x230514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15624)));
    // 0x230518: 0x8c453d04  lw          $a1, 0x3D04($v0)
    ctx->pc = 0x230518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15620)));
    // 0x23051c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x23051cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230520: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230520u;
    SET_GPR_U32(ctx, 31, 0x230528u);
    ctx->pc = 0x230524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230520u;
    // 0x230524: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230520u, 0x230528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230528u;
label_230528:
    // 0x230528: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23052c: 0x544301eb  bnel        $v0, $v1, . + 4 + (0x1EB << 2)
    ctx->pc = 0x23052Cu;
    {
        const bool branch_taken_0x23052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23052c) {
            ctx->pc = 0x230530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23052Cu;
            // 0x230530: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230534u;
    // 0x230534: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230538: 0x8c623d0c  lw          $v0, 0x3D0C($v1)
    ctx->pc = 0x230538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15628)));
    // 0x23053c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x23053cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230540: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x230540u;
    {
        const bool branch_taken_0x230540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230540u;
        // 0x230544: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230540) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230548u;
label_230548:
    // 0x230548: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x230548u;
    SET_GPR_U32(ctx, 31, 0x230550u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x230548u, 0x230550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230550u;
label_230550:
    // 0x230550: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x230554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230558: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x230558u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23055c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23055Cu;
    {
        const bool branch_taken_0x23055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23055c) {
            ctx->pc = 0x230560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23055Cu;
            // 0x230560: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x230564u;
            goto label_230564;
        }
    }
    ctx->pc = 0x230564u;
label_230564:
    // 0x230564: 0x2810  mfhi        $a1
    ctx->pc = 0x230564u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x230568: 0x50a4001c  beql        $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x230568u;
    {
        const bool branch_taken_0x230568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x230568) {
            ctx->pc = 0x23056Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230568u;
            // 0x23056c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2305DCu;
            goto label_2305dc;
        }
    }
    ctx->pc = 0x230570u;
    // 0x230570: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x230570u;
    {
        const bool branch_taken_0x230570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230570u;
        // 0x230574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230570) {
            ctx->pc = 0x230580u;
            goto label_230580;
        }
    }
    ctx->pc = 0x230578u;
    // 0x230578: 0x10a2002e  beq         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x230578u;
    {
        const bool branch_taken_0x230578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230578u;
        // 0x23057c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230578) {
            ctx->pc = 0x230634u;
            goto label_230634;
        }
    }
    ctx->pc = 0x230580u;
label_230580:
    // 0x230580: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x230580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x230584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23058c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x23058cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230590: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230594: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230594u;
    SET_GPR_U32(ctx, 31, 0x23059Cu);
    ctx->pc = 0x230598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230594u;
    // 0x230598: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230594u, 0x23059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23059Cu;
label_23059c:
    // 0x23059c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x23059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2305a0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2305a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2305a4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2305a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2305a8: 0x8c430264  lw          $v1, 0x264($v0)
    ctx->pc = 0x2305a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x2305ac: 0x8c450260  lw          $a1, 0x260($v0)
    ctx->pc = 0x2305acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
    // 0x2305b0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2305b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2305b4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2305B4u;
    SET_GPR_U32(ctx, 31, 0x2305BCu);
    ctx->pc = 0x2305B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305B4u;
    // 0x2305b8: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2305B4u, 0x2305BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305BCu;
label_2305bc:
    // 0x2305bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2305bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2305c0: 0x544301c6  bnel        $v0, $v1, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x2305C0u;
    {
        const bool branch_taken_0x2305c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2305c0) {
            ctx->pc = 0x2305C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2305C0u;
            // 0x2305c4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2305C8u;
    // 0x2305c8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2305c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2305cc: 0x8c620268  lw          $v0, 0x268($v1)
    ctx->pc = 0x2305ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
    // 0x2305d0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2305d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2305d4: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x2305D4u;
    {
        const bool branch_taken_0x2305d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305D4u;
        // 0x2305d8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305d4) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2305DCu;
label_2305dc:
    // 0x2305dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2305dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2305e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305e4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2305e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2305e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2305e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2305ec: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2305ECu;
    SET_GPR_U32(ctx, 31, 0x2305F4u);
    ctx->pc = 0x2305F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305ECu;
    // 0x2305f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2305ECu, 0x2305F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305F4u;
label_2305f4:
    // 0x2305f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2305f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2305f8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2305fc: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230600: 0x8c430270  lw          $v1, 0x270($v0)
    ctx->pc = 0x230600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x230604: 0x8c45026c  lw          $a1, 0x26C($v0)
    ctx->pc = 0x230604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x230608: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23060c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23060Cu;
    SET_GPR_U32(ctx, 31, 0x230614u);
    ctx->pc = 0x230610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23060Cu;
    // 0x230610: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23060Cu, 0x230614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230614u;
label_230614:
    // 0x230614: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230618: 0x544301b0  bnel        $v0, $v1, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x230618u;
    {
        const bool branch_taken_0x230618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230618) {
            ctx->pc = 0x23061Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230618u;
            // 0x23061c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230620u;
    // 0x230620: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230624: 0x8c620274  lw          $v0, 0x274($v1)
    ctx->pc = 0x230624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
    // 0x230628: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23062c: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x23062Cu;
    {
        const bool branch_taken_0x23062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23062Cu;
        // 0x230630: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23062c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230634u;
label_230634:
    // 0x230634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23063c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x23063cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230640: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230644: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230644u;
    SET_GPR_U32(ctx, 31, 0x23064Cu);
    ctx->pc = 0x230648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230644u;
    // 0x230648: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230644u, 0x23064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23064Cu;
label_23064c:
    // 0x23064c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x23064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230650: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230654: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230658: 0x8c43027c  lw          $v1, 0x27C($v0)
    ctx->pc = 0x230658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x23065c: 0x8c450278  lw          $a1, 0x278($v0)
    ctx->pc = 0x23065cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x230660: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230664: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230664u;
    SET_GPR_U32(ctx, 31, 0x23066Cu);
    ctx->pc = 0x230668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230664u;
    // 0x230668: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230664u, 0x23066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23066Cu;
label_23066c:
    // 0x23066c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230670: 0x5443019a  bnel        $v0, $v1, . + 4 + (0x19A << 2)
    ctx->pc = 0x230670u;
    {
        const bool branch_taken_0x230670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230670) {
            ctx->pc = 0x230674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230670u;
            // 0x230674: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230678u;
    // 0x230678: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23067c: 0x8c620280  lw          $v0, 0x280($v1)
    ctx->pc = 0x23067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x230680: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230684: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x230684u;
    {
        const bool branch_taken_0x230684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230684u;
        // 0x230688: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230684) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x23068Cu;
label_23068c:
    // 0x23068c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23068Cu;
    SET_GPR_U32(ctx, 31, 0x230694u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23068Cu, 0x230694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230694u;
label_230694:
    // 0x230694: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230698: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x230698u;
    {
        const bool branch_taken_0x230698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230698u;
        // 0x23069c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230698) {
            ctx->pc = 0x2306F8u;
            goto label_2306f8;
        }
    }
    ctx->pc = 0x2306A0u;
    // 0x2306a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2306a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2306a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2306a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2306a8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2306a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2306ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2306acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2306b0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2306B0u;
    SET_GPR_U32(ctx, 31, 0x2306B8u);
    ctx->pc = 0x2306B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306B0u;
    // 0x2306b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2306B0u, 0x2306B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306B8u;
label_2306b8:
    // 0x2306b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2306b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2306bc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2306bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2306c0: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2306c4: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x2306c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x2306c8: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x2306c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x2306cc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2306ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2306d0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2306D0u;
    SET_GPR_U32(ctx, 31, 0x2306D8u);
    ctx->pc = 0x2306D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306D0u;
    // 0x2306d4: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2306D0u, 0x2306D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306D8u;
label_2306d8:
    // 0x2306d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2306d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2306dc: 0x5443017f  bnel        $v0, $v1, . + 4 + (0x17F << 2)
    ctx->pc = 0x2306DCu;
    {
        const bool branch_taken_0x2306dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2306dc) {
            ctx->pc = 0x2306E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2306DCu;
            // 0x2306e0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2306E4u;
    // 0x2306e4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2306e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2306e8: 0x8c620298  lw          $v0, 0x298($v1)
    ctx->pc = 0x2306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x2306ec: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2306ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2306f0: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2306F0u;
    {
        const bool branch_taken_0x2306f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2306F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306F0u;
        // 0x2306f4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306f0) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2306F8u;
label_2306f8:
    // 0x2306f8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2306f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2306fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2306fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230704: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230708: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23070c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23070Cu;
    SET_GPR_U32(ctx, 31, 0x230714u);
    ctx->pc = 0x230710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23070Cu;
    // 0x230710: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23070Cu, 0x230714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230714u;
label_230714:
    // 0x230714: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230718: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x23071c: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x23071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230720: 0x8c4302c8  lw          $v1, 0x2C8($v0)
    ctx->pc = 0x230720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x230724: 0x8c4502c4  lw          $a1, 0x2C4($v0)
    ctx->pc = 0x230724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
    // 0x230728: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23072c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23072Cu;
    SET_GPR_U32(ctx, 31, 0x230734u);
    ctx->pc = 0x230730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23072Cu;
    // 0x230730: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23072Cu, 0x230734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230734u;
label_230734:
    // 0x230734: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230738: 0x54430168  bnel        $v0, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x230738u;
    {
        const bool branch_taken_0x230738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230738) {
            ctx->pc = 0x23073Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230738u;
            // 0x23073c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230740u;
    // 0x230740: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230744: 0x8c6202cc  lw          $v0, 0x2CC($v1)
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x230748: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23074c: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x23074Cu;
    {
        const bool branch_taken_0x23074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23074Cu;
        // 0x230750: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23074c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230754u;
label_230754:
    // 0x230754: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x230754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x230758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23075c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23075cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230760: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230764: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230768: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230768u;
    SET_GPR_U32(ctx, 31, 0x230770u);
    ctx->pc = 0x23076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230768u;
    // 0x23076c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230768u, 0x230770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230770u;
label_230770:
    // 0x230770: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230774: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230778: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x23077c: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x23077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x230780: 0x8c450284  lw          $a1, 0x284($v0)
    ctx->pc = 0x230780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x230784: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230788: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230788u;
    SET_GPR_U32(ctx, 31, 0x230790u);
    ctx->pc = 0x23078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230788u;
    // 0x23078c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230788u, 0x230790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230790u;
label_230790:
    // 0x230790: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230794: 0x54430151  bnel        $v0, $v1, . + 4 + (0x151 << 2)
    ctx->pc = 0x230794u;
    {
        const bool branch_taken_0x230794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230794) {
            ctx->pc = 0x230798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230794u;
            // 0x230798: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x23079Cu;
    // 0x23079c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x23079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2307a0: 0x8c62028c  lw          $v0, 0x28C($v1)
    ctx->pc = 0x2307a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
    // 0x2307a4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2307a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2307a8: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x2307A8u;
    {
        const bool branch_taken_0x2307a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307A8u;
        // 0x2307ac: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307a8) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2307B0u;
label_2307b0:
    // 0x2307b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2307B0u;
    SET_GPR_U32(ctx, 31, 0x2307B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2307B0u, 0x2307B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307B8u;
label_2307b8:
    // 0x2307b8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2307b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2307bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2307BCu;
    {
        const bool branch_taken_0x2307bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307BCu;
        // 0x2307c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307bc) {
            ctx->pc = 0x2307CCu;
            goto label_2307cc;
        }
    }
    ctx->pc = 0x2307C4u;
    // 0x2307c4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2307C4u;
    {
        const bool branch_taken_0x2307c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2307C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307C4u;
        // 0x2307c8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307c4) {
            ctx->pc = 0x230828u;
            goto label_230828;
        }
    }
    ctx->pc = 0x2307CCu;
label_2307cc:
    // 0x2307cc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2307ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2307d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2307d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2307d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2307d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2307d8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2307d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2307dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2307dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2307e0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2307E0u;
    SET_GPR_U32(ctx, 31, 0x2307E8u);
    ctx->pc = 0x2307E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307E0u;
    // 0x2307e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2307E0u, 0x2307E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307E8u;
label_2307e8:
    // 0x2307e8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2307e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2307ec: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2307ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2307f0: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2307f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2307f4: 0x8c43071c  lw          $v1, 0x71C($v0)
    ctx->pc = 0x2307f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x2307f8: 0x8c450718  lw          $a1, 0x718($v0)
    ctx->pc = 0x2307f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
    // 0x2307fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2307fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230800: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230800u;
    SET_GPR_U32(ctx, 31, 0x230808u);
    ctx->pc = 0x230804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230800u;
    // 0x230804: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230800u, 0x230808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230808u;
label_230808:
    // 0x230808: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23080c: 0x54430133  bnel        $v0, $v1, . + 4 + (0x133 << 2)
    ctx->pc = 0x23080Cu;
    {
        const bool branch_taken_0x23080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23080c) {
            ctx->pc = 0x230810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23080Cu;
            // 0x230810: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230814u;
    // 0x230814: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230818: 0x8c620720  lw          $v0, 0x720($v1)
    ctx->pc = 0x230818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1824)));
    // 0x23081c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x23081cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230820: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x230820u;
    {
        const bool branch_taken_0x230820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230820u;
        // 0x230824: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230820) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230828u;
label_230828:
    // 0x230828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23082c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23082cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230830: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230834: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230838: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230838u;
    SET_GPR_U32(ctx, 31, 0x230840u);
    ctx->pc = 0x23083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230838u;
    // 0x23083c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230838u, 0x230840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230840u;
label_230840:
    // 0x230840: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230844: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230848: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x23084c: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x23084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
    // 0x230850: 0x8c45070c  lw          $a1, 0x70C($v0)
    ctx->pc = 0x230850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1804)));
    // 0x230854: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230858: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230858u;
    SET_GPR_U32(ctx, 31, 0x230860u);
    ctx->pc = 0x23085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230858u;
    // 0x23085c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230858u, 0x230860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230860u;
label_230860:
    // 0x230860: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230864: 0x5443011d  bnel        $v0, $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x230864u;
    {
        const bool branch_taken_0x230864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230864) {
            ctx->pc = 0x230868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230864u;
            // 0x230868: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x23086Cu;
    // 0x23086c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x23086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230870: 0x8c620714  lw          $v0, 0x714($v1)
    ctx->pc = 0x230870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1812)));
    // 0x230874: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230878: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x230878u;
    {
        const bool branch_taken_0x230878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230878u;
        // 0x23087c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230878) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230880u;
label_230880:
    // 0x230880: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x230880u;
    SET_GPR_U32(ctx, 31, 0x230888u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x230880u, 0x230888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230888u;
label_230888:
    // 0x230888: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x230888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23088c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230890: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x230890u;
    {
        const bool branch_taken_0x230890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230890u;
        // 0x230894: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230890) {
            ctx->pc = 0x23090Cu;
            goto label_23090c;
        }
    }
    ctx->pc = 0x230898u;
    // 0x230898: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x230898u;
    {
        const bool branch_taken_0x230898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230898u;
        // 0x23089c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230898) {
            ctx->pc = 0x2308B4u;
            goto label_2308b4;
        }
    }
    ctx->pc = 0x2308A0u;
    // 0x2308a0: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2308A0u;
    {
        const bool branch_taken_0x2308a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2308A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308A0u;
        // 0x2308a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308a0) {
            ctx->pc = 0x230964u;
            goto label_230964;
        }
    }
    ctx->pc = 0x2308A8u;
    // 0x2308a8: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2308A8u;
    {
        const bool branch_taken_0x2308a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2308ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308A8u;
        // 0x2308ac: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308a8) {
            ctx->pc = 0x2309BCu;
            goto label_2309bc;
        }
    }
    ctx->pc = 0x2308B0u;
    // 0x2308b0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2308b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2308b4:
    // 0x2308b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2308b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2308b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2308b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2308bc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2308c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2308c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2308c4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2308C4u;
    SET_GPR_U32(ctx, 31, 0x2308CCu);
    ctx->pc = 0x2308C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308C4u;
    // 0x2308c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2308C4u, 0x2308CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308CCu;
label_2308cc:
    // 0x2308cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2308ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2308d0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2308d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2308d4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2308d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2308d8: 0x8c43071c  lw          $v1, 0x71C($v0)
    ctx->pc = 0x2308d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x2308dc: 0x8c450718  lw          $a1, 0x718($v0)
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
    // 0x2308e0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2308e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2308e4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2308E4u;
    SET_GPR_U32(ctx, 31, 0x2308ECu);
    ctx->pc = 0x2308E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308E4u;
    // 0x2308e8: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2308E4u, 0x2308ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308ECu;
label_2308ec:
    // 0x2308ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2308f0: 0x544300fa  bnel        $v0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x2308F0u;
    {
        const bool branch_taken_0x2308f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2308f0) {
            ctx->pc = 0x2308F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2308F0u;
            // 0x2308f4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2308F8u;
    // 0x2308f8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2308f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2308fc: 0x8c620720  lw          $v0, 0x720($v1)
    ctx->pc = 0x2308fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1824)));
    // 0x230900: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230904: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x230904u;
    {
        const bool branch_taken_0x230904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230904u;
        // 0x230908: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230904) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x23090Cu;
label_23090c:
    // 0x23090c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230914: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230918: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23091c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23091Cu;
    SET_GPR_U32(ctx, 31, 0x230924u);
    ctx->pc = 0x230920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23091Cu;
    // 0x230920: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23091Cu, 0x230924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230924u;
label_230924:
    // 0x230924: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230928: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x23092c: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x23092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230930: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x230930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
    // 0x230934: 0x8c45070c  lw          $a1, 0x70C($v0)
    ctx->pc = 0x230934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1804)));
    // 0x230938: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23093c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23093Cu;
    SET_GPR_U32(ctx, 31, 0x230944u);
    ctx->pc = 0x230940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23093Cu;
    // 0x230940: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23093Cu, 0x230944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230944u;
label_230944:
    // 0x230944: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230948: 0x544300e4  bnel        $v0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x230948u;
    {
        const bool branch_taken_0x230948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230948) {
            ctx->pc = 0x23094Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230948u;
            // 0x23094c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230950u;
    // 0x230950: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230954: 0x8c620714  lw          $v0, 0x714($v1)
    ctx->pc = 0x230954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1812)));
    // 0x230958: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23095c: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x23095Cu;
    {
        const bool branch_taken_0x23095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23095Cu;
        // 0x230960: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23095c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230964u;
label_230964:
    // 0x230964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23096c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x23096cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230970: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230974: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230974u;
    SET_GPR_U32(ctx, 31, 0x23097Cu);
    ctx->pc = 0x230978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230974u;
    // 0x230978: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230974u, 0x23097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23097Cu;
label_23097c:
    // 0x23097c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x23097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230980: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230984: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230988: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x230988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x23098c: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x23098cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x230990: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230994: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230994u;
    SET_GPR_U32(ctx, 31, 0x23099Cu);
    ctx->pc = 0x230998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230994u;
    // 0x230998: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230994u, 0x23099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23099Cu;
label_23099c:
    // 0x23099c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2309a0: 0x544300ce  bnel        $v0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x2309A0u;
    {
        const bool branch_taken_0x2309a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2309a0) {
            ctx->pc = 0x2309A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2309A0u;
            // 0x2309a4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2309A8u;
    // 0x2309a8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2309a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2309ac: 0x8c620298  lw          $v0, 0x298($v1)
    ctx->pc = 0x2309acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x2309b0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2309b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2309b4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2309B4u;
    {
        const bool branch_taken_0x2309b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309B4u;
        // 0x2309b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309b4) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x2309BCu;
label_2309bc:
    // 0x2309bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2309bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2309c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309c4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2309c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2309c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2309c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2309cc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2309CCu;
    SET_GPR_U32(ctx, 31, 0x2309D4u);
    ctx->pc = 0x2309D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2309CCu;
    // 0x2309d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2309CCu, 0x2309D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309D4u;
label_2309d4:
    // 0x2309d4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2309d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2309d8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2309d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2309dc: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2309dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2309e0: 0x8c4302c8  lw          $v1, 0x2C8($v0)
    ctx->pc = 0x2309e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x2309e4: 0x8c4502c4  lw          $a1, 0x2C4($v0)
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
    // 0x2309e8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2309e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2309ec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2309ECu;
    SET_GPR_U32(ctx, 31, 0x2309F4u);
    ctx->pc = 0x2309F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2309ECu;
    // 0x2309f0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2309ECu, 0x2309F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309F4u;
label_2309f4:
    // 0x2309f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2309f8: 0x544300b8  bnel        $v0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2309F8u;
    {
        const bool branch_taken_0x2309f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2309f8) {
            ctx->pc = 0x2309FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2309F8u;
            // 0x2309fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230A00u;
    // 0x230a00: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230a04: 0x8c6202cc  lw          $v0, 0x2CC($v1)
    ctx->pc = 0x230a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x230a08: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230a0c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x230A0Cu;
    {
        const bool branch_taken_0x230a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A0Cu;
        // 0x230a10: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a0c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230A14u;
label_230a14:
    // 0x230a14: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x230a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x230a18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a20: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230a24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230a28: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230A28u;
    SET_GPR_U32(ctx, 31, 0x230A30u);
    ctx->pc = 0x230A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A28u;
    // 0x230a2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230A28u, 0x230A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A30u;
label_230a30:
    // 0x230a30: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230a34: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230a38: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230a3c: 0x8c43071c  lw          $v1, 0x71C($v0)
    ctx->pc = 0x230a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x230a40: 0x8c450718  lw          $a1, 0x718($v0)
    ctx->pc = 0x230a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
    // 0x230a44: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230a48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230A48u;
    SET_GPR_U32(ctx, 31, 0x230A50u);
    ctx->pc = 0x230A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A48u;
    // 0x230a4c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230A48u, 0x230A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A50u;
label_230a50:
    // 0x230a50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230a54: 0x544300a1  bnel        $v0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x230A54u;
    {
        const bool branch_taken_0x230a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230a54) {
            ctx->pc = 0x230A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230A54u;
            // 0x230a58: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230A5Cu;
    // 0x230a5c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230a60: 0x8c620720  lw          $v0, 0x720($v1)
    ctx->pc = 0x230a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1824)));
    // 0x230a64: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230a68: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x230A68u;
    {
        const bool branch_taken_0x230a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A68u;
        // 0x230a6c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a68) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230A70u;
label_230a70:
    // 0x230a70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x230A70u;
    SET_GPR_U32(ctx, 31, 0x230A78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x230A70u, 0x230A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A78u;
label_230a78:
    // 0x230a78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230a7c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x230A7Cu;
    {
        const bool branch_taken_0x230a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A7Cu;
        // 0x230a80: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a7c) {
            ctx->pc = 0x230ADCu;
            goto label_230adc;
        }
    }
    ctx->pc = 0x230A84u;
    // 0x230a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a8c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230a90: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230a94: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230A94u;
    SET_GPR_U32(ctx, 31, 0x230A9Cu);
    ctx->pc = 0x230A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A94u;
    // 0x230a98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230A94u, 0x230A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A9Cu;
label_230a9c:
    // 0x230a9c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230aa0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230aa4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230aa8: 0x8c43071c  lw          $v1, 0x71C($v0)
    ctx->pc = 0x230aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x230aac: 0x8c450718  lw          $a1, 0x718($v0)
    ctx->pc = 0x230aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
    // 0x230ab0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230ab4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230AB4u;
    SET_GPR_U32(ctx, 31, 0x230ABCu);
    ctx->pc = 0x230AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230AB4u;
    // 0x230ab8: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230AB4u, 0x230ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230ABCu;
label_230abc:
    // 0x230abc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230ac0: 0x54430086  bnel        $v0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x230AC0u;
    {
        const bool branch_taken_0x230ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230ac0) {
            ctx->pc = 0x230AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230AC0u;
            // 0x230ac4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230AC8u;
    // 0x230ac8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230acc: 0x8c620720  lw          $v0, 0x720($v1)
    ctx->pc = 0x230accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1824)));
    // 0x230ad0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230ad4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x230AD4u;
    {
        const bool branch_taken_0x230ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AD4u;
        // 0x230ad8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ad4) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230ADCu;
label_230adc:
    // 0x230adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ae4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230ae8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230aec: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230AECu;
    SET_GPR_U32(ctx, 31, 0x230AF4u);
    ctx->pc = 0x230AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230AECu;
    // 0x230af0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230AECu, 0x230AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230AF4u;
label_230af4:
    // 0x230af4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230af8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230afc: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230b00: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x230b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
    // 0x230b04: 0x8c45070c  lw          $a1, 0x70C($v0)
    ctx->pc = 0x230b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1804)));
    // 0x230b08: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230b0c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230B0Cu;
    SET_GPR_U32(ctx, 31, 0x230B14u);
    ctx->pc = 0x230B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B0Cu;
    // 0x230b10: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230B0Cu, 0x230B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B14u;
label_230b14:
    // 0x230b14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230b18: 0x54430070  bnel        $v0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x230B18u;
    {
        const bool branch_taken_0x230b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230b18) {
            ctx->pc = 0x230B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230B18u;
            // 0x230b1c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230B20u;
    // 0x230b20: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230b24: 0x8c620714  lw          $v0, 0x714($v1)
    ctx->pc = 0x230b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1812)));
    // 0x230b28: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230b2c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x230B2Cu;
    {
        const bool branch_taken_0x230b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B2Cu;
        // 0x230b30: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b2c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230B34u;
label_230b34:
    // 0x230b34: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x230b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x230b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b40: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230b44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230b48: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230B48u;
    SET_GPR_U32(ctx, 31, 0x230B50u);
    ctx->pc = 0x230B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B48u;
    // 0x230b4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230B48u, 0x230B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B50u;
label_230b50:
    // 0x230b50: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230b54: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230b58: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230b5c: 0x8c433a7c  lw          $v1, 0x3A7C($v0)
    ctx->pc = 0x230b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14972)));
    // 0x230b60: 0x8c453a78  lw          $a1, 0x3A78($v0)
    ctx->pc = 0x230b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14968)));
    // 0x230b64: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230b68: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230B68u;
    SET_GPR_U32(ctx, 31, 0x230B70u);
    ctx->pc = 0x230B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B68u;
    // 0x230b6c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230B68u, 0x230B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B70u;
label_230b70:
    // 0x230b70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230b74: 0x54430059  bnel        $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x230B74u;
    {
        const bool branch_taken_0x230b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230b74) {
            ctx->pc = 0x230B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230B74u;
            // 0x230b78: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230B7Cu;
    // 0x230b7c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230b80: 0x8c623a80  lw          $v0, 0x3A80($v1)
    ctx->pc = 0x230b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14976)));
    // 0x230b84: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230b88: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x230B88u;
    {
        const bool branch_taken_0x230b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B88u;
        // 0x230b8c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b88) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230B90u;
label_230b90:
    // 0x230b90: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x230b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x230b94: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x230b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x230b98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230b9c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x230B9Cu;
    {
        const bool branch_taken_0x230b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B9Cu;
        // 0x230ba0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b9c) {
            ctx->pc = 0x230BF8u;
            goto label_230bf8;
        }
    }
    ctx->pc = 0x230BA4u;
    // 0x230ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ba8: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x230ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x230bac: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230bb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x230bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bb4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230BB4u;
    SET_GPR_U32(ctx, 31, 0x230BBCu);
    ctx->pc = 0x230BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BB4u;
    // 0x230bb8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230BB4u, 0x230BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BBCu;
label_230bbc:
    // 0x230bbc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230bc0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230bc4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230bc8: 0x8c43390c  lw          $v1, 0x390C($v0)
    ctx->pc = 0x230bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14604)));
    // 0x230bcc: 0x8c453908  lw          $a1, 0x3908($v0)
    ctx->pc = 0x230bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14600)));
    // 0x230bd0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230bd4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230BD4u;
    SET_GPR_U32(ctx, 31, 0x230BDCu);
    ctx->pc = 0x230BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BD4u;
    // 0x230bd8: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230BD4u, 0x230BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BDCu;
label_230bdc:
    // 0x230bdc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230be0: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x230BE0u;
    {
        const bool branch_taken_0x230be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230be0) {
            ctx->pc = 0x230C6Cu;
            goto label_230c6c;
        }
    }
    ctx->pc = 0x230BE8u;
    // 0x230be8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230bec: 0x8c623910  lw          $v0, 0x3910($v1)
    ctx->pc = 0x230becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14608)));
    // 0x230bf0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x230BF0u;
    {
        const bool branch_taken_0x230bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BF0u;
        // 0x230bf4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bf0) {
            ctx->pc = 0x230C6Cu;
            goto label_230c6c;
        }
    }
    ctx->pc = 0x230BF8u;
label_230bf8:
    // 0x230bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bfc: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x230bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x230c00: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230c04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x230c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c08: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230C08u;
    SET_GPR_U32(ctx, 31, 0x230C10u);
    ctx->pc = 0x230C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C08u;
    // 0x230c0c: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230C08u, 0x230C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C10u;
label_230c10:
    // 0x230c10: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x230c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230c14: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230c18: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230c1c: 0x8ca2380c  lw          $v0, 0x380C($a1)
    ctx->pc = 0x230c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14348)));
    // 0x230c20: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230C20u;
    SET_GPR_U32(ctx, 31, 0x230C28u);
    ctx->pc = 0x230C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C20u;
    // 0x230c24: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230C20u, 0x230C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C28u;
label_230c28:
    // 0x230c28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230c2c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x230C2Cu;
    {
        const bool branch_taken_0x230c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C2Cu;
        // 0x230c30: 0x8e230304  lw          $v1, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c2c) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230C34u;
    // 0x230c34: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x230c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x230c38: 0x8c623814  lw          $v0, 0x3814($v1)
    ctx->pc = 0x230c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14356)));
    // 0x230c3c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x230C3Cu;
    {
        const bool branch_taken_0x230c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C3Cu;
        // 0x230c40: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c3c) {
            ctx->pc = 0x230C6Cu;
            goto label_230c6c;
        }
    }
    ctx->pc = 0x230C44u;
    // 0x230c44: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x230C44u;
    SET_GPR_U32(ctx, 31, 0x230C4Cu);
    ctx->pc = 0x230C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C44u;
    // 0x230c48: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x230C44u, 0x230C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C4Cu;
label_230c4c:
    // 0x230c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x230C4Cu;
    {
        const bool branch_taken_0x230c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230c4c) {
            ctx->pc = 0x230C6Cu;
            goto label_230c6c;
        }
    }
    ctx->pc = 0x230C54u;
label_230c54:
    // 0x230c54: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x230c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x230c58: 0x8c623810  lw          $v0, 0x3810($v1)
    ctx->pc = 0x230c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14352)));
    // 0x230c5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230C5Cu;
    {
        const bool branch_taken_0x230c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C5Cu;
        // 0x230c60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c5c) {
            ctx->pc = 0x230C6Cu;
            goto label_230c6c;
        }
    }
    ctx->pc = 0x230C64u;
    // 0x230c64: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x230C64u;
    SET_GPR_U32(ctx, 31, 0x230C6Cu);
    ctx->pc = 0x230C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C64u;
    // 0x230c68: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x230C64u, 0x230C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C6Cu;
label_230c6c:
    // 0x230c6c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x230c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x230c70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230c74: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x230c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x230c78: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x230c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x230c7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x230C7Cu;
    {
        const bool branch_taken_0x230c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C7Cu;
        // 0x230c80: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c7c) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230C84u;
label_230c84:
    // 0x230c84: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x230c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x230c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c90: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x230c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x230c94: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230c98: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x230C98u;
    SET_GPR_U32(ctx, 31, 0x230CA0u);
    ctx->pc = 0x230C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C98u;
    // 0x230c9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x230C98u, 0x230CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CA0u;
label_230ca0:
    // 0x230ca0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x230ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230ca4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x230ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x230ca8: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x230ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x230cac: 0x8c431210  lw          $v1, 0x1210($v0)
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x230cb0: 0x8c45120c  lw          $a1, 0x120C($v0)
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4620)));
    // 0x230cb4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230cb8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230CB8u;
    SET_GPR_U32(ctx, 31, 0x230CC0u);
    ctx->pc = 0x230CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CB8u;
    // 0x230cbc: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230CB8u, 0x230CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CC0u;
label_230cc0:
    // 0x230cc0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230cc4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230CC4u;
    {
        const bool branch_taken_0x230cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CC4u;
        // 0x230cc8: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cc4) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230CCCu;
    // 0x230ccc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x230cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x230cd0: 0x8c621214  lw          $v0, 0x1214($v1)
    ctx->pc = 0x230cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4628)));
    // 0x230cd4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x230cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230cd8: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x230cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_230cdc:
    // 0x230cdc: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x230cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
label_230ce0:
    // 0x230ce0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x230ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230ce4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cec: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x230cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cf0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x230cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cf8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x230CF8u;
    SET_GPR_U32(ctx, 31, 0x230D00u);
    ctx->pc = 0x230CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CF8u;
    // 0x230cfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x230CF8u, 0x230D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D00u;
label_230d00:
    // 0x230d00: 0x3ae204e2  xori        $v0, $s7, 0x4E2
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1250);
    // 0x230d04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230D04u;
    {
        const bool branch_taken_0x230d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D04u;
        // 0x230d08: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d04) {
            ctx->pc = 0x230D24u;
            goto label_230d24;
        }
    }
    ctx->pc = 0x230D0Cu;
    // 0x230d0c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x230d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d10: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x230d10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x230d14: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x230d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d1c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x230D1Cu;
    SET_GPR_U32(ctx, 31, 0x230D24u);
    ctx->pc = 0x230D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D1Cu;
    // 0x230d20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x230D1Cu, 0x230D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D24u;
label_230d24:
    // 0x230d24: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x230d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x230d28: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x230D28u;
    SET_GPR_U32(ctx, 31, 0x230D30u);
    ctx->pc = 0x230D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D28u;
    // 0x230d2c: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x230D28u, 0x230D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D30u;
label_230d30:
    // 0x230d30: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x230d34: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x230d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x230d38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230D38u;
    {
        const bool branch_taken_0x230d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D38u;
        // 0x230d3c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d38) {
            ctx->pc = 0x230D58u;
            goto label_230d58;
        }
    }
    ctx->pc = 0x230D40u;
    // 0x230d40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230d44: 0x24429070  addiu       $v0, $v0, -0x6F90
    ctx->pc = 0x230d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938736));
    // 0x230d48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230d4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230d50: 0x800008  jr          $a0
    ctx->pc = 0x230D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D58u: goto label_230d58;
            case 0x230D70u: goto label_230d70;
            case 0x230D8Cu: goto label_230d8c;
            case 0x230DB0u: goto label_230db0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230D58u;
label_230d58:
    // 0x230d58: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x230d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230d60: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x230d64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230d68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x230D68u;
    {
        const bool branch_taken_0x230d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D68u;
        // 0x230d6c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d68) {
            ctx->pc = 0x230DA8u;
            goto label_230da8;
        }
    }
    ctx->pc = 0x230D70u;
label_230d70:
    // 0x230d70: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x230d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230d78: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x230d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x230d7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x230d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x230d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230D84u;
    {
        const bool branch_taken_0x230d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D84u;
        // 0x230d88: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d84) {
            ctx->pc = 0x230DA8u;
            goto label_230da8;
        }
    }
    ctx->pc = 0x230D8Cu;
label_230d8c:
    // 0x230d8c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x230d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230d94: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x230d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x230d98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x230d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x230d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230da0: 0x0  nop
    ctx->pc = 0x230da0u;
    // NOP
    // 0x230da4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_230da8:
    // 0x230da8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x230da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x230dac: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x230dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_230db0:
    // 0x230db0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x230db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x230db4: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x230db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230dbc: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x230dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x230dc0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x230dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x230dc4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x230dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x230dc8: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x230dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230dcc:
    // 0x230dcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230dd0: 0x0  nop
    ctx->pc = 0x230dd0u;
    // NOP
    // 0x230dd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x230dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230dd8: 0x0  nop
    ctx->pc = 0x230dd8u;
    // NOP
    // 0x230ddc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x230DDCu;
    {
        const bool branch_taken_0x230ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DDCu;
        // 0x230de0: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ddc) {
            ctx->pc = 0x230DFCu;
            goto label_230dfc;
        }
    }
    ctx->pc = 0x230DE4u;
    // 0x230de4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x230de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230de8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x230de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x230dec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x230decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230df0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x230df4: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x230df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x230df8: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x230df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_230dfc:
    // 0x230dfc: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x230dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x230e00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x230E00u;
    {
        const bool branch_taken_0x230e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E00u;
        // 0x230e04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e00) {
            ctx->pc = 0x230E6Cu;
            goto label_230e6c;
        }
    }
    ctx->pc = 0x230E08u;
    // 0x230e08: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x230e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x230e0c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x230E0Cu;
    SET_GPR_U32(ctx, 31, 0x230E14u);
    ctx->pc = 0x230E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E0Cu;
    // 0x230e10: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x230E0Cu, 0x230E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E14u;
label_230e14:
    // 0x230e14: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x230e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e1c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x230e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x230e20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x230e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x230e24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x230e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x230e28: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x230e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x230e2c: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x230e2cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x230e30: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x230E30u;
    SET_GPR_U32(ctx, 31, 0x230E38u);
    ctx->pc = 0x230E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E30u;
    // 0x230e34: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x230E30u, 0x230E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E38u;
label_230e38:
    // 0x230e38: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x230e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x230e3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x230e40: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x230e40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x230e44: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x230e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x230e48: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x230E48u;
    SET_GPR_U32(ctx, 31, 0x230E50u);
    ctx->pc = 0x230E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E48u;
    // 0x230e4c: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x230E48u, 0x230E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E50u;
label_230e50:
    // 0x230e50: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x230e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e54: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x230e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x230e58: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x230e58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x230e5c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x230e5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x230e60: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x230E60u;
    SET_GPR_U32(ctx, 31, 0x230E68u);
    ctx->pc = 0x230E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E60u;
    // 0x230e64: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x230E60u, 0x230E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E68u;
label_230e68:
    // 0x230e68: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x230e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_230e6c:
    // 0x230e6c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x230E6Cu;
    SET_GPR_U32(ctx, 31, 0x230E74u);
    ctx->pc = 0x230E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E6Cu;
    // 0x230e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x230E6Cu, 0x230E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E74u;
label_230e74:
    // 0x230e74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230E74u;
    {
        const bool branch_taken_0x230e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e74) {
            ctx->pc = 0x230E84u;
            goto label_230e84;
        }
    }
    ctx->pc = 0x230E7Cu;
    // 0x230e7c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x230E7Cu;
    SET_GPR_U32(ctx, 31, 0x230E84u);
    ctx->pc = 0x230E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E7Cu;
    // 0x230e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x230E7Cu, 0x230E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E84u;
label_230e84:
    // 0x230e84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230e88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x230e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x230e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e90: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x230E90u;
    SET_GPR_U32(ctx, 31, 0x230E98u);
    ctx->pc = 0x230E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E90u;
    // 0x230e94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x230E90u, 0x230E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E98u;
label_230e98:
    // 0x230e98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x230e98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x230e9c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x230E9Cu;
    SET_GPR_U32(ctx, 31, 0x230EA4u);
    ctx->pc = 0x230EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E9Cu;
    // 0x230ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x230E9Cu, 0x230EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA4u;
label_230ea4:
    // 0x230ea4: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x230ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
label_230ea8:
    // 0x230ea8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x230EA8u;
    {
        const bool branch_taken_0x230ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230ea8) {
            ctx->pc = 0x230EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230EA8u;
            // 0x230eac: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230EBCu;
            goto label_230ebc;
        }
    }
    ctx->pc = 0x230EB0u;
    // 0x230eb0: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x230EB0u;
    SET_GPR_U32(ctx, 31, 0x230EB8u);
    ctx->pc = 0x230EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EB0u;
    // 0x230eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x230EB0u, 0x230EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EB8u;
label_230eb8:
    // 0x230eb8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x230eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_230ebc:
    // 0x230ebc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x230ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x230ec0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x230EC0u;
    {
        const bool branch_taken_0x230ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC0u;
        // 0x230ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec0) {
            ctx->pc = 0x230ECCu;
            goto label_230ecc;
        }
    }
    ctx->pc = 0x230EC8u;
    // 0x230ec8: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x230ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_230ecc:
    // 0x230ecc: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x230eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x230ed0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230ED0u;
    {
        const bool branch_taken_0x230ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230ED0u;
        // 0x230ed4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ed0) {
            ctx->pc = 0x230EECu;
            goto label_230eec;
        }
    }
    ctx->pc = 0x230ED8u;
    // 0x230ed8: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x230ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x230edc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x230ee0: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x230ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x230ee4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x230ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x230ee8: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x230ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_230eec:
    // 0x230eec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x230eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x230ef0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x230ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x230ef4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x230ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230ef8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x230ef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x230efc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x230efcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230f00: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x230f00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230f04: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x230f04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230f08: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x230f08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230f10: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x230f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x230f14: 0x3e00008  jr          $ra
    ctx->pc = 0x230F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F14u;
        // 0x230f18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230F1Cu;
    // 0x230f1c: 0x0  nop
    ctx->pc = 0x230f1cu;
    // NOP
    ctx->pc = 0x230f20u;
}
