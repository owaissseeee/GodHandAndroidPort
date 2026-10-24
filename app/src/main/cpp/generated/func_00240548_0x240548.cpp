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

// Function: func_00240548
// Address: 0x240548 - 0x240fa0
void func_00240548_0x240548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00240548_0x240548");
#endif

    switch (ctx->pc) {
        case 0x2405d4u: goto label_2405d4;
        case 0x24070cu: goto label_24070c;
        case 0x24073cu: goto label_24073c;
        case 0x240834u: goto label_240834;
        case 0x240854u: goto label_240854;
        case 0x240860u: goto label_240860;
        case 0x240914u: goto label_240914;
        case 0x24093cu: goto label_24093c;
        case 0x240a0cu: goto label_240a0c;
        case 0x240a80u: goto label_240a80;
        case 0x240a94u: goto label_240a94;
        case 0x240aa4u: goto label_240aa4;
        case 0x240ad4u: goto label_240ad4;
        case 0x240ae4u: goto label_240ae4;
        case 0x240af4u: goto label_240af4;
        case 0x240b04u: goto label_240b04;
        case 0x240b3cu: goto label_240b3c;
        case 0x240b4cu: goto label_240b4c;
        case 0x240b8cu: goto label_240b8c;
        case 0x240b9cu: goto label_240b9c;
        case 0x240bd8u: goto label_240bd8;
        case 0x240c1cu: goto label_240c1c;
        case 0x240c2cu: goto label_240c2c;
        case 0x240c58u: goto label_240c58;
        case 0x240c78u: goto label_240c78;
        case 0x240ca0u: goto label_240ca0;
        case 0x240cacu: goto label_240cac;
        case 0x240cccu: goto label_240ccc;
        case 0x240d5cu: goto label_240d5c;
        case 0x240d88u: goto label_240d88;
        case 0x240dccu: goto label_240dcc;
        case 0x240e94u: goto label_240e94;
        case 0x240ec0u: goto label_240ec0;
        case 0x240f4cu: goto label_240f4c;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f68u: goto label_240f68;
        case 0x240f74u: goto label_240f74;
        default: break;
    }

    ctx->pc = 0x240548u;

    // 0x240548: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x240548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x24054c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x24054cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x240550: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x240550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240554: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x240554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x240558: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x240558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x24055c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x24055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x240560: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x240560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x240564: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x240564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x240568: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x240568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x24056c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x24056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x240570: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x240570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x240574: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x240574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240578: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24057c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24057Cu;
    {
        const bool branch_taken_0x24057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24057c) {
            ctx->pc = 0x240580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24057Cu;
            // 0x240580: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2405A8u;
            goto label_2405a8;
        }
    }
    ctx->pc = 0x240584u;
    // 0x240584: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x240584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x240588: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x240588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x24058c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24058Cu;
    {
        const bool branch_taken_0x24058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24058Cu;
        // 0x240590: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24058c) {
            ctx->pc = 0x2405A4u;
            goto label_2405a4;
        }
    }
    ctx->pc = 0x240594u;
    // 0x240594: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x240594u;
    {
        const bool branch_taken_0x240594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240594) {
            ctx->pc = 0x240598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240594u;
            // 0x240598: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2405A8u;
            goto label_2405a8;
        }
    }
    ctx->pc = 0x24059Cu;
    // 0x24059c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2405a0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2405a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2405a4:
    // 0x2405a4: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x2405a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_2405a8:
    // 0x2405a8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2405a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2405ac: 0x10400271  beqz        $v0, . + 4 + (0x271 << 2)
    ctx->pc = 0x2405ACu;
    {
        const bool branch_taken_0x2405ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405ACu;
        // 0x2405b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405ac) {
            ctx->pc = 0x240F74u;
            goto label_240f74;
        }
    }
    ctx->pc = 0x2405B4u;
    // 0x2405b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2405b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2405b8: 0x2442c210  addiu       $v0, $v0, -0x3DF0
    ctx->pc = 0x2405b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x2405bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2405bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2405c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2405c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2405c4: 0x800008  jr          $a0
    ctx->pc = 0x2405C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2405CCu: goto label_2405cc;
            case 0x240724u: goto label_240724;
            case 0x240934u: goto label_240934;
            case 0x240A8Cu: goto label_240a8c;
            case 0x240AFCu: goto label_240afc;
            case 0x240C64u: goto label_240c64;
            case 0x240CB4u: goto label_240cb4;
            case 0x240D94u: goto label_240d94;
            case 0x240E8Cu: goto label_240e8c;
            case 0x240ECCu: goto label_240ecc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2405C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2405CCu;
label_2405cc:
    // 0x2405cc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2405CCu;
    SET_GPR_U32(ctx, 31, 0x2405D4u);
    ctx->pc = 0x2405D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405CCu;
    // 0x2405d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2405CCu, 0x2405D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405D4u;
label_2405d4:
    // 0x2405d4: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2405d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2405d8: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x2405d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2405dc: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x2405dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x2405e0: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x2405e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x2405e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2405E4u;
    {
        const bool branch_taken_0x2405e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405E4u;
        // 0x2405e8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405e4) {
            ctx->pc = 0x240604u;
            goto label_240604;
        }
    }
    ctx->pc = 0x2405ECu;
    // 0x2405ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2405ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2405f0: 0x2442c240  addiu       $v0, $v0, -0x3DC0
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
    // 0x2405f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2405f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2405f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2405fc: 0x800008  jr          $a0
    ctx->pc = 0x2405FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240604u: goto label_240604;
            case 0x240614u: goto label_240614;
            case 0x240624u: goto label_240624;
            case 0x240634u: goto label_240634;
            case 0x240644u: goto label_240644;
            case 0x240654u: goto label_240654;
            case 0x240664u: goto label_240664;
            case 0x240674u: goto label_240674;
            case 0x240684u: goto label_240684;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2405FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240604u;
label_240604:
    // 0x240604: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240608: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x240608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x24060c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24060Cu;
    {
        const bool branch_taken_0x24060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24060Cu;
        // 0x240610: 0x8c440108  lw          $a0, 0x108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24060c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240614u;
label_240614:
    // 0x240614: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240618: 0x8c430884  lw          $v1, 0x884($v0)
    ctx->pc = 0x240618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2180)));
    // 0x24061c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24061Cu;
    {
        const bool branch_taken_0x24061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24061Cu;
        // 0x240620: 0x8c440888  lw          $a0, 0x888($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24061c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240624u;
label_240624:
    // 0x240624: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240628: 0x8c431964  lw          $v1, 0x1964($v0)
    ctx->pc = 0x240628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6500)));
    // 0x24062c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24062Cu;
    {
        const bool branch_taken_0x24062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24062Cu;
        // 0x240630: 0x8c441968  lw          $a0, 0x1968($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24062c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240634u;
label_240634:
    // 0x240634: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240638: 0x8c431964  lw          $v1, 0x1964($v0)
    ctx->pc = 0x240638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6500)));
    // 0x24063c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24063Cu;
    {
        const bool branch_taken_0x24063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24063Cu;
        // 0x240640: 0x8c441968  lw          $a0, 0x1968($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24063c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240644u;
label_240644:
    // 0x240644: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240648: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x240648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x24064c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24064Cu;
    {
        const bool branch_taken_0x24064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24064Cu;
        // 0x240650: 0x8c440d64  lw          $a0, 0xD64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24064c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240654u;
label_240654:
    // 0x240654: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240658: 0x8c4315bc  lw          $v1, 0x15BC($v0)
    ctx->pc = 0x240658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5564)));
    // 0x24065c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24065Cu;
    {
        const bool branch_taken_0x24065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24065Cu;
        // 0x240660: 0x8c4415c0  lw          $a0, 0x15C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24065c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240664u;
label_240664:
    // 0x240664: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240668: 0x8c4315bc  lw          $v1, 0x15BC($v0)
    ctx->pc = 0x240668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5564)));
    // 0x24066c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24066Cu;
    {
        const bool branch_taken_0x24066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24066Cu;
        // 0x240670: 0x8c4415c0  lw          $a0, 0x15C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24066c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240674u;
label_240674:
    // 0x240674: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240678: 0x8c43110c  lw          $v1, 0x110C($v0)
    ctx->pc = 0x240678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4364)));
    // 0x24067c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24067Cu;
    {
        const bool branch_taken_0x24067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24067Cu;
        // 0x240680: 0x8c441110  lw          $a0, 0x1110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24067c) {
            ctx->pc = 0x240690u;
            goto label_240690;
        }
    }
    ctx->pc = 0x240684u;
label_240684:
    // 0x240684: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240688: 0x8c432e2c  lw          $v1, 0x2E2C($v0)
    ctx->pc = 0x240688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11820)));
    // 0x24068c: 0x8c442e30  lw          $a0, 0x2E30($v0)
    ctx->pc = 0x24068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11824)));
label_240690:
    // 0x240690: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x240690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240694: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x240694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x240698: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x240698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x24069c: 0x264306d0  addiu       $v1, $s2, 0x6D0
    ctx->pc = 0x24069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x2406a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2406a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2406a4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2406a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2406a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2406a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2406ac: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2406acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2406b0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2406b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2406b4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2406b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2406b8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2406b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2406bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2406bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2406c0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2406c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2406c4: 0x26420580  addiu       $v0, $s2, 0x580
    ctx->pc = 0x2406c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x2406c8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2406C8u;
    {
        const bool branch_taken_0x2406c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2406CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406C8u;
        // 0x2406cc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406c8) {
            ctx->pc = 0x2406E4u;
            goto label_2406e4;
        }
    }
    ctx->pc = 0x2406D0u;
    // 0x2406d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2406d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2406d4: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x2406d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x2406d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2406d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2406dc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2406dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2406e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2406e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2406e4:
    // 0x2406e4: 0xc64006e0  lwc1        $f0, 0x6E0($s2)
    ctx->pc = 0x2406e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2406e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2406e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2406ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2406ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2406f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2406f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2406f4: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x2406f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x2406f8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2406f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2406fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2406fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240700: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x240700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240704: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x240704u;
    SET_GPR_U32(ctx, 31, 0x24070Cu);
    ctx->pc = 0x240708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240704u;
    // 0x240708: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x240704u, 0x24070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24070Cu;
label_24070c:
    // 0x24070c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24070cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240710: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x240710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x240714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24071c: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x24071cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x240720: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x240720u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_240724:
    // 0x240724: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x240724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x240728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24072c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24072cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240730: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x240730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x240734: 0xc0989d4  jal         func_262750
    ctx->pc = 0x240734u;
    SET_GPR_U32(ctx, 31, 0x24073Cu);
    ctx->pc = 0x240738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240734u;
    // 0x240738: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x240734u, 0x24073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24073Cu;
label_24073c:
    // 0x24073c: 0xc6410600  lwc1        $f1, 0x600($s2)
    ctx->pc = 0x24073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x240740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240744: 0x0  nop
    ctx->pc = 0x240744u;
    // NOP
    // 0x240748: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x240748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24074c: 0x0  nop
    ctx->pc = 0x24074cu;
    // NOP
    // 0x240750: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x240750u;
    {
        const bool branch_taken_0x240750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240750u;
        // 0x240754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240750) {
            ctx->pc = 0x240768u;
            goto label_240768;
        }
    }
    ctx->pc = 0x240758u;
    // 0x240758: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x240758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24075c: 0xa2420617  sb          $v0, 0x617($s2)
    ctx->pc = 0x24075cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x240760: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x240760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x240764: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x240764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
label_240768:
    // 0x240768: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x240768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24076c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24076cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x240770: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x240770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x240774: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x240774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x240778: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x240778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24077c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24077cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x240784: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x240784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x240788: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24078c: 0x26430580  addiu       $v1, $s2, 0x580
    ctx->pc = 0x24078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x240790: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x240790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    // 0x240794: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x240794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240798: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x240798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24079c: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x24079cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2407a0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2407a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2407a4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2407a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2407a8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2407a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2407ac: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2407acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2407b0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2407b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2407b4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2407b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2407b8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2407b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2407bc: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2407bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2407c0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2407c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2407c4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2407c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2407c8: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2407c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2407cc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2407ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2407d0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2407d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2407d4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2407d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2407d8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2407d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2407dc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2407dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2407e0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2407e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2407e4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2407e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2407e8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2407e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2407ec: 0x10710006  beq         $v1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2407ECu;
    {
        const bool branch_taken_0x2407ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2407F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407ECu;
        // 0x2407f0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407ec) {
            ctx->pc = 0x240808u;
            goto label_240808;
        }
    }
    ctx->pc = 0x2407F4u;
    // 0x2407f4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2407f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2407f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2407f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2407fc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2407fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x240800: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x240800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240804: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x240804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_240808:
    // 0x240808: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x240808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x24080c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24080cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240810: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x240810u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240814: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x240814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x240818: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x240818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24081c: 0xda440580  lqc2        $vf4, 0x580($s2)
    ctx->pc = 0x24081cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x240820: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x240820u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240824: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x240824u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x240828: 0xfa440580  sqc2        $vf4, 0x580($s2)
    ctx->pc = 0x240828u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24082c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24082Cu;
    SET_GPR_U32(ctx, 31, 0x240834u);
    ctx->pc = 0x240830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24082Cu;
    // 0x240830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24082Cu, 0x240834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240834u;
label_240834:
    // 0x240834: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240834u;
    {
        const bool branch_taken_0x240834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240834u;
        // 0x240838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240834) {
            ctx->pc = 0x240840u;
            goto label_240840;
        }
    }
    ctx->pc = 0x24083Cu;
    // 0x24083c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24083cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_240840:
    // 0x240840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240844: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x240844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x240848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24084c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24084Cu;
    SET_GPR_U32(ctx, 31, 0x240854u);
    ctx->pc = 0x240850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24084Cu;
    // 0x240850: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24084Cu, 0x240854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240854u;
label_240854:
    // 0x240854: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x240854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x240858: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x240858u;
    SET_GPR_U32(ctx, 31, 0x240860u);
    ctx->pc = 0x24085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240858u;
    // 0x24085c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x240858u, 0x240860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240860u;
label_240860:
    // 0x240860: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x240860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x240864: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x240864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x240868: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x240868u;
    {
        const bool branch_taken_0x240868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240868u;
        // 0x24086c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240868) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x240870u;
    // 0x240870: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x240870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240874: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x240874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240878: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x240878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24087c: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x24087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x240880: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240880u;
    {
        const bool branch_taken_0x240880 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x240880) {
            ctx->pc = 0x240884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240880u;
            // 0x240884: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2408A4u;
            goto label_2408a4;
        }
    }
    ctx->pc = 0x240888u;
    // 0x240888: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x240888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24088c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x24088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x240890: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x240890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240894: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x240894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240898: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x240898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24089c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24089cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2408a0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2408a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2408a4:
    // 0x2408a4: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2408A4u;
    {
        const bool branch_taken_0x2408a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2408A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408A4u;
        // 0x2408a8: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408a4) {
            ctx->pc = 0x2408C8u;
            goto label_2408c8;
        }
    }
    ctx->pc = 0x2408ACu;
    // 0x2408ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2408acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2408b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2408b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2408b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2408b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2408b8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2408b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2408bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2408bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2408c0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2408c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2408c4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2408c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2408c8:
    // 0x2408c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2408c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2408cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2408ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2408d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2408d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2408d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2408d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2408d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2408dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2408e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2408e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2408e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2408e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2408e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2408ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2408ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408f0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2408f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2408f4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2408f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2408f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2408fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2408fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240900: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x240900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x240904: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x240904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240908: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x240908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x24090c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x24090Cu;
    SET_GPR_U32(ctx, 31, 0x240914u);
    ctx->pc = 0x240910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24090Cu;
    // 0x240910: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x24090Cu, 0x240914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240914u;
label_240914:
    // 0x240914: 0x14500198  bne         $v0, $s0, . + 4 + (0x198 << 2)
    ctx->pc = 0x240914u;
    {
        const bool branch_taken_0x240914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x240918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240914u;
        // 0x240918: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240914) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x24091Cu;
    // 0x24091c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x24091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240924: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x240924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240928: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x240928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24092c: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x24092Cu;
    {
        const bool branch_taken_0x24092c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24092Cu;
        // 0x240930: 0xa24302f6  sb          $v1, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24092c) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x240934u;
label_240934:
    // 0x240934: 0xc09d91a  jal         func_276468
    ctx->pc = 0x240934u;
    SET_GPR_U32(ctx, 31, 0x24093Cu);
    ctx->pc = 0x240938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240934u;
    // 0x240938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x240934u, 0x24093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24093Cu;
label_24093c:
    // 0x24093c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x240940: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x240940u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x240944: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x240944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x240948: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x240948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x24094c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24094Cu;
    {
        const bool branch_taken_0x24094c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24094Cu;
        // 0x240950: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24094c) {
            ctx->pc = 0x24096Cu;
            goto label_24096c;
        }
    }
    ctx->pc = 0x240954u;
    // 0x240954: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240958: 0x2442c420  addiu       $v0, $v0, -0x3BE0
    ctx->pc = 0x240958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951968));
    // 0x24095c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240960: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240964: 0x800008  jr          $a0
    ctx->pc = 0x240964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24096Cu: goto label_24096c;
            case 0x24097Cu: goto label_24097c;
            case 0x24098Cu: goto label_24098c;
            case 0x24099Cu: goto label_24099c;
            case 0x2409ACu: goto label_2409ac;
            case 0x2409BCu: goto label_2409bc;
            case 0x2409CCu: goto label_2409cc;
            case 0x2409DCu: goto label_2409dc;
            case 0x2409ECu: goto label_2409ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240964u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24096Cu;
label_24096c:
    // 0x24096c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240970: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x240970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x240974: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x240974u;
    {
        const bool branch_taken_0x240974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240974u;
        // 0x240978: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240974) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x24097Cu;
label_24097c:
    // 0x24097c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240980: 0x8c43088c  lw          $v1, 0x88C($v0)
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
    // 0x240984: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x240984u;
    {
        const bool branch_taken_0x240984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240984u;
        // 0x240988: 0x8c440890  lw          $a0, 0x890($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240984) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x24098Cu;
label_24098c:
    // 0x24098c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240990: 0x8c43196c  lw          $v1, 0x196C($v0)
    ctx->pc = 0x240990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6508)));
    // 0x240994: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x240994u;
    {
        const bool branch_taken_0x240994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240994u;
        // 0x240998: 0x8c441970  lw          $a0, 0x1970($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240994) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x24099Cu;
label_24099c:
    // 0x24099c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2409a0: 0x8c43196c  lw          $v1, 0x196C($v0)
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6508)));
    // 0x2409a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2409A4u;
    {
        const bool branch_taken_0x2409a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409A4u;
        // 0x2409a8: 0x8c441970  lw          $a0, 0x1970($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409a4) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x2409ACu;
label_2409ac:
    // 0x2409ac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2409b0: 0x8c430d68  lw          $v1, 0xD68($v0)
    ctx->pc = 0x2409b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3432)));
    // 0x2409b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2409B4u;
    {
        const bool branch_taken_0x2409b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409B4u;
        // 0x2409b8: 0x8c440d6c  lw          $a0, 0xD6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409b4) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x2409BCu;
label_2409bc:
    // 0x2409bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2409bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2409c0: 0x8c4315c4  lw          $v1, 0x15C4($v0)
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5572)));
    // 0x2409c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2409C4u;
    {
        const bool branch_taken_0x2409c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409C4u;
        // 0x2409c8: 0x8c4415c8  lw          $a0, 0x15C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409c4) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x2409CCu;
label_2409cc:
    // 0x2409cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2409ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2409d0: 0x8c4315c4  lw          $v1, 0x15C4($v0)
    ctx->pc = 0x2409d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5572)));
    // 0x2409d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2409D4u;
    {
        const bool branch_taken_0x2409d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409D4u;
        // 0x2409d8: 0x8c4415c8  lw          $a0, 0x15C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409d4) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x2409DCu;
label_2409dc:
    // 0x2409dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2409e0: 0x8c431114  lw          $v1, 0x1114($v0)
    ctx->pc = 0x2409e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4372)));
    // 0x2409e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2409E4u;
    {
        const bool branch_taken_0x2409e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409E4u;
        // 0x2409e8: 0x8c441118  lw          $a0, 0x1118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409e4) {
            ctx->pc = 0x2409F8u;
            goto label_2409f8;
        }
    }
    ctx->pc = 0x2409ECu;
label_2409ec:
    // 0x2409ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2409ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2409f0: 0x8c432e24  lw          $v1, 0x2E24($v0)
    ctx->pc = 0x2409f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11812)));
    // 0x2409f4: 0x8c442e28  lw          $a0, 0x2E28($v0)
    ctx->pc = 0x2409f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11816)));
label_2409f8:
    // 0x2409f8: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2409f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2409fc: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x2409fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x240a00: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x240a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240a04: 0xc09b9ea  jal         func_26E7A8
    ctx->pc = 0x240A04u;
    SET_GPR_U32(ctx, 31, 0x240A0Cu);
    ctx->pc = 0x240A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A04u;
    // 0x240a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E7A8u, 0x240A04u, 0x240A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A0Cu;
label_240a0c:
    // 0x240a0c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x240a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240a10: 0x264306d0  addiu       $v1, $s2, 0x6D0
    ctx->pc = 0x240a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x240a14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x240a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240a18: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x240a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240a1c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x240a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240a20: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x240a20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240a24: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x240a24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x240a28: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x240a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240a2c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x240a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x240a30: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x240a30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240a34: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x240a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240a38: 0x26420580  addiu       $v0, $s2, 0x580
    ctx->pc = 0x240a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x240a3c: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x240A3Cu;
    {
        const bool branch_taken_0x240a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x240A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A3Cu;
        // 0x240a40: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a3c) {
            ctx->pc = 0x240A58u;
            goto label_240a58;
        }
    }
    ctx->pc = 0x240A44u;
    // 0x240a44: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240a48: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x240a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x240a4c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x240a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x240a50: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x240a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240a54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x240a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_240a58:
    // 0x240a58: 0xc64006e0  lwc1        $f0, 0x6E0($s2)
    ctx->pc = 0x240a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240a5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x240a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x240a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240a64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x240a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a68: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x240a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x240a6c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x240a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240a78: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x240A78u;
    SET_GPR_U32(ctx, 31, 0x240A80u);
    ctx->pc = 0x240A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A78u;
    // 0x240a7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x240A78u, 0x240A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A80u;
label_240a80:
    // 0x240a80: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240a84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240a88: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x240a88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_240a8c:
    // 0x240a8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x240A8Cu;
    SET_GPR_U32(ctx, 31, 0x240A94u);
    ctx->pc = 0x240A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A8Cu;
    // 0x240a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x240A8Cu, 0x240A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A94u;
label_240a94:
    // 0x240a94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x240A94u;
    {
        const bool branch_taken_0x240a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a94) {
            ctx->pc = 0x240AD4u;
            goto label_240ad4;
        }
    }
    ctx->pc = 0x240A9Cu;
    // 0x240a9c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x240A9Cu;
    SET_GPR_U32(ctx, 31, 0x240AA4u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x240A9Cu, 0x240AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AA4u;
label_240aa4:
    // 0x240aa4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x240aa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x240aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ab0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x240ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x240ab4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x240ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x240ab8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x240ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x240abc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x240ac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240ac4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x240ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x240ac8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x240ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240acc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x240ACCu;
    SET_GPR_U32(ctx, 31, 0x240AD4u);
    ctx->pc = 0x240AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240ACCu;
    // 0x240ad0: 0xe64016e4  swc1        $f0, 0x16E4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5860), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x240ACCu, 0x240AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AD4u;
label_240ad4:
    // 0x240ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240ad8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240adc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x240ADCu;
    SET_GPR_U32(ctx, 31, 0x240AE4u);
    ctx->pc = 0x240AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240ADCu;
    // 0x240ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x240ADCu, 0x240AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AE4u;
label_240ae4:
    // 0x240ae4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x240ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x240ae8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240aec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x240AECu;
    SET_GPR_U32(ctx, 31, 0x240AF4u);
    ctx->pc = 0x240AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240AECu;
    // 0x240af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x240AECu, 0x240AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AF4u;
label_240af4:
    // 0x240af4: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x240AF4u;
    {
        const bool branch_taken_0x240af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF4u;
        // 0x240af8: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240af4) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x240AFCu;
label_240afc:
    // 0x240afc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x240AFCu;
    SET_GPR_U32(ctx, 31, 0x240B04u);
    ctx->pc = 0x240B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240AFCu;
    // 0x240b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x240AFCu, 0x240B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B04u;
label_240b04:
    // 0x240b04: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x240b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240b08: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x240b08u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x240b0c: 0x8c621be8  lw          $v0, 0x1BE8($v1)
    ctx->pc = 0x240b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7144)));
    // 0x240b10: 0x8c641bec  lw          $a0, 0x1BEC($v1)
    ctx->pc = 0x240b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7148)));
    // 0x240b14: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x240b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240b18: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x240b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x240b1c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x240b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240b20: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x240b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240b24: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x240b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240b28: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x240b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x240b2c: 0xc64c06e0  lwc1        $f12, 0x6E0($s2)
    ctx->pc = 0x240b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x240b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b34: 0xc051e62  jal         func_147988
    ctx->pc = 0x240B34u;
    SET_GPR_U32(ctx, 31, 0x240B3Cu);
    ctx->pc = 0x240B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B34u;
    // 0x240b38: 0x265506d0  addiu       $s5, $s2, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x240B34u, 0x240B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B3Cu;
label_240b3c:
    // 0x240b3c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x240b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b44: 0xc051f10  jal         func_147C40
    ctx->pc = 0x240B44u;
    SET_GPR_U32(ctx, 31, 0x240B4Cu);
    ctx->pc = 0x240B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B44u;
    // 0x240b48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x240B44u, 0x240B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B4Cu;
label_240b4c:
    // 0x240b4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x240b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x240b50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x240b54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x240b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240b58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240b5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240b60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x240b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b64: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x240b68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x240b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b70: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x240b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240b74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x240b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x240b78: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x240b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x240b7c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x240b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x240b80: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x240b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x240b84: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x240B84u;
    SET_GPR_U32(ctx, 31, 0x240B8Cu);
    ctx->pc = 0x240B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B84u;
    // 0x240b88: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x240B84u, 0x240B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B8Cu;
label_240b8c:
    // 0x240b8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x240b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x240b90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x240b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b94: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x240B94u;
    SET_GPR_U32(ctx, 31, 0x240B9Cu);
    ctx->pc = 0x240B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B94u;
    // 0x240b98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x240B94u, 0x240B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B9Cu;
label_240b9c:
    // 0x240b9c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x240b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x240ba0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x240ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x240ba4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x240ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x240ba8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x240ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240bac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x240bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x240bb0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x240bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x240bb4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x240bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x240bb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x240bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bbc: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x240bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x240bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bc4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x240bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240bc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240bc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x240bccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bd0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x240BD0u;
    SET_GPR_U32(ctx, 31, 0x240BD8u);
    ctx->pc = 0x240BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240BD0u;
    // 0x240bd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x240BD0u, 0x240BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BD8u;
label_240bd8:
    // 0x240bd8: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x240BD8u;
    {
        const bool branch_taken_0x240bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x240bd8) {
            ctx->pc = 0x240BFCu;
            goto label_240bfc;
        }
    }
    ctx->pc = 0x240BE0u;
    // 0x240be0: 0x12b00006  beq         $s5, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x240BE0u;
    {
        const bool branch_taken_0x240be0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        ctx->pc = 0x240BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BE0u;
        // 0x240be4: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240be0) {
            ctx->pc = 0x240BFCu;
            goto label_240bfc;
        }
    }
    ctx->pc = 0x240BE8u;
    // 0x240be8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x240be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x240bec: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x240becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240bf0: 0xe64006d0  swc1        $f0, 0x6D0($s2)
    ctx->pc = 0x240bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1744), bits); }
    // 0x240bf4: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x240bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x240bf8: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x240bf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_240bfc:
    // 0x240bfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x240bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240c00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x240c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x240c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c08: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x240c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x240c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240c10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240c10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c14: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x240C14u;
    SET_GPR_U32(ctx, 31, 0x240C1Cu);
    ctx->pc = 0x240C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C14u;
    // 0x240c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x240C14u, 0x240C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C1Cu;
label_240c1c:
    // 0x240c1c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x240c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x240c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c24: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x240C24u;
    SET_GPR_U32(ctx, 31, 0x240C2Cu);
    ctx->pc = 0x240C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C24u;
    // 0x240c28: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x240C24u, 0x240C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C2Cu;
label_240c2c:
    // 0x240c2c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x240c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x240c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x240c38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240c3c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x240c3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x240c40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x240c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x240c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x240c4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c50: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x240C50u;
    SET_GPR_U32(ctx, 31, 0x240C58u);
    ctx->pc = 0x240C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C50u;
    // 0x240c54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x240C50u, 0x240C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C58u;
label_240c58:
    // 0x240c58: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x240c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240c5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x240c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x240c60: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x240c60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_240c64:
    // 0x240c64: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x240c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x240c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c70: 0xc055f06  jal         func_157C18
    ctx->pc = 0x240C70u;
    SET_GPR_U32(ctx, 31, 0x240C78u);
    ctx->pc = 0x240C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C70u;
    // 0x240c74: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x240C70u, 0x240C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C78u;
label_240c78:
    // 0x240c78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240C78u;
    {
        const bool branch_taken_0x240c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c78) {
            ctx->pc = 0x240C8Cu;
            goto label_240c8c;
        }
    }
    ctx->pc = 0x240C80u;
    // 0x240c80: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240c84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240c88: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x240c88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_240c8c:
    // 0x240c8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240c90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x240c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x240c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c98: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x240C98u;
    SET_GPR_U32(ctx, 31, 0x240CA0u);
    ctx->pc = 0x240C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C98u;
    // 0x240c9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x240C98u, 0x240CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CA0u;
label_240ca0:
    // 0x240ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ca4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x240CA4u;
    SET_GPR_U32(ctx, 31, 0x240CACu);
    ctx->pc = 0x240CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240CA4u;
    // 0x240ca8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x240CA4u, 0x240CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CACu;
label_240cac:
    // 0x240cac: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x240CACu;
    {
        const bool branch_taken_0x240cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CACu;
        // 0x240cb0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cac) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x240CB4u;
label_240cb4:
    // 0x240cb4: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x240cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x240cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240cbc: 0xae40024c  sw          $zero, 0x24C($s2)
    ctx->pc = 0x240cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
    // 0x240cc0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x240cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x240cc4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x240CC4u;
    SET_GPR_U32(ctx, 31, 0x240CCCu);
    ctx->pc = 0x240CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240CC4u;
    // 0x240cc8: 0xae420250  sw          $v0, 0x250($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x240CC4u, 0x240CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CCCu;
label_240ccc:
    // 0x240ccc: 0xc64006e0  lwc1        $f0, 0x6E0($s2)
    ctx->pc = 0x240cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240cd0: 0x264406d0  addiu       $a0, $s2, 0x6D0
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x240cd4: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240cd8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240cdc: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x240cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x240ce0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x240ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240ce4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x240ce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240ce8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x240ce8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240cec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x240cecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x240cf0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x240cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240cf4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x240cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x240cf8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x240cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240cfc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x240cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240d00: 0x26420580  addiu       $v0, $s2, 0x580
    ctx->pc = 0x240d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x240d04: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x240D04u;
    {
        const bool branch_taken_0x240d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x240D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D04u;
        // 0x240d08: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d04) {
            ctx->pc = 0x240D20u;
            goto label_240d20;
        }
    }
    ctx->pc = 0x240D0Cu;
    // 0x240d0c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240d10: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x240d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x240d14: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x240d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x240d18: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x240d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240d1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x240d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_240d20:
    // 0x240d20: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x240d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x240d24: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x240d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x240d28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240d2c: 0xda440580  lqc2        $vf4, 0x580($s2)
    ctx->pc = 0x240d2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x240d30: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x240d30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x240d34: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x240d34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x240d38: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x240d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x240d3c: 0xfa440580  sqc2        $vf4, 0x580($s2)
    ctx->pc = 0x240d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240d40: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x240d44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240d48: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x240d48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x240d4c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x240d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x240d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d54: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x240D54u;
    SET_GPR_U32(ctx, 31, 0x240D5Cu);
    ctx->pc = 0x240D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D54u;
    // 0x240d58: 0xe6410600  swc1        $f1, 0x600($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x240D54u, 0x240D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D5Cu;
label_240d5c:
    // 0x240d5c: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x240d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x240d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x240d68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240d6c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x240d6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x240d70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x240d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x240d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x240d7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d80: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x240D80u;
    SET_GPR_U32(ctx, 31, 0x240D88u);
    ctx->pc = 0x240D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D80u;
    // 0x240d84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x240D80u, 0x240D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D88u;
label_240d88:
    // 0x240d88: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x240d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240d8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x240d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x240d90: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x240d90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_240d94:
    // 0x240d94: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x240d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x240d98: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x240d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x240d9c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x240d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x240da0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x240da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x240da4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x240da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x240da8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x240da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x240dac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240db0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x240db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x240db4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x240db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x240db8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x240db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x240dbc: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x240dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x240dc0: 0xae4316d0  sw          $v1, 0x16D0($s2)
    ctx->pc = 0x240dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
    // 0x240dc4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x240DC4u;
    SET_GPR_U32(ctx, 31, 0x240DCCu);
    ctx->pc = 0x240DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DC4u;
    // 0x240dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x240DC4u, 0x240DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DCCu;
label_240dcc:
    // 0x240dcc: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x240dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240dd0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x240dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x240dd4: 0x26420580  addiu       $v0, $s2, 0x580
    ctx->pc = 0x240dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x240dd8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x240dd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ddc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x240ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240de0: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x240de0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240de4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x240de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x240de8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x240de8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x240dec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x240decu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x240df0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x240df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240df4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x240df4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240df8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x240df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240dfc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x240dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240e00: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240e04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x240E04u;
    {
        const bool branch_taken_0x240e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E04u;
        // 0x240e08: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e04) {
            ctx->pc = 0x240E20u;
            goto label_240e20;
        }
    }
    ctx->pc = 0x240E0Cu;
    // 0x240e0c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240e10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x240e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x240e14: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x240e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x240e18: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x240e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240e1c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x240e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_240e20:
    // 0x240e20: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x240e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240e24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x240e24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240e28: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x240e28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240e2c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x240e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x240e30: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x240e30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240e34: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x240e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240e38: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x240e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240e3c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x240e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x240e40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x240e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x240e44: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x240e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240e48: 0x0  nop
    ctx->pc = 0x240e48u;
    // NOP
    // 0x240e4c: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x240E4Cu;
    {
        const bool branch_taken_0x240e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E4Cu;
        // 0x240e50: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e4c) {
            ctx->pc = 0x240F74u;
            goto label_240f74;
        }
    }
    ctx->pc = 0x240E54u;
    // 0x240e54: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240e58: 0x264206d0  addiu       $v0, $s2, 0x6D0
    ctx->pc = 0x240e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x240e5c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240E5Cu;
    {
        const bool branch_taken_0x240e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240e5c) {
            ctx->pc = 0x240E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240E5Cu;
            // 0x240e60: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240E80u;
            goto label_240e80;
        }
    }
    ctx->pc = 0x240E64u;
    // 0x240e64: 0xc64006d0  lwc1        $f0, 0x6D0($s2)
    ctx->pc = 0x240e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240e68: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x240e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x240e6c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x240e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240e70: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x240e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x240e74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x240e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240e78: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x240e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x240e7c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_240e80:
    // 0x240e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240e84: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x240E84u;
    {
        const bool branch_taken_0x240e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E84u;
        // 0x240e88: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e84) {
            ctx->pc = 0x240F74u;
            goto label_240f74;
        }
    }
    ctx->pc = 0x240E8Cu;
label_240e8c:
    // 0x240e8c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x240E8Cu;
    SET_GPR_U32(ctx, 31, 0x240E94u);
    ctx->pc = 0x240E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E8Cu;
    // 0x240e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x240E8Cu, 0x240E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E94u;
label_240e94:
    // 0x240e94: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x240e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240e98: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x240e98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x240e9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x240e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ea4: 0x8c651bf0  lw          $a1, 0x1BF0($v1)
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7152)));
    // 0x240ea8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x240ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240eac: 0x8c661bf4  lw          $a2, 0x1BF4($v1)
    ctx->pc = 0x240eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7156)));
    // 0x240eb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240eb4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x240eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x240eb8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x240EB8u;
    SET_GPR_U32(ctx, 31, 0x240EC0u);
    ctx->pc = 0x240EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240EB8u;
    // 0x240ebc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x240EB8u, 0x240EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EC0u;
label_240ec0:
    // 0x240ec0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240ec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240ec8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x240ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_240ecc:
    // 0x240ecc: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x240eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240ed0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x240ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x240ed4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x240ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x240ed8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x240edc: 0xc641024c  lwc1        $f1, 0x24C($s2)
    ctx->pc = 0x240edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240ee0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x240ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x240ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240ee8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x240ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x240eec: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x240eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x240ef0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x240ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240ef4: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x240ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x240ef8: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x240ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
    // 0x240efc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x240efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240f00: 0x0  nop
    ctx->pc = 0x240f00u;
    // NOP
    // 0x240f04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x240F04u;
    {
        const bool branch_taken_0x240f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F04u;
        // 0x240f08: 0xe641024c  swc1        $f1, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f04) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240F0Cu;
    // 0x240f0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x240f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x240f10: 0xe654024c  swc1        $f20, 0x24C($s2)
    ctx->pc = 0x240f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
    // 0x240f14: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x240f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x240f18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x240f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x240f1c: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x240f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_240f20:
    // 0x240f20: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x240f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x240f24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240F24u;
    {
        const bool branch_taken_0x240f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F24u;
        // 0x240f28: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f24) {
            ctx->pc = 0x240F44u;
            goto label_240f44;
        }
    }
    ctx->pc = 0x240F2Cu;
    // 0x240f2c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x240f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x240f30: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x240f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x240f34: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x240f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x240f38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x240f3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x240f40: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x240f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_240f44:
    // 0x240f44: 0xc055f06  jal         func_157C18
    ctx->pc = 0x240F44u;
    SET_GPR_U32(ctx, 31, 0x240F4Cu);
    ctx->pc = 0x240F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F44u;
    // 0x240f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x240F44u, 0x240F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F4Cu;
label_240f4c:
    // 0x240f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240F4Cu;
    {
        const bool branch_taken_0x240f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F4Cu;
        // 0x240f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f4c) {
            ctx->pc = 0x240F60u;
            goto label_240f60;
        }
    }
    ctx->pc = 0x240F54u;
    // 0x240f54: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x240F54u;
    SET_GPR_U32(ctx, 31, 0x240F5Cu);
    ctx->pc = 0x240F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F54u;
    // 0x240f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x240F54u, 0x240F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F5Cu;
label_240f5c:
    // 0x240f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240f60:
    // 0x240f60: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x240F60u;
    SET_GPR_U32(ctx, 31, 0x240F68u);
    ctx->pc = 0x240F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F60u;
    // 0x240f64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x240F60u, 0x240F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F68u;
label_240f68:
    // 0x240f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f6c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x240F6Cu;
    SET_GPR_U32(ctx, 31, 0x240F74u);
    ctx->pc = 0x240F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F6Cu;
    // 0x240f70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x240F6Cu, 0x240F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F74u;
label_240f74:
    // 0x240f74: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x240f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_240f78:
    // 0x240f78: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x240f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x240f7c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x240f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x240f80: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x240f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x240f84: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x240f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x240f88: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x240f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x240f8c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x240f8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x240f90: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x240f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x240f94: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x240f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240f98: 0x3e00008  jr          $ra
    ctx->pc = 0x240F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F98u;
        // 0x240f9c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240FA0u;
}
